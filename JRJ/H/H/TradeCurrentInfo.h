//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JRJTradeConfigurationInfo, NSArray, NSString, UIViewController;
@protocol ViewControllerPromptingDelegate;

@interface TradeCurrentInfo : NSObject
{
    _Bool _isStopService;
    _Bool _isHtTokenTimeOut;
    _Bool _isStopRequest;
    _Bool _showHasInviteCode;
    _Bool _isLogoutPAZQ;
    int _enterType;
    int _stockMarket;
    int _type;
    NSString *_sessionId;
    NSString *_accountId;
    NSString *_fundId;
    NSString *_flag;
    NSString *_isNeedPerfectInformation;
    NSString *_isOpen;
    NSString *_TradeErrorCodeServiceUnavailableUrl;
    NSString *_brokerID;
    NSString *_brokerName;
    UIViewController *_lastController;
    NSString *_stockCode;
    NSString *_brokerType;
    NSString *_tradeBindType;
    id <ViewControllerPromptingDelegate> _delegate;
    NSString *_checkLoginUrl;
    long long _statusDisplay;
    NSString *_tradeBuyUrl;
    NSString *_tradeSellUrl;
    JRJTradeConfigurationInfo *_currentBrokerCfg;
    NSArray *_tradeCfgList;
}

+ (id)getPingAnBrokeInfo:(id)arg1;
+ (id)getDefaultTradeAccount:(id)arg1;
+ (void)resetTradeInfo;
+ (void)updateTradeInfoWithBindBroker:(id)arg1;
+ (_Bool)isSesstionExpire:(long long)arg1;
+ (_Bool)isTokenOrSesstionExpire:(long long)arg1;
+ (id)sharedStock;
@property(retain, nonatomic) NSArray *tradeCfgList; // @synthesize tradeCfgList=_tradeCfgList;
@property(retain, nonatomic) JRJTradeConfigurationInfo *currentBrokerCfg; // @synthesize currentBrokerCfg=_currentBrokerCfg;
@property(copy, nonatomic) NSString *tradeSellUrl; // @synthesize tradeSellUrl=_tradeSellUrl;
@property(copy, nonatomic) NSString *tradeBuyUrl; // @synthesize tradeBuyUrl=_tradeBuyUrl;
@property(nonatomic) long long statusDisplay; // @synthesize statusDisplay=_statusDisplay;
@property(nonatomic) _Bool isLogoutPAZQ; // @synthesize isLogoutPAZQ=_isLogoutPAZQ;
@property(copy, nonatomic) NSString *checkLoginUrl; // @synthesize checkLoginUrl=_checkLoginUrl;
@property(nonatomic) __weak id <ViewControllerPromptingDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *tradeBindType; // @synthesize tradeBindType=_tradeBindType;
@property(copy, nonatomic) NSString *brokerType; // @synthesize brokerType=_brokerType;
@property(nonatomic) _Bool showHasInviteCode; // @synthesize showHasInviteCode=_showHasInviteCode;
@property(nonatomic) int stockMarket; // @synthesize stockMarket=_stockMarket;
@property(retain, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
@property(nonatomic) _Bool isStopRequest; // @synthesize isStopRequest=_isStopRequest;
@property(nonatomic) __weak UIViewController *lastController; // @synthesize lastController=_lastController;
@property(nonatomic) int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) _Bool isHtTokenTimeOut; // @synthesize isHtTokenTimeOut=_isHtTokenTimeOut;
@property(copy, nonatomic) NSString *brokerName; // @synthesize brokerName=_brokerName;
@property(copy, nonatomic) NSString *brokerID; // @synthesize brokerID=_brokerID;
@property(copy, nonatomic) NSString *TradeErrorCodeServiceUnavailableUrl; // @synthesize TradeErrorCodeServiceUnavailableUrl=_TradeErrorCodeServiceUnavailableUrl;
@property(nonatomic) _Bool isStopService; // @synthesize isStopService=_isStopService;
@property(copy, nonatomic) NSString *isOpen; // @synthesize isOpen=_isOpen;
@property(copy, nonatomic) NSString *isNeedPerfectInformation; // @synthesize isNeedPerfectInformation=_isNeedPerfectInformation;
@property(copy, nonatomic) NSString *flag; // @synthesize flag=_flag;
@property(copy, nonatomic) NSString *fundId; // @synthesize fundId=_fundId;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (void)setTradeConfigList:(id)arg1;
- (void)enterTrade:(id)arg1 WithCode:(long long)arg2;
- (void)logInZQTRequestWithDic:(id)arg1;
- (void)synchronize:(id)arg1 key:(id)arg2;
- (id)init;

@end
