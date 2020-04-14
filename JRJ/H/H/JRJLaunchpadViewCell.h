//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "JRJLaunchpadViewCellProtocol-Protocol.h"

@class JRJLaunchpadItem, UIImageView, UILabel;

@interface JRJLaunchpadViewCell : UICollectionViewCell <JRJLaunchpadViewCellProtocol>
{
    JRJLaunchpadItem *_item;
    UIImageView *_imageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) JRJLaunchpadItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end
