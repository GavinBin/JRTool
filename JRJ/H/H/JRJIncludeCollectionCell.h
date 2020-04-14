//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JRJEarlyPerformlistModel, UIImageView, UILabel;

@interface JRJIncludeCollectionCell : UICollectionViewCell
{
    UILabel *_stockNameUILabel;
    UILabel *_raiseUILabel;
    UILabel *_includeTimeUILabel;
    UILabel *_includePriceUILabel;
    UIImageView *_horizonUIImageView;
    UIImageView *_verticalUIImageView;
    JRJEarlyPerformlistModel *_earlyPerformModel;
}

@property(retain, nonatomic) JRJEarlyPerformlistModel *earlyPerformModel; // @synthesize earlyPerformModel=_earlyPerformModel;
@property(nonatomic) __weak UIImageView *verticalUIImageView; // @synthesize verticalUIImageView=_verticalUIImageView;
@property(nonatomic) __weak UIImageView *horizonUIImageView; // @synthesize horizonUIImageView=_horizonUIImageView;
@property(nonatomic) __weak UILabel *includePriceUILabel; // @synthesize includePriceUILabel=_includePriceUILabel;
@property(nonatomic) __weak UILabel *includeTimeUILabel; // @synthesize includeTimeUILabel=_includeTimeUILabel;
@property(nonatomic) __weak UILabel *raiseUILabel; // @synthesize raiseUILabel=_raiseUILabel;
@property(nonatomic) __weak UILabel *stockNameUILabel; // @synthesize stockNameUILabel=_stockNameUILabel;
- (void).cxx_destruct;
- (void)fillDataWithEarlyPerformModel:(id)arg1;
- (id)imageWithLineWithVerticalImageView:(id)arg1;
- (id)imageWithLineWithImageView:(id)arg1;
- (void)awakeFromNib;

@end
