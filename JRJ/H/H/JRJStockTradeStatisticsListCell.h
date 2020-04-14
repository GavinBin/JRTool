//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class NSNumber, NSString, UILabel, UIView;

@interface JRJStockTradeStatisticsListCell : JRJTableViewCell
{
    long long _tradeTotalNum;
    long long _histogram_width_scale;
    NSString *_tradePrice;
    NSNumber *_tradeSellNum;
    NSNumber *_tradeBuyNum;
    UIView *_sellView;
    UILabel *_sellLabel;
    UIView *_sellHistogram;
    UIView *_buyView;
    UILabel *_buyLabel;
    UIView *_buyHistogram;
    UILabel *_priceLabel;
}

@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIView *buyHistogram; // @synthesize buyHistogram=_buyHistogram;
@property(retain, nonatomic) UILabel *buyLabel; // @synthesize buyLabel=_buyLabel;
@property(retain, nonatomic) UIView *buyView; // @synthesize buyView=_buyView;
@property(retain, nonatomic) UIView *sellHistogram; // @synthesize sellHistogram=_sellHistogram;
@property(retain, nonatomic) UILabel *sellLabel; // @synthesize sellLabel=_sellLabel;
@property(retain, nonatomic) UIView *sellView; // @synthesize sellView=_sellView;
@property(retain, nonatomic) NSNumber *tradeBuyNum; // @synthesize tradeBuyNum=_tradeBuyNum;
@property(retain, nonatomic) NSNumber *tradeSellNum; // @synthesize tradeSellNum=_tradeSellNum;
@property(copy, nonatomic) NSString *tradePrice; // @synthesize tradePrice=_tradePrice;
@property(nonatomic) long long histogram_width_scale; // @synthesize histogram_width_scale=_histogram_width_scale;
@property(nonatomic) long long tradeTotalNum; // @synthesize tradeTotalNum=_tradeTotalNum;
- (void).cxx_destruct;
- (void)layoutPageSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
