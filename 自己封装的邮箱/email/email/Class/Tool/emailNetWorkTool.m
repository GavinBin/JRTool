//
//  emailNetWorkTool.m
//  email
//
//  Created by kl on 2018/1/26.
//  Copyright © 2018年 Financial. All rights reserved.
//
#import "emailNetWorkTool.h"
#import <MailCore/MailCore.h>
#import <MailCore/MCOAbstractMessage.h>
#import <objc/runtime.h>
#import "EmailCacheTool.h"
#define POP3PORT 110
#define POP3HOSTNAME @"mail.yonyou.com"

static char *messageParserFlags = "flags";
@interface emailNetWorkTool ()
//@property (nonatomic, strong) MCOPOPSession *popSession;

@end
MCOPOPSession *popSession;
@implementation emailNetWorkTool

#pragma mark - POP3登录验证邮箱
+ (void)POPlogin:(NSString *)username
                       password:(NSString *)password
                  errorBlock:(void(^)(NSError *error))errorBlock
{
//    username = @"wangbingi@yonyou.com";
//    password = @"wbingi268912.";
    
    popSession = [[MCOPOPSession alloc] init];
    popSession.hostname = POP3HOSTNAME;
    popSession.port = POP3PORT;
    popSession.username = username;
    popSession.password = password;
    popSession.connectionType = MCOConnectionTypeClear;
    [popSession setCheckCertificateEnabled:NO];

    MCOPOPOperation *popOperation = [popSession checkAccountOperation];
    [popOperation start:^(NSError * __nullable error) {
        if (error == nil) { // 成功
            errorBlock(error);
        } else {
            NSLog(@"login account failure: %@", error);
        }
    }];
}
#pragma mark - POP3获取邮箱数据
+ (void)getPOPMailData:(NSUInteger)mailindex withFolder:(NSString*)folder CompletionBlock:(void (^)(NSError *error, NSMutableArray <MCOMessageParser *> *messages, MCOIndexSet * vanishedMessages))completionBlock
{
    MCOPOPFetchMessagesOperation * FetchFoldersOperation = [popSession fetchMessagesOperation];
    [FetchFoldersOperation start:^(NSError * _Nullable error, NSArray * _Nullable msgArray) {
        if (msgArray.count == 0) {
            completionBlock(error, msgArray,nil);
            return ;
        }
        NSMutableArray *tempArr = [[NSMutableArray alloc] init];
        
        NSMutableArray *emailArr = [EmailCacheTool getEmailArray];
        
        for (NSData *messageData in emailArr) {
            //由data转换为MCOMessageParser
            MCOMessageParser * msgPaser = [MCOMessageParser messageParserWithData:messageData];
            objc_setAssociatedObject(msgPaser, messageParserFlags, @(MCOMessageFlagFlagged), OBJC_ASSOCIATION_ASSIGN);
//            [EmailCacheTool saveMessageParser:msgPaser messageData:messageData];
            [tempArr addObject:msgPaser];
        }
        completionBlock(error, tempArr,nil);
        return;

        [msgArray enumerateObjectsUsingBlock:^(MCOPOPMessageInfo *messageInfo, NSUInteger idx, BOOL * _Nonnull stop) {
            int index= messageInfo.index;
            MCOPOPFetchMessageOperation*messageOperation = [popSession fetchMessageOperationWithIndex: index];
            //开启异步请求, messageData为邮件内容
            [messageOperation start:^(NSError * error, NSData *messageData) {
                if (!error) {
                    //由data转换为MCOMessageParser
                    MCOMessageParser * msgPaser = [MCOMessageParser messageParserWithData:messageData];
                    objc_setAssociatedObject(msgPaser, messageParserFlags, @(MCOMessageFlagFlagged), OBJC_ASSOCIATION_ASSIGN);
                    [EmailCacheTool saveMessageParser:msgPaser messageData:messageData];
                    [tempArr addObject:msgPaser];
                    if ((msgArray.count-1) == idx) {
                        completionBlock(error, tempArr,nil);
                    }
                }else{
                    NSLog(@"获取邮件消息失败");
                }
            }];
            
        }];
        
    }];
}

@end
