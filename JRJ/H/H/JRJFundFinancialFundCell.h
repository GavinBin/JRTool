//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class JRJFundFinancialRecommendItemModel, UILabel, UIView;

@interface JRJFundFinancialFundCell : JRJTableViewCell
{
    UIView *_bgView;
    UILabel *_incomeRateLabel;
    UILabel *_incomeRateDescLabel;
    UILabel *_fundNameLabel;
    UILabel *_fundDescLabel;
    JRJFundFinancialRecommendItemModel *_fundModel;
}

@property(retain, nonatomic) JRJFundFinancialRecommendItemModel *fundModel; // @synthesize fundModel=_fundModel;
@property(retain, nonatomic) UILabel *fundDescLabel; // @synthesize fundDescLabel=_fundDescLabel;
@property(retain, nonatomic) UILabel *fundNameLabel; // @synthesize fundNameLabel=_fundNameLabel;
@property(retain, nonatomic) UILabel *incomeRateDescLabel; // @synthesize incomeRateDescLabel=_incomeRateDescLabel;
@property(retain, nonatomic) UILabel *incomeRateLabel; // @synthesize incomeRateLabel=_incomeRateLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)layoutPageSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
