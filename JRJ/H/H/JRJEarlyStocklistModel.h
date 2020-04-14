//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface JRJEarlyStocklistModel : NSObject
{
    NSString *_stkid;
    NSString *_stktype;
    NSNumber *_maxRiseRatio;
    NSArray *_news;
    NSString *_market;
    NSString *_stkcode;
    NSString *_stkname;
    NSString *_buyDate;
    NSNumber *_price;
    NSString *_buyPrice;
    NSString *_statusDisp;
    long long _status;
    NSString *_priceDisp;
}

+ (id)modelContainerPropertyGenericClass;
@property(copy, nonatomic) NSString *priceDisp; // @synthesize priceDisp=_priceDisp;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *statusDisp; // @synthesize statusDisp=_statusDisp;
@property(copy, nonatomic) NSString *buyPrice; // @synthesize buyPrice=_buyPrice;
@property(retain, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *buyDate; // @synthesize buyDate=_buyDate;
@property(copy, nonatomic) NSString *stkname; // @synthesize stkname=_stkname;
@property(copy, nonatomic) NSString *stkcode; // @synthesize stkcode=_stkcode;
@property(copy, nonatomic) NSString *market; // @synthesize market=_market;
@property(retain, nonatomic) NSArray *news; // @synthesize news=_news;
@property(retain, nonatomic) NSNumber *maxRiseRatio; // @synthesize maxRiseRatio=_maxRiseRatio;
@property(copy, nonatomic) NSString *stktype; // @synthesize stktype=_stktype;
@property(copy, nonatomic) NSString *stkid; // @synthesize stkid=_stkid;
- (void).cxx_destruct;

@end
