//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface JRJVPositionModel : NSObject
{
    NSString *_stockName;
    NSString *_stockCode;
    NSString *_marketType;
    NSNumber *_profit;
    long long _profitType;
}

@property(nonatomic) long long profitType; // @synthesize profitType=_profitType;
@property(retain, nonatomic) NSNumber *profit; // @synthesize profit=_profit;
@property(copy, nonatomic) NSString *marketType; // @synthesize marketType=_marketType;
@property(copy, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
@property(copy, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
- (void).cxx_destruct;

@end
