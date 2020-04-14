//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EMConversation, EMMessage, NSArray, NSObject, NSString;
@protocol EMChatManagerDelegate, OS_dispatch_queue;

@protocol IEMChatManager <NSObject>
- (void)asyncDownloadMessageAttachments:(EMMessage *)arg1 progress:(void (^)(int))arg2 completion:(void (^)(EMMessage *, EMError *))arg3;
- (void)asyncDownloadMessageThumbnail:(EMMessage *)arg1 progress:(void (^)(int))arg2 completion:(void (^)(EMMessage *, EMError *))arg3;
- (void)asyncResendMessage:(EMMessage *)arg1 progress:(void (^)(int))arg2 completion:(void (^)(EMMessage *, EMError *))arg3;
- (void)asyncSendMessage:(EMMessage *)arg1 progress:(void (^)(int))arg2 completion:(void (^)(EMMessage *, EMError *))arg3;
- (void)asyncSendReadAckForMessage:(EMMessage *)arg1;
- (_Bool)updateMessage:(EMMessage *)arg1;
- (_Bool)importMessages:(NSArray *)arg1;
- (_Bool)importConversations:(NSArray *)arg1;
- (_Bool)deleteConversations:(NSArray *)arg1 deleteMessages:(_Bool)arg2;
- (_Bool)deleteConversation:(NSString *)arg1 deleteMessages:(_Bool)arg2;
- (NSArray *)loadAllConversationsFromDB;
- (void)downloadMessageAttachment:(EMMessage *)arg1 progress:(void (^)(int))arg2 completion:(void (^)(EMMessage *, EMError *))arg3;
- (void)downloadMessageThumbnail:(EMMessage *)arg1 progress:(void (^)(int))arg2 completion:(void (^)(EMMessage *, EMError *))arg3;
- (void)resendMessage:(EMMessage *)arg1 progress:(void (^)(int))arg2 completion:(void (^)(EMMessage *, EMError *))arg3;
- (void)sendMessage:(EMMessage *)arg1 progress:(void (^)(int))arg2 completion:(void (^)(EMMessage *, EMError *))arg3;
- (void)sendMessageReadAck:(EMMessage *)arg1 completion:(void (^)(EMMessage *, EMError *))arg2;
- (void)updateMessage:(EMMessage *)arg1 completion:(void (^)(EMMessage *, EMError *))arg2;
- (void)importMessages:(NSArray *)arg1 completion:(void (^)(EMError *))arg2;
- (NSString *)getMessageAttachmentPath:(NSString *)arg1;
- (void)importConversations:(NSArray *)arg1 completion:(void (^)(EMError *))arg2;
- (void)deleteConversations:(NSArray *)arg1 isDeleteMessages:(_Bool)arg2 completion:(void (^)(EMError *))arg3;
- (void)deleteConversation:(NSString *)arg1 isDeleteMessages:(_Bool)arg2 completion:(void (^)(NSString *, EMError *))arg3;
- (EMConversation *)getConversation:(NSString *)arg1 type:(int)arg2 createIfNotExist:(_Bool)arg3;
- (NSArray *)getAllConversations;
- (void)removeDelegate:(id <EMChatManagerDelegate>)arg1;
- (void)addDelegate:(id <EMChatManagerDelegate>)arg1;
- (void)addDelegate:(id <EMChatManagerDelegate>)arg1 delegateQueue:(NSObject<OS_dispatch_queue> *)arg2;
@end
