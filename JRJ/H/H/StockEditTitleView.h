//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseXibView.h"

@class UILabel;

@interface StockEditTitleView : BaseXibView
{
    UILabel *_nameLabel;
    UILabel *_yuJingLabel;
    UILabel *_zhiDingLabel;
    UILabel *_moveLabel;
}

+ (double)height;
@property(nonatomic) __weak UILabel *moveLabel; // @synthesize moveLabel=_moveLabel;
@property(nonatomic) __weak UILabel *zhiDingLabel; // @synthesize zhiDingLabel=_zhiDingLabel;
@property(nonatomic) __weak UILabel *yuJingLabel; // @synthesize yuJingLabel=_yuJingLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end
