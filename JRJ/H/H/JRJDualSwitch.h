//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIColor;

@interface JRJDualSwitch : UIView
{
    UIColor *_defaultColor;
    UIColor *_leftColor;
    UIColor *_rightColor;
    CDUnknownBlockType _stateChangedBlock;
    UIView *_backgroundView;
    NSLayoutConstraint *_leftMarginConstraint;
    UIView *_thumb;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak UIView *thumb; // @synthesize thumb=_thumb;
@property(nonatomic) __weak NSLayoutConstraint *leftMarginConstraint; // @synthesize leftMarginConstraint=_leftMarginConstraint;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CDUnknownBlockType stateChangedBlock; // @synthesize stateChangedBlock=_stateChangedBlock;
@property(retain, nonatomic) UIColor *rightColor; // @synthesize rightColor=_rightColor;
@property(retain, nonatomic) UIColor *leftColor; // @synthesize leftColor=_leftColor;
@property(retain, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;
- (void).cxx_destruct;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (void)swipeHandler:(id)arg1;
- (void)tapHandler:(id)arg1;
- (void)setupDefaultProperties;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
