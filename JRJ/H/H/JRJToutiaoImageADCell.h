//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class NSString, UIImageView;

@interface JRJToutiaoImageADCell : JRJTableViewCell
{
    NSString *_imageURLString;
    CDUnknownBlockType _tapBlock;
    UIImageView *_adImageView;
}

@property(retain, nonatomic) UIImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(copy, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
- (void).cxx_destruct;
- (void)didTap:(id)arg1;
- (void)makeConstraints;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
