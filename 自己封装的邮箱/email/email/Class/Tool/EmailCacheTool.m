//
//  EmailCacheTool.m
//  email
//
//  Created by kl on 2018/2/1.
//  Copyright © 2018年 Financial. All rights reserved.
//

#import "EmailCacheTool.h"
#import <FMDB/FMDB.h>
#import <MailCore/MCOMessageParser.h>
#import <MailCore/MCOConstants.h>
#import <objc/runtime.h>

static char *messageParserFlags = "flags";
static FMDatabase *_db;

@implementation EmailCacheTool

+ (void)initialize
{
    // 获取数据的文件路径
    
    NSString *path = [NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES) lastObject];
    NSString *sqliteFilePath = [path stringByAppendingPathComponent:@"emailCache.sqlite"];
    // 打开数据库
    _db = [FMDatabase databaseWithPath:sqliteFilePath];
    // 创建表
    if ([_db open]) {
        // 在企业级开发中, 写sql语句最好先用图形工具编写测试之后拷贝到项目中
        NSString *sql = @"CREATE TABLE IF NOT EXISTS emailCache  (id INTEGER PRIMARY KEY AUTOINCREMENT,messageID TEXT,subject TEXT, displayName TEXT ,mailbox TEXT,date TEXT,flags INTEGER,data BLOB);";
        
        if([_db executeUpdate:sql])
        {
            NSLog(@"创建表成功");
        }
        [_db close];
    }
}
// 检查数据库是否有数据
+ (BOOL) isExistTable
{
    NSUInteger count = [_db intForQuery:@"select count(*) from emailCache"];
    return count;
}
// 存入数据
+ (BOOL)saveMessageParser:(MCOMessageParser*)model messageData:(NSData *)data
{
    [_db open];
    NSNumber *flagsNum = objc_getAssociatedObject(model, messageParserFlags);
    BOOL success = [_db executeUpdate:@"INSERT INTO emailCache (messageID,subject,displayName,mailbox,date,flags,data) VALUES (?, ?, ?, ?, ?, ?, ?)", model.header.messageID, model.header.subject,model.header.from.displayName,model.header.from.mailbox,model.header.date,[flagsNum stringValue],data];
    
    if (success) {

    }else{
        return NO;
    }
    [_db close];
    return YES;
}

+ (void)changeEmailState:(MCOMessageFlag)flag withMessageParser:(MCOMessageParser *)model
{
    // 删除 标记红旗  已阅读
    [_db open];
    
    if (flag&1 << 3) {  // 删除
        
    }
    
    
    if (flag&1<<0) {  // 未读
        
    }else{ // 已读
        
        
    }
    
    if (flag&1 << 2) {  // 红旗
        
    }else{ // 取消红旗
        
        
    }
    
    switch (flag) {
        case MCOMessageFlagDeleted: // 删除
        {
            
            
        }
            break;
        case MCOMessageFlagFlagged: // 红旗
        {
            
            
        }
            break;
            
        default:
            break;
    }
    
    
//    if (flagsNum.integerValue&1<<0) { // 未读
//
//    }else{ // 已读
//
//    }
//    if (flagsNum.integerValue&1<<2) {
//
//    }else{
//
//    }
    
}

//查询数据
+(NSMutableArray<NSData *> *)getEmailArray{
    [_db open];
    FMResultSet *set=[FMResultSet new];
    set = [_db executeQuery:@"select * from emailCache"];
    NSMutableArray *temp = [[NSMutableArray alloc] init];
    
    while([set next]) {
        [temp addObject:[[set resultDictionary] valueForKey:@"data"]];
    }
    [_db close];
    return temp;
}



@end
