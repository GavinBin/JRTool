//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel;

@interface P_JRJFundFinancialAssetGroupItem : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_valueLabel;
}

@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutPageSubviews;
- (void)updateAssetGroupItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
