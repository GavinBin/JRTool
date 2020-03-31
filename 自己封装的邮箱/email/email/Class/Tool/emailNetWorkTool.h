//
//  emailNetWorkTool.h
//  email
//
//  Created by kl on 2018/1/26.
//  Copyright © 2018年 Financial. All rights reserved.
//

#import <Foundation/Foundation.h>
@class MCOMessageParser,MCOIndexSet;
@interface emailNetWorkTool : NSObject
/**
    POP3登录验证邮箱
 */
+ (void)POPlogin:(NSString *)username
        password:(NSString *)password
      errorBlock:(void(^)(NSError *error))errorBlock;

/**
 POP3获取邮箱数据
 @param mailindex 第几页
 @param folder 那个文件夹
 @param completionBlock 成功回调
 */
+ (void)getPOPMailData:(NSUInteger)mailindex withFolder:(NSString*)folder CompletionBlock:(void (^)(NSError *error, NSMutableArray <MCOMessageParser *> *messages, MCOIndexSet * vanishedMessages))completionBlock;
@end
