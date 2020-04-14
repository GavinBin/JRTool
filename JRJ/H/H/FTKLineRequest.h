//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FTBaseRequest.h"

@class NSString;

@interface FTKLineRequest : FTBaseRequest
{
    _Bool _isLoadMore;
    int _marketType;
    int _securityType;
    NSString *_stockID;
    NSString *_securityID;
    long long _rightType;
    NSString *_peroid;
    NSString *_minId;
    NSString *_count;
    long long _loadMoreOffset;
    long long _stockType;
    long long _minIndex;
    NSString *_endIndex;
    long long _totalLines;
}

@property(nonatomic) long long totalLines; // @synthesize totalLines=_totalLines;
@property(nonatomic) NSString *endIndex; // @synthesize endIndex=_endIndex;
@property(nonatomic) long long minIndex; // @synthesize minIndex=_minIndex;
@property(nonatomic) long long stockType; // @synthesize stockType=_stockType;
@property(nonatomic) long long loadMoreOffset; // @synthesize loadMoreOffset=_loadMoreOffset;
@property(nonatomic) _Bool isLoadMore; // @synthesize isLoadMore=_isLoadMore;
@property(copy, nonatomic) NSString *count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *minId; // @synthesize minId=_minId;
@property(copy, nonatomic) NSString *peroid; // @synthesize peroid=_peroid;
@property(nonatomic) long long rightType; // @synthesize rightType=_rightType;
@property(copy, nonatomic) NSString *securityID; // @synthesize securityID=_securityID;
@property(copy, nonatomic) NSString *stockID; // @synthesize stockID=_stockID;
@property(nonatomic) int securityType; // @synthesize securityType=_securityType;
@property(nonatomic) int marketType; // @synthesize marketType=_marketType;
- (void).cxx_destruct;
- (id)getNumWithStockDataType:(long long)arg1;
- (id)translateStockTypeToAPIString:(long long)arg1 rightType:(long long)arg2;
- (void)dict:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (_Bool)isFundIndex;
- (_Bool)isMinKLine;
- (id)baseRequestParas;
- (long long)responseDataType;
- (id)baseRequestPaths;
- (id)baseRequestHost;

@end
