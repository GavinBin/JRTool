//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HotStockModel : NSObject
{
    NSString *_stockName;
    NSString *_stockCode;
    NSString *_market;
    double _currentPrice;
    double _advanceDeclineRatio;
    long long _signalType;
    NSString *_signalInfo;
    NSString *_time;
}

@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *signalInfo; // @synthesize signalInfo=_signalInfo;
@property(nonatomic) long long signalType; // @synthesize signalType=_signalType;
@property(nonatomic) double advanceDeclineRatio; // @synthesize advanceDeclineRatio=_advanceDeclineRatio;
@property(nonatomic) double currentPrice; // @synthesize currentPrice=_currentPrice;
@property(copy, nonatomic) NSString *market; // @synthesize market=_market;
@property(copy, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
@property(copy, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
- (void).cxx_destruct;

@end
