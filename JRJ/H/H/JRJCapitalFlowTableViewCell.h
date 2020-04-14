//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class JRJCapitalFlowBarChartView, JRJCapitalFlowPieChartView, NSArray, UILabel;

@interface JRJCapitalFlowTableViewCell : JRJTableViewCell
{
    _Bool _isStrategy;
    _Bool _enableAnimate;
    NSArray *_pieData;
    NSArray *_barData;
    JRJCapitalFlowBarChartView *_barView;
    JRJCapitalFlowPieChartView *_pieView;
    UILabel *_roundLabel;
}

+ (double)cellHeight;
@property(nonatomic) __weak UILabel *roundLabel; // @synthesize roundLabel=_roundLabel;
@property(nonatomic) _Bool enableAnimate; // @synthesize enableAnimate=_enableAnimate;
@property(nonatomic) _Bool isStrategy; // @synthesize isStrategy=_isStrategy;
@property(nonatomic) __weak JRJCapitalFlowPieChartView *pieView; // @synthesize pieView=_pieView;
@property(nonatomic) __weak JRJCapitalFlowBarChartView *barView; // @synthesize barView=_barView;
@property(copy, nonatomic) NSArray *barData; // @synthesize barData=_barData;
@property(copy, nonatomic) NSArray *pieData; // @synthesize pieData=_pieData;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end
