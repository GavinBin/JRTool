//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface JRJResearchReportSmartCommentCell : JRJTableViewCell
{
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    UILabel *_publishTimeLabel;
    UIButton *_collectButton;
    UIButton *_shareButton;
    UIButton *_moreButton;
    UIView *_operationView;
    UIView *_moreView;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *moreView; // @synthesize moreView=_moreView;
@property(retain, nonatomic) UIView *operationView; // @synthesize operationView=_operationView;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *collectButton; // @synthesize collectButton=_collectButton;
@property(retain, nonatomic) UILabel *publishTimeLabel; // @synthesize publishTimeLabel=_publishTimeLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutPageSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
