//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC16JRJInvestAdviser12JRJBaseModel.h"

@class NSArray, NSNumber, NSString;

@interface _TtC16JRJInvestAdviser16JRJstrategyModel : _TtC16JRJInvestAdviser12JRJBaseModel
{
    // Error parsing type: , name: id
    // Error parsing type: , name: name
    // Error parsing type: , name: label
    // Error parsing type: , name: netAssetDate
    // Error parsing type: , name: netAssetValue
    // Error parsing type: , name: hs300Date
    // Error parsing type: , name: maxDrawDownDate
    // Error parsing type: , name: hs300Value
    // Error parsing type: , name: updateTime
    // Error parsing type: , name: bgUrl
    // Error parsing type: , name: indicators
    // Error parsing type: , name: guideUrl
    // Error parsing type: , name: selectItem
    // Error parsing type: , name: isRefresh
    // Error parsing type: , name: _reference
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSArray *reference;
@property(nonatomic, copy) NSArray *_reference;
@property(nonatomic) _Bool isRefresh; // @synthesize isRefresh;
@property(nonatomic) long long selectItem; // @synthesize selectItem;
@property(nonatomic, copy) NSString *guideUrl;
@property(nonatomic, copy) NSArray *indicators;
@property(nonatomic, copy) NSString *bgUrl;
@property(nonatomic, copy) NSString *updateTime;
@property(nonatomic, copy) NSArray *hs300Value;
@property(nonatomic, copy) NSArray *maxDrawDownDate;
@property(nonatomic, copy) NSArray *hs300Date;
@property(nonatomic, copy) NSArray *netAssetValue;
@property(nonatomic, copy) NSArray *netAssetDate;
@property(nonatomic, copy) NSString *label;
@property(nonatomic, copy) NSString *name;
@property(nonatomic, retain) NSNumber *id; // @synthesize id;

@end
