//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JRJVerticalBannerDataSource-Protocol.h"
#import "JRJVerticalBannerDelegate-Protocol.h"

@class CALayer, JRJVerticalBanner, NSArray, NSLayoutConstraint, NSMutableDictionary, NSString, NSTimer, UIButton, UIImageView, UILabel;

@interface ImportantContentTableHeaderView : UIView <JRJVerticalBannerDelegate, JRJVerticalBannerDataSource>
{
    UILabel *titleLabel;
    UIButton *btn;
    UIView *newsView;
    UIImageView *backgroundImageView;
    NSArray *news;
    NSArray *labels;
    NSArray *upDownLabels;
    NSArray *arrows;
    CALayer *_maskLayer;
    long long _count;
    long long _currentIndex;
    _Bool _isXJZK;
    CDUnknownBlockType _heightReturnBlock;
    UIView *_topMaskRedView;
    UIView *_topRobotGBView;
    UIImageView *_robotIcon;
    JRJVerticalBanner *_bannerView;
    NSArray *_bannerTitleArr;
    NSLayoutConstraint *_labelTopConst;
    NSArray *_titles;
    NSMutableDictionary *_timeDic;
    NSTimer *_timer;
    UIView *_analysisView;
    NSLayoutConstraint *_whiteWidthConst;
    NSLayoutConstraint *_whiteTrailConst;
    NSArray *_clickViews;
}

@property(retain, nonatomic) NSArray *clickViews; // @synthesize clickViews=_clickViews;
@property(nonatomic) __weak NSLayoutConstraint *whiteTrailConst; // @synthesize whiteTrailConst=_whiteTrailConst;
@property(nonatomic) __weak NSLayoutConstraint *whiteWidthConst; // @synthesize whiteWidthConst=_whiteWidthConst;
@property(nonatomic) __weak UIView *analysisView; // @synthesize analysisView=_analysisView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableDictionary *timeDic; // @synthesize timeDic=_timeDic;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic) __weak NSLayoutConstraint *labelTopConst; // @synthesize labelTopConst=_labelTopConst;
@property(retain, nonatomic) NSArray *bannerTitleArr; // @synthesize bannerTitleArr=_bannerTitleArr;
@property(retain, nonatomic) JRJVerticalBanner *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) __weak UIImageView *robotIcon; // @synthesize robotIcon=_robotIcon;
@property(nonatomic) __weak UIView *topRobotGBView; // @synthesize topRobotGBView=_topRobotGBView;
@property(nonatomic) __weak UIView *topMaskRedView; // @synthesize topMaskRedView=_topMaskRedView;
@property(copy, nonatomic) CDUnknownBlockType heightReturnBlock; // @synthesize heightReturnBlock=_heightReturnBlock;
- (void).cxx_destruct;
- (void)banner:(id)arg1 didSelectIndex:(long long)arg2;
- (id)banner:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInBanner:(id)arg1;
- (void)showStockSearchViewController;
- (void)startRobotAnimation;
- (void)p_checkRobotTime;
- (void)jumpVCWithType:(long long)arg1;
- (void)refreshData:(id)arg1;
- (void)bindDataWithArray:(id)arg1;
- (void)startGunAnimationIsStart:(_Bool)arg1 resetPosition:(_Bool)arg2;
- (void)reloadBannerData;
- (void)gunAnimation;
- (void)changeMaskLayerFrameWithCount:(long long)arg1;
- (void)btnClick:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
