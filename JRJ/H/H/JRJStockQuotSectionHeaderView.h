//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIButton, UILabel;

@interface JRJStockQuotSectionHeaderView : UITableViewHeaderFooterView
{
    UILabel *_titleLabel;
    UILabel *_lineView;
    UIButton *_moreButton;
    CDUnknownBlockType _moreButtonPressedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType moreButtonPressedBlock; // @synthesize moreButtonPressedBlock=_moreButtonPressedBlock;
@property(nonatomic) __weak UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) __weak UILabel *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)moreClick:(id)arg1;
- (void)awakeFromNib;

@end
