//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TradeBaseHandler.h"

@interface TradeOpenAccountListHandler : TradeBaseHandler
{
    _Bool _noneLoading;
}

@property(nonatomic) _Bool noneLoading; // @synthesize noneLoading=_noneLoading;
- (_Bool)isNeedAutoLoadingResponse:(id)arg1;
- (id)responseObjectForResponse:(id)arg1 responseObject:(id)arg2 error:(id *)arg3;
- (void)tradeInvalidBindWithBrokerId:(id)arg1 accoutId:(id)arg2 RequestFinish:(CDUnknownBlockType)arg3;
- (void)tradeOpenAccountListRequestFinish:(CDUnknownBlockType)arg1;

@end
