//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC16JRJInvestAdviser10ZKBaseCell.h"

@class NSArray, NSLayoutConstraint, UIImageView, UILabel;

@interface _TtC16JRJInvestAdviser23JRJIntelligentPlateCell : _TtC16JRJInvestAdviser10ZKBaseCell
{
    // Error parsing type: , name: heirhtConstraint
    // Error parsing type: , name: plateNameLabel
    // Error parsing type: , name: strengthNameLabel
    // Error parsing type: , name: stockMonthpl
    // Error parsing type: , name: empt_image
    // Error parsing type: , name: empt_label
    // Error parsing type: , name: label_array
    // Error parsing type: , name: plateFollowList
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateViewForModel;
- (void)awakeFromNib;
@property(nonatomic, copy) NSArray *plateFollowList;
@property(nonatomic) __weak UILabel *empt_label; // @synthesize empt_label;
@property(nonatomic) __weak UIImageView *empt_image; // @synthesize empt_image;
@property(nonatomic) __weak UILabel *stockMonthpl; // @synthesize stockMonthpl;
@property(nonatomic) __weak UILabel *strengthNameLabel; // @synthesize strengthNameLabel;
@property(nonatomic) __weak UILabel *plateNameLabel; // @synthesize plateNameLabel;
@property(nonatomic, retain) NSLayoutConstraint *heirhtConstraint; // @synthesize heirhtConstraint;

@end
