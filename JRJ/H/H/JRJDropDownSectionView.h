//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface JRJDropDownSectionView : UIView
{
    UILabel *_titleLabel;
    UIImageView *_triangleView;
}

@property(retain, nonatomic) UIImageView *triangleView; // @synthesize triangleView=_triangleView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)rotateTriangleUpward:(_Bool)arg1 animated:(_Bool)arg2;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end
