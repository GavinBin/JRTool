//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TradeBaseHandler.h"

@interface TradeBankToSecurityHandler : TradeBaseHandler
{
}

- (id)responseObjectForResponse:(id)arg1 responseObject:(id)arg2 error:(id *)arg3;
- (void)tradePAZQBankSecurityTransferWithPara:(id)arg1 fundPassword:(id)arg2 bankPassword:(id)arg3 password:(id)arg4 RequestFinish:(CDUnknownBlockType)arg5;
- (void)tradePAZQAccountInfoWithXjbFlag:(long long)arg1 RequestFinish:(CDUnknownBlockType)arg2;
- (void)tradeBankSecurityWithPara:(id)arg1 TransferRequestFinish:(CDUnknownBlockType)arg2;
- (void)tradeTransferRecordRequestFinish:(CDUnknownBlockType)arg1;
- (void)tradeBankBalanceWithString:(id)arg1 RequestFinish:(CDUnknownBlockType)arg2;
- (void)tradePasswordWithString:(id)arg1 RequestFinish:(CDUnknownBlockType)arg2;
- (void)tradeDepositBankWithRequestFinish:(CDUnknownBlockType)arg1;

@end
