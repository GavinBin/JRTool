//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface JRJQueryApplyListTodayModel : NSObject
{
    NSString *_buyCode;
    NSNumber *_canApplyAmount;
    NSNumber *_applyAmount;
    NSString *_applyStatus;
    NSString *_applyStatusName;
    NSString *_isTopBuy;
    NSString *_stockcode;
    NSString *_stockName;
    NSNumber *_issPrc;
    NSString *_ipoMkt;
    NSString *_tradeMktRef;
}

@property(copy, nonatomic) NSString *tradeMktRef; // @synthesize tradeMktRef=_tradeMktRef;
@property(copy, nonatomic) NSString *ipoMkt; // @synthesize ipoMkt=_ipoMkt;
@property(retain, nonatomic) NSNumber *issPrc; // @synthesize issPrc=_issPrc;
@property(copy, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(copy, nonatomic) NSString *stockcode; // @synthesize stockcode=_stockcode;
@property(copy, nonatomic) NSString *isTopBuy; // @synthesize isTopBuy=_isTopBuy;
@property(copy, nonatomic) NSString *applyStatusName; // @synthesize applyStatusName=_applyStatusName;
@property(copy, nonatomic) NSString *applyStatus; // @synthesize applyStatus=_applyStatus;
@property(retain, nonatomic) NSNumber *applyAmount; // @synthesize applyAmount=_applyAmount;
@property(retain, nonatomic) NSNumber *canApplyAmount; // @synthesize canApplyAmount=_canApplyAmount;
@property(copy, nonatomic) NSString *buyCode; // @synthesize buyCode=_buyCode;
- (void).cxx_destruct;

@end
