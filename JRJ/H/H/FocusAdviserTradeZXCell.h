//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FocusAdviserZXCell.h"

@class UIImageView, UILabel, UIView;

@interface FocusAdviserTradeZXCell : FocusAdviserZXCell
{
    UIView *contentView;
    UIView *backView;
    UIView *hdivider;
    UILabel *_lbTradeType;
    UILabel *_lbStockName;
    UILabel *_lbStockCode;
    UILabel *_lbPrice;
    UILabel *_lbNum;
    UIImageView *_imgArrow;
}

+ (double)cellHeightWithModel:(id)arg1;
@property(retain, nonatomic) UIImageView *imgArrow; // @synthesize imgArrow=_imgArrow;
@property(retain, nonatomic) UILabel *lbNum; // @synthesize lbNum=_lbNum;
@property(retain, nonatomic) UILabel *lbPrice; // @synthesize lbPrice=_lbPrice;
@property(retain, nonatomic) UILabel *lbStockCode; // @synthesize lbStockCode=_lbStockCode;
@property(retain, nonatomic) UILabel *lbStockName; // @synthesize lbStockName=_lbStockName;
@property(retain, nonatomic) UILabel *lbTradeType; // @synthesize lbTradeType=_lbTradeType;
- (void).cxx_destruct;
- (void)updateCellWithModel:(id)arg1;
- (id)getTypeString;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
