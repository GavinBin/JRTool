//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class NSArray, NSDictionary, UILabel;

@interface JRJNewsStockCell : JRJTableViewCell
{
    float _weight;
    UILabel *_timeLabel;
    UILabel *_titleLabel;
    UILabel *_typeLabel;
    UILabel *_subTypeLabel;
    NSDictionary *_model;
    UILabel *_degreeLabel;
    NSArray *_starImageViews;
    NSDictionary *_stockInfo;
    long long _star;
}

+ (double)cellHeightWithTitle:(id)arg1;
@property(nonatomic) long long star; // @synthesize star=_star;
@property(nonatomic) float weight; // @synthesize weight=_weight;
@property(copy, nonatomic) NSDictionary *stockInfo; // @synthesize stockInfo=_stockInfo;
@property(retain, nonatomic) NSArray *starImageViews; // @synthesize starImageViews=_starImageViews;
@property(retain, nonatomic) UILabel *degreeLabel; // @synthesize degreeLabel=_degreeLabel;
@property(retain, nonatomic) NSDictionary *model; // @synthesize model=_model;
@property(nonatomic) __weak UILabel *subTypeLabel; // @synthesize subTypeLabel=_subTypeLabel;
@property(nonatomic) __weak UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)p_hidesStar:(_Bool)arg1;
- (void)setup;
- (id)updateTypeLabelWith:(id)arg1;
- (void)awakeFromNib;
- (void)prepareForReuse;

@end
