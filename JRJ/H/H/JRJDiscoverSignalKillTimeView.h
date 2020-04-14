//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSTimer, UILabel;

@interface JRJDiscoverSignalKillTimeView : UIView
{
    int _addTimeNum;
    UILabel *_timeLabel;
    UILabel *_descriptionLabel;
    UILabel *_stockNameLabel;
    UILabel *_countTimeLabel;
    UILabel *_ratioLabel;
    CDUnknownBlockType _pushSignalDetailBlock;
    NSDictionary *_myDic;
    NSTimer *_signalTimer;
}

@property(nonatomic) int addTimeNum; // @synthesize addTimeNum=_addTimeNum;
@property(retain, nonatomic) NSTimer *signalTimer; // @synthesize signalTimer=_signalTimer;
@property(retain, nonatomic) NSDictionary *myDic; // @synthesize myDic=_myDic;
@property(copy, nonatomic) CDUnknownBlockType pushSignalDetailBlock; // @synthesize pushSignalDetailBlock=_pushSignalDetailBlock;
@property(nonatomic) __weak UILabel *ratioLabel; // @synthesize ratioLabel=_ratioLabel;
@property(nonatomic) __weak UILabel *countTimeLabel; // @synthesize countTimeLabel=_countTimeLabel;
@property(nonatomic) __weak UILabel *stockNameLabel; // @synthesize stockNameLabel=_stockNameLabel;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)compareTwoTime:(long long)arg1 time2:(long long)arg2 time3:(long long)arg3;
- (void)reduceTime;
- (void)createTimer;
- (void)configKillTimeData:(id)arg1;
- (void)pushStockInfo;
- (void)trackAction;
- (void)awakeFromNib;

@end
