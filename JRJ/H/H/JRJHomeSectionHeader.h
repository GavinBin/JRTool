//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewHeaderView.h"

@class NSString, UIButton, UIImageView, UILabel, UIView;

@interface JRJHomeSectionHeader : JRJTableViewHeaderView
{
    _Bool _showsBottomBorder;
    _Bool _showsDisclosureIndicator;
    CDUnknownBlockType _pressedBlock;
    NSString *_title;
    NSString *_subtitle;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_bottomBorder;
    UIImageView *_disclosureIndicatorImageView;
    UIButton *_maskButton;
}

@property(nonatomic) __weak UIButton *maskButton; // @synthesize maskButton=_maskButton;
@property(nonatomic) __weak UIImageView *disclosureIndicatorImageView; // @synthesize disclosureIndicatorImageView=_disclosureIndicatorImageView;
@property(nonatomic) __weak UIView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool showsDisclosureIndicator; // @synthesize showsDisclosureIndicator=_showsDisclosureIndicator;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool showsBottomBorder; // @synthesize showsBottomBorder=_showsBottomBorder;
@property(copy, nonatomic) CDUnknownBlockType pressedBlock; // @synthesize pressedBlock=_pressedBlock;
- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (void)awakeFromNib;

@end
