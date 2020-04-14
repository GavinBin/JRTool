//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface TradingGuideView : UIView
{
    CDUnknownBlockType _btnBlock;
    UIImageView *_bgImageView;
    UIImageView *_logoImageView;
    UILabel *_tradingDescrible1;
    UILabel *_tradingDescrible2;
    UIButton *_openAccontBtn;
    UIButton *_tradingNowBtn;
    UIButton *_moreAccontBtn;
}

@property(retain, nonatomic) UIButton *moreAccontBtn; // @synthesize moreAccontBtn=_moreAccontBtn;
@property(retain, nonatomic) UIButton *tradingNowBtn; // @synthesize tradingNowBtn=_tradingNowBtn;
@property(retain, nonatomic) UIButton *openAccontBtn; // @synthesize openAccontBtn=_openAccontBtn;
@property(retain, nonatomic) UILabel *tradingDescrible2; // @synthesize tradingDescrible2=_tradingDescrible2;
@property(retain, nonatomic) UILabel *tradingDescrible1; // @synthesize tradingDescrible1=_tradingDescrible1;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(copy, nonatomic) CDUnknownBlockType btnBlock; // @synthesize btnBlock=_btnBlock;
- (void).cxx_destruct;
- (void)updateViewWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
