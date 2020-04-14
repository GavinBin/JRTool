//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKTableViewBaseCell.h"

@class BaseSource, UIButton, UIImageView, UILabel;

@interface JRJTradeRevokeCell : KKTableViewBaseCell
{
    UIImageView *_buyAndSellImageView;
    UILabel *_stockName;
    UILabel *_stockCode;
    UILabel *_stockPrice;
    UILabel *_time;
    UILabel *_tradeNumber;
    UILabel *_delegateNumber;
    UIButton *_revokeButton;
    BaseSource *_baseSource;
}

@property(retain, nonatomic) BaseSource *baseSource; // @synthesize baseSource=_baseSource;
@property(retain, nonatomic) UIButton *revokeButton; // @synthesize revokeButton=_revokeButton;
@property(retain, nonatomic) UILabel *delegateNumber; // @synthesize delegateNumber=_delegateNumber;
@property(retain, nonatomic) UILabel *tradeNumber; // @synthesize tradeNumber=_tradeNumber;
@property(retain, nonatomic) UILabel *time; // @synthesize time=_time;
@property(retain, nonatomic) UILabel *stockPrice; // @synthesize stockPrice=_stockPrice;
@property(retain, nonatomic) UILabel *stockCode; // @synthesize stockCode=_stockCode;
@property(retain, nonatomic) UILabel *stockName; // @synthesize stockName=_stockName;
@property(retain, nonatomic) UIImageView *buyAndSellImageView; // @synthesize buyAndSellImageView=_buyAndSellImageView;
- (void).cxx_destruct;
- (void)revokeButtonClick;
- (void)updateCellWithSource:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

@end
