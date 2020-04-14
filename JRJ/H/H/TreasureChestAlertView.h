//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface TreasureChestAlertView : UIView
{
    _Bool _isGoToMyintegating;
    UIImageView *_beforeUIImageView;
    NSArray *_beforeImagesArrays;
    UIView *_bgUIView;
    UILabel *_scoreUILabel;
    UIButton *_openBaoXaingBtn;
    NSLayoutConstraint *_centerXNSLayoutConstraint;
    NSLayoutConstraint *_scoreBottomNSLayoutConstraint;
}

+ (id)p_keywindow;
+ (id)p_currentView;
+ (void)dismiss;
+ (void)showTreasureChestAlertViewWithScore:(id)arg1;
@property(nonatomic) _Bool isGoToMyintegating; // @synthesize isGoToMyintegating=_isGoToMyintegating;
@property(retain, nonatomic) NSLayoutConstraint *scoreBottomNSLayoutConstraint; // @synthesize scoreBottomNSLayoutConstraint=_scoreBottomNSLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *centerXNSLayoutConstraint; // @synthesize centerXNSLayoutConstraint=_centerXNSLayoutConstraint;
@property(retain, nonatomic) UIButton *openBaoXaingBtn; // @synthesize openBaoXaingBtn=_openBaoXaingBtn;
@property(retain, nonatomic) UILabel *scoreUILabel; // @synthesize scoreUILabel=_scoreUILabel;
@property(retain, nonatomic) UIView *bgUIView; // @synthesize bgUIView=_bgUIView;
@property(copy, nonatomic) NSArray *beforeImagesArrays; // @synthesize beforeImagesArrays=_beforeImagesArrays;
@property(retain, nonatomic) UIImageView *beforeUIImageView; // @synthesize beforeUIImageView=_beforeUIImageView;
- (void).cxx_destruct;
- (void)dismiss;
- (void)handleTap:(id)arg1;
- (void)p_registerNotifications;
- (void)p_loadNib;
- (void)dealloc;
- (id)init;
- (void)openbaoxiang:(id)arg1;
- (void)dismissBtnClick:(id)arg1;

@end
