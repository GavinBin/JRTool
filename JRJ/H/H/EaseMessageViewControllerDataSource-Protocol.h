//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EMMessage, EMMessageBody, EaseEmotion, EaseMessageViewController, NSArray, NSDate, NSDictionary, NSIndexPath, NSString;
@protocol IMessageModel;

@protocol EaseMessageViewControllerDataSource <NSObject>

@optional
- (void)messageViewControllerMarkAllMessagesAsRead:(EaseMessageViewController *)arg1;
- (NSDictionary *)emotionExtFormessageViewController:(EaseMessageViewController *)arg1 easeEmotion:(EaseEmotion *)arg2;
- (NSArray *)emotionFormessageViewController:(EaseMessageViewController *)arg1;
- (EaseEmotion *)emotionURLFormessageViewController:(EaseMessageViewController *)arg1 messageModel:(id <IMessageModel>)arg2;
- (_Bool)isEmotionMessageFormessageViewController:(EaseMessageViewController *)arg1 messageModel:(id <IMessageModel>)arg2;
- (_Bool)messageViewController:(EaseMessageViewController *)arg1 shouldSendHasReadAckForMessage:(EMMessage *)arg2 read:(_Bool)arg3;
- (_Bool)messageViewControllerShouldMarkMessagesAsRead:(EaseMessageViewController *)arg1;
- (_Bool)messageViewController:(EaseMessageViewController *)arg1 didLongPressRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)messageViewController:(EaseMessageViewController *)arg1 canLongPressRowAtIndexPath:(NSIndexPath *)arg2;
- (id <IMessageModel>)messageViewController:(EaseMessageViewController *)arg1 modelForMessage:(EMMessage *)arg2;
- (NSArray *)messageViewController:(EaseMessageViewController *)arg1 loadMessageFromTimestamp:(long long)arg2 count:(long long)arg3;
- (NSString *)messageViewController:(EaseMessageViewController *)arg1 stringForDate:(NSDate *)arg2;
- (void)messageViewController:(EaseMessageViewController *)arg1 updateProgress:(float)arg2 messageModel:(id <IMessageModel>)arg3 messageBody:(EMMessageBody *)arg4;
- (id)messageViewController:(EaseMessageViewController *)arg1 progressDelegateForMessageBodyType:(int)arg2;
@end
