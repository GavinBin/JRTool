//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface JRJIpoapplyModle : NSObject
{
    long long _msgType;
    NSString *_applyMsg;
    NSArray *_msgList;
}

+ (id)mj_objectClassInArray;
@property(retain, nonatomic) NSArray *msgList; // @synthesize msgList=_msgList;
@property(copy, nonatomic) NSString *applyMsg; // @synthesize applyMsg=_applyMsg;
@property(nonatomic) long long msgType; // @synthesize msgType=_msgType;
- (void).cxx_destruct;

@end
