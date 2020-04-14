//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseModel.h"

@class NSNumber, NSString;

@interface StockSearchItemModel : BaseModel
{
    long long _concludeTime;
    NSString *_concludeTimeStr;
    NSString *_stockCode;
    NSString *_stockName;
    NSString *_commissionStatusStr;
    NSNumber *_concludeBalance;
    NSNumber *_concludePrice;
    NSNumber *_concludeAmount;
    NSString *_entrustType;
    long long _entrustBs;
    NSString *_exchangeType;
    NSString *_stockType;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *stockType; // @synthesize stockType=_stockType;
@property(copy, nonatomic) NSString *exchangeType; // @synthesize exchangeType=_exchangeType;
@property(nonatomic) long long entrustBs; // @synthesize entrustBs=_entrustBs;
@property(copy, nonatomic) NSString *entrustType; // @synthesize entrustType=_entrustType;
@property(retain, nonatomic) NSNumber *concludeAmount; // @synthesize concludeAmount=_concludeAmount;
@property(retain, nonatomic) NSNumber *concludePrice; // @synthesize concludePrice=_concludePrice;
@property(retain, nonatomic) NSNumber *concludeBalance; // @synthesize concludeBalance=_concludeBalance;
@property(copy, nonatomic) NSString *commissionStatusStr; // @synthesize commissionStatusStr=_commissionStatusStr;
@property(copy, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(copy, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
@property(copy, nonatomic) NSString *concludeTimeStr; // @synthesize concludeTimeStr=_concludeTimeStr;
@property(nonatomic) long long concludeTime; // @synthesize concludeTime=_concludeTime;
- (void).cxx_destruct;

@end
