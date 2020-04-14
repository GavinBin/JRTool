//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, NSTimer, UIFont, UILabel;
@protocol PieChartDataSource;

@interface PieChart : UIView
{
    UIView *_pieView;
    struct CGPoint _pieCenter;
    double _pieRadius;
    NSTimer *_animationTimer;
    NSMutableArray *_animations;
    double _startPieAngle;
    UIFont *_labelFont;
    UILabel *_centerLabel;
    id <PieChartDataSource> _dataSource;
    double _centerCornerRadius;
    NSString *_centerText;
}

@property(nonatomic) double pieRadius; // @synthesize pieRadius=_pieRadius;
@property(nonatomic) struct CGPoint pieCenter; // @synthesize pieCenter=_pieCenter;
@property(copy, nonatomic) NSString *centerText; // @synthesize centerText=_centerText;
@property(nonatomic) double centerCornerRadius; // @synthesize centerCornerRadius=_centerCornerRadius;
@property(nonatomic) __weak id <PieChartDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)updateTimerFired:(id)arg1;
- (void)reloadPieChart;
- (id)initWithFrame:(struct CGRect)arg1;

@end
