//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JRJRelatedInvestReferenceItem, UIButton, UIImageView, UILabel;

@interface JRJTouGuRelatedReferenceSectionView : UIView
{
    UIButton *_moreButton;
    JRJRelatedInvestReferenceItem *_referenceItem;
    CDUnknownBlockType _clickSectionBlock;
    UIView *_topView;
    UIView *_lineView;
    UILabel *_titleLabel;
    UIImageView *_arrowImageView;
}

@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(copy, nonatomic) CDUnknownBlockType clickSectionBlock; // @synthesize clickSectionBlock=_clickSectionBlock;
@property(retain, nonatomic) JRJRelatedInvestReferenceItem *referenceItem; // @synthesize referenceItem=_referenceItem;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
- (void).cxx_destruct;
- (void)layoutPageSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
