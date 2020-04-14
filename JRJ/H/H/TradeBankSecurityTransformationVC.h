//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKTableViewController.h"

@class NSNumber, NSString, TradeBankAccountInfoModel, TradeBankPasswordConfigModel, TradeBankToSecurityHandler, UIView;

@interface TradeBankSecurityTransformationVC : KKTableViewController
{
    NSString *_occurBalance;
    NSString *_bankPassword;
    NSString *_fundPassword;
    NSString *_tradePassword;
    int _type;
    TradeBankAccountInfoModel *_bankInfoModel;
    TradeBankPasswordConfigModel *_passwordModel;
    NSNumber *_fetchBalance;
    UIView *_footView;
    TradeBankToSecurityHandler *_tradeBankToSecurityHandler;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) TradeBankToSecurityHandler *tradeBankToSecurityHandler; // @synthesize tradeBankToSecurityHandler=_tradeBankToSecurityHandler;
@property(retain, nonatomic) UIView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) NSNumber *fetchBalance; // @synthesize fetchBalance=_fetchBalance;
@property(retain, nonatomic) TradeBankPasswordConfigModel *passwordModel; // @synthesize passwordModel=_passwordModel;
@property(retain, nonatomic) TradeBankAccountInfoModel *bankInfoModel; // @synthesize bankInfoModel=_bankInfoModel;
- (void).cxx_destruct;
- (id)title;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)validParaIsNotEmpty;
- (void)sendSubmitRequest;
- (void)addClickCellEvent;
- (void)loadBankToSecurityStaticData;
- (void)requestDepositClientFund;
- (void)viewDidLoad;
- (id)initWithTransferType:(int)arg1;

@end
