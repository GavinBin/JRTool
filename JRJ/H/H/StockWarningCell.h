//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RichTextXibView.h"

@class UIImageView, UIView;

@interface StockWarningCell : RichTextXibView
{
    UIView *_backView;
    UIImageView *_iconImageView;
}

+ (double)heightWithModel:(id)arg1;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UIView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configCellWithModel:(id)arg1;
- (void)awakeFromNib;

@end
