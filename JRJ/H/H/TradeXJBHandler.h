//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TradeBaseHandler.h"

@interface TradeXJBHandler : TradeBaseHandler
{
}

- (id)responseObjectForResponse:(id)arg1 responseObject:(id)arg2 error:(id *)arg3;
- (void)tradeXJBOpenRequestFinish:(CDUnknownBlockType)arg1;
- (void)tradeXJBWithChangeRetainBalance:(float)arg1 RequestFinish:(CDUnknownBlockType)arg2;
- (void)tradeXJBQueryRetainBalanceRequestFinish:(CDUnknownBlockType)arg1;
- (void)tradeXJBWithChangeJoinStatus:(long long)arg1 RequestFinish:(CDUnknownBlockType)arg2;
- (void)tradeXJBQueryFundInfoRequestFinish:(CDUnknownBlockType)arg1;

@end
