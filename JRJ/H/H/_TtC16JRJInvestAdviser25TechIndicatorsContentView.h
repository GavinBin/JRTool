//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC16JRJInvestAdviser18JRJCustomAlertView.h"

@class NSArray, UIButton, UILabel;

@interface _TtC16JRJInvestAdviser25TechIndicatorsContentView : _TtC16JRJInvestAdviser18JRJCustomAlertView
{
    // Error parsing type: , name: indicatorsDesBtn
    // Error parsing type: , name: zhuTuLabel
    // Error parsing type: , name: zhuTuSelectedbtn
    // Error parsing type: , name: zhuTuAry
    // Error parsing type: , name: fuTuLabel
    // Error parsing type: , name: fuTuSelectedbtn
    // Error parsing type: , name: fuTuAry
    // Error parsing type: , name: zhuSelectedIndex
    // Error parsing type: , name: fuSelectedIndex
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 level:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)completionBtnAction;
- (void)addMidView;
- (id)initWithFrame:(struct CGRect)arg1 zhuTuAry:(id)arg2 fuTuAry:(id)arg3 zSelectedIndex:(long long)arg4 fSelectedIndex:(long long)arg5;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, copy) NSArray *fuTuAry;
@property(nonatomic, retain) UIButton *fuTuSelectedbtn; // @synthesize fuTuSelectedbtn;
@property(nonatomic, retain) UILabel *fuTuLabel; // @synthesize fuTuLabel;
@property(nonatomic, copy) NSArray *zhuTuAry;
@property(nonatomic, retain) UIButton *zhuTuSelectedbtn; // @synthesize zhuTuSelectedbtn;
@property(nonatomic, retain) UILabel *zhuTuLabel; // @synthesize zhuTuLabel;
@property(nonatomic, retain) UIButton *indicatorsDesBtn; // @synthesize indicatorsDesBtn;

@end
