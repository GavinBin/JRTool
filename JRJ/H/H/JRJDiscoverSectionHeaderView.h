//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;

@interface JRJDiscoverSectionHeaderView : UIView
{
    _Bool _hiddenArrow;
    _Bool _hiddenMoreButton;
    NSString *_leftTitle;
    NSString *_rightTitle;
    UIImageView *_leftCornerMark;
    CDUnknownBlockType _didClickMoreButtonBlock;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    UIImageView *_arrowImageView;
    UIButton *_rightButton;
}

@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(copy, nonatomic) CDUnknownBlockType didClickMoreButtonBlock; // @synthesize didClickMoreButtonBlock=_didClickMoreButtonBlock;
@property(nonatomic) _Bool hiddenMoreButton; // @synthesize hiddenMoreButton=_hiddenMoreButton;
@property(nonatomic) _Bool hiddenArrow; // @synthesize hiddenArrow=_hiddenArrow;
@property(retain, nonatomic) UIImageView *leftCornerMark; // @synthesize leftCornerMark=_leftCornerMark;
@property(copy, nonatomic) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(copy, nonatomic) NSString *leftTitle; // @synthesize leftTitle=_leftTitle;
- (void).cxx_destruct;
- (void)layoutPageSubviews;
- (void)didPressedMoreButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end
