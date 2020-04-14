//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class NSDictionary, NSLayoutConstraint, UILabel, UIView;

@interface JRJStrategyZGreatCell : JRJTableViewCell
{
    UIView *_lineView;
    NSLayoutConstraint *_lineHeight;
    NSDictionary *_data;
    UILabel *_stockNameLabel;
    UILabel *_stockCodeLabel;
    UILabel *_zPointDate;
    UILabel *_sPointDate;
    UILabel *_profitLabel;
}

@property(nonatomic) __weak UILabel *profitLabel; // @synthesize profitLabel=_profitLabel;
@property(nonatomic) __weak UILabel *sPointDate; // @synthesize sPointDate=_sPointDate;
@property(nonatomic) __weak UILabel *zPointDate; // @synthesize zPointDate=_zPointDate;
@property(nonatomic) __weak UILabel *stockCodeLabel; // @synthesize stockCodeLabel=_stockCodeLabel;
@property(nonatomic) __weak UILabel *stockNameLabel; // @synthesize stockNameLabel=_stockNameLabel;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(nonatomic) __weak NSLayoutConstraint *lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
