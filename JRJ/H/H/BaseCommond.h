//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface BaseCommond : NSObject
{
    int _actionType;
    int _plaformType;
    NSDictionary *_params;
    NSMutableDictionary *_actionTypeDict;
    NSMutableDictionary *_plaformTypeDict;
    NSString *_flag;
}

+ (id)commondWithPlaformType:(int)arg1 action:(int)arg2 dict:(id)arg3;
@property(copy, nonatomic) NSString *flag; // @synthesize flag=_flag;
- (void).cxx_destruct;
- (id)serializer;
@property(readonly, nonatomic) NSDictionary *params;
@property(readonly, nonatomic) NSString *action;
@property(readonly, nonatomic) NSString *plaform;
- (void)initWithActionTypeDict;
- (void)initWithPlaformTypeDict;
- (id)initWithPlaformType:(int)arg1 action:(int)arg2 dict:(id)arg3;

@end
