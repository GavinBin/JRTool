//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class NSLayoutConstraint, NSString, UIButton, UILabel;

@interface JRJCustomMadeCell : JRJTableViewCell
{
    UILabel *_stockNameLabel;
    UIButton *_tipButton;
    UILabel *_stockCodeLabel;
    UILabel *_timeLabel;
    UILabel *_priceAndUpLabel;
    NSString *_desc;
    NSString *_semaphoreCode;
    NSLayoutConstraint *_timeTopConstraint;
    NSLayoutConstraint *_centerConstraint;
    NSLayoutConstraint *_rightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *rightConstraint; // @synthesize rightConstraint=_rightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *centerConstraint; // @synthesize centerConstraint=_centerConstraint;
@property(nonatomic) __weak NSLayoutConstraint *timeTopConstraint; // @synthesize timeTopConstraint=_timeTopConstraint;
@property(retain, nonatomic) NSString *semaphoreCode; // @synthesize semaphoreCode=_semaphoreCode;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) __weak UILabel *priceAndUpLabel; // @synthesize priceAndUpLabel=_priceAndUpLabel;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *stockCodeLabel; // @synthesize stockCodeLabel=_stockCodeLabel;
@property(nonatomic) __weak UIButton *tipButton; // @synthesize tipButton=_tipButton;
@property(nonatomic) __weak UILabel *stockNameLabel; // @synthesize stockNameLabel=_stockNameLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)clickButton:(id)arg1;
- (void)updateWithDic:(id)arg1;
- (void)awakeFromNib;

@end
