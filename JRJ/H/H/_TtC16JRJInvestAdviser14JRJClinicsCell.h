//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC16JRJInvestAdviser10ZKBaseCell.h"

@class NSString, UIButton, UILabel, UITextField, UIView, _TtC16JRJInvestAdviser15JRJRadarMapView;

@interface _TtC16JRJInvestAdviser14JRJClinicsCell : _TtC16JRJInvestAdviser10ZKBaseCell
{
    // Error parsing type: , name: textFieldView
    // Error parsing type: , name: overallScoreLabel
    // Error parsing type: , name: rankingPercentLabel
    // Error parsing type: , name: overallScoreDescLabel
    // Error parsing type: , name: radarMapView
    // Error parsing type: , name: stockTypeBtn
    // Error parsing type: , name: stkBtn
    // Error parsing type: , name: btnClickFunc
    // Error parsing type: , name: pushSearchViewFunc
    // Error parsing type: , name: textFieldText
    // Error parsing type: , name: $__lazy_storage_$_radarMap
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)btnClickHandle:(id)arg1;
- (void)updateViewForModelWithModel:(id)arg1;
- (void)setSubViewStyle;
- (void)awakeFromNib;
@property(nonatomic, retain) _TtC16JRJInvestAdviser15JRJRadarMapView *radarMap;
@property(nonatomic, copy) NSString *textFieldText;
@property(nonatomic, copy) CDUnknownBlockType pushSearchViewFunc;
@property(nonatomic, copy) CDUnknownBlockType btnClickFunc;
@property(nonatomic) __weak UIButton *stkBtn; // @synthesize stkBtn;
@property(nonatomic) __weak UIButton *stockTypeBtn; // @synthesize stockTypeBtn;
@property(nonatomic) __weak UIView *radarMapView; // @synthesize radarMapView;
@property(nonatomic) __weak UILabel *overallScoreDescLabel; // @synthesize overallScoreDescLabel;
@property(nonatomic) __weak UILabel *rankingPercentLabel; // @synthesize rankingPercentLabel;
@property(nonatomic) __weak UILabel *overallScoreLabel; // @synthesize overallScoreLabel;
@property(nonatomic) __weak UITextField *textFieldView; // @synthesize textFieldView;

@end
