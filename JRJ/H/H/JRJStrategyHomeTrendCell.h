//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class NSArray, NSDictionary, UIImageView, UILabel, UIView;

@interface JRJStrategyHomeTrendCell : JRJTableViewCell
{
    _Bool _showsBottomBorder;
    NSDictionary *_trend;
    NSArray *_stocks;
    CDUnknownBlockType _stockPressedBlock;
    UILabel *_descLabel;
    UILabel *_numLabel;
    UIImageView *_iconView;
    UIView *_emptyView;
    UILabel *_emptyLabel;
    NSArray *_stockNames;
    NSArray *_stockCodes;
    NSArray *_stockChanges;
    UIView *_bottomBorder;
}

+ (double)cellHeight;
@property(nonatomic) __weak UIView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain, nonatomic) NSArray *stockChanges; // @synthesize stockChanges=_stockChanges;
@property(retain, nonatomic) NSArray *stockCodes; // @synthesize stockCodes=_stockCodes;
@property(retain, nonatomic) NSArray *stockNames; // @synthesize stockNames=_stockNames;
@property(nonatomic) __weak UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(nonatomic) __weak UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(nonatomic) __weak UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) _Bool showsBottomBorder; // @synthesize showsBottomBorder=_showsBottomBorder;
@property(copy, nonatomic) CDUnknownBlockType stockPressedBlock; // @synthesize stockPressedBlock=_stockPressedBlock;
@property(copy, nonatomic) NSArray *stocks; // @synthesize stocks=_stocks;
@property(retain, nonatomic) NSDictionary *trend; // @synthesize trend=_trend;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)stockPressed:(id)arg1;
- (void)p_setStock:(id)arg1 atIndex:(long long)arg2;
- (void)p_hideEmptyView;
- (void)p_hideAllLabels;
- (void)awakeFromNib;

@end
