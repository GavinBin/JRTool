//
//  EmailCacheTool.h
//  email
//
//  Created by kl on 2018/2/1.
//  Copyright © 2018年 Financial. All rights reserved.
//

#import <Foundation/Foundation.h>
@class MCOMessageParser;
@interface EmailCacheTool : NSObject
+ (BOOL)saveMessageParser:(MCOMessageParser*)model messageData:(NSData *)data;
+(NSMutableArray<NSData *> *)getEmailArray;
@end


