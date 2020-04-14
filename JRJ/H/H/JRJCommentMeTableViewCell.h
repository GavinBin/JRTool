//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class JRJRCLabelProxy, RCLabel, UIImageView, UILabel, UIView;

@interface JRJCommentMeTableViewCell : JRJTableViewCell
{
    UIView *_touchView;
    UIImageView *_userHeader;
    UILabel *_userName;
    UILabel *_timeLabel;
    RCLabel *_contentLabel;
    JRJRCLabelProxy *_rcLabelProxy;
}

+ (double)cellHeightWithContent:(id)arg1;
@property(retain, nonatomic) JRJRCLabelProxy *rcLabelProxy; // @synthesize rcLabelProxy=_rcLabelProxy;
@property(nonatomic) __weak RCLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *userName; // @synthesize userName=_userName;
@property(nonatomic) __weak UIImageView *userHeader; // @synthesize userHeader=_userHeader;
@property(nonatomic) __weak UIView *touchView; // @synthesize touchView=_touchView;
- (void).cxx_destruct;
- (void)didClickedHead;
- (void)updateCellWithSource:(id)arg1;
- (void)awakeFromNib;

@end
