//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JRJZhiboMessage, NSString;

@interface LiveInfo : NSObject
{
    _Bool _isHistory;
    _Bool _isOpen;
    _Bool _streaming;
    _Bool _isVIP;
    NSString *_roomId;
    NSString *_roomName;
    NSString *_roomOwerId;
    NSString *_roomOwerName;
    NSString *_roomImageUrlString;
    NSString *_uv;
    NSString *_roomTitle;
    NSString *_historyUrlString;
    NSString *_time;
    JRJZhiboMessage *_focusMessage;
}

@property(retain, nonatomic) JRJZhiboMessage *focusMessage; // @synthesize focusMessage=_focusMessage;
@property(nonatomic) _Bool isVIP; // @synthesize isVIP=_isVIP;
@property(nonatomic, getter=isStreaming) _Bool streaming; // @synthesize streaming=_streaming;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *historyUrlString; // @synthesize historyUrlString=_historyUrlString;
@property(copy, nonatomic) NSString *roomTitle; // @synthesize roomTitle=_roomTitle;
@property(nonatomic) _Bool isHistory; // @synthesize isHistory=_isHistory;
@property(copy, nonatomic) NSString *uv; // @synthesize uv=_uv;
@property(copy, nonatomic) NSString *roomImageUrlString; // @synthesize roomImageUrlString=_roomImageUrlString;
@property(copy, nonatomic) NSString *roomOwerName; // @synthesize roomOwerName=_roomOwerName;
@property(copy, nonatomic) NSString *roomOwerId; // @synthesize roomOwerId=_roomOwerId;
@property(copy, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;

@end
