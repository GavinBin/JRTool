//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class JRJToutiaoYuanChuangModel, MLLabel, UILabel, UIView;

@interface JRJToutiaoFeedBiDuCell : JRJTableViewCell
{
    JRJToutiaoYuanChuangModel *_model;
    UIView *_bottomSeparator;
    MLLabel *_titleLabel;
    UILabel *_timeLabel;
    UILabel *_biduLabel;
    UIView *_backView;
}

@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UILabel *biduLabel; // @synthesize biduLabel=_biduLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MLLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) JRJToutiaoYuanChuangModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)makeConstraints;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
