//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FTStockInfoDataManager, UILabel;

@interface FTLandscapeStockTitleInfoView : UIView
{
    UILabel *lblStockName;
    UILabel *lblStockCode;
    UILabel *lblTradeVolume;
    UILabel *lblLastTime;
    UILabel *lblPrice;
    UILabel *lblUpdown;
    UILabel *lblUpdownLv;
    FTStockInfoDataManager *_dataSource;
    CDUnknownBlockType _closeLandscape;
}

@property(copy, nonatomic) CDUnknownBlockType closeLandscape; // @synthesize closeLandscape=_closeLandscape;
@property(nonatomic) __weak FTStockInfoDataManager *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)reloadData;
- (void)closeLandscapeAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
