//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EaseTextView, NSDictionary, NSString, UIView;

@protocol EMChatToolbarDelegate <NSObject>
- (void)chatToolbarDidChangeFrameToHeight:(double)arg1;

@optional
- (void)didDragInsideAction:(UIView *)arg1;
- (void)didDragOutsideAction:(UIView *)arg1;
- (void)didFinishRecoingVoiceAction:(UIView *)arg1;
- (void)didCancelRecordingVoiceAction:(UIView *)arg1;
- (void)didStartRecordingVoiceAction:(UIView *)arg1;
- (void)didSendFace:(NSString *)arg1;
- (_Bool)didDeleteCharacterFromLocation:(unsigned long long)arg1;
- (_Bool)didInputAtInLocation:(unsigned long long)arg1;
- (void)didSendText:(NSString *)arg1 withExt:(NSDictionary *)arg2;
- (void)didSendText:(NSString *)arg1;
- (void)inputTextViewWillBeginEditing:(EaseTextView *)arg1;
- (void)inputTextViewDidBeginEditing:(EaseTextView *)arg1;
@end
