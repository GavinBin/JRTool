//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JRJUIKit/ModalView.h>

@class NSArray, UIButton, UIImageView;

@interface JRJTimeSelectView : ModalView
{
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _confirmBlock;
    NSArray *_titleArr;
    JRJTimeSelectView *_timeView;
    UIButton *_cancelBtn;
    UIButton *_oneDayBtn;
    UIButton *_twoHourBtn;
    UIButton *_tenMinBtn;
    UIImageView *_oneDayImg;
    UIImageView *_twoHourImg;
    UIImageView *_tenMinImg;
}

@property(nonatomic) __weak UIImageView *tenMinImg; // @synthesize tenMinImg=_tenMinImg;
@property(nonatomic) __weak UIImageView *twoHourImg; // @synthesize twoHourImg=_twoHourImg;
@property(nonatomic) __weak UIImageView *oneDayImg; // @synthesize oneDayImg=_oneDayImg;
@property(nonatomic) __weak UIButton *tenMinBtn; // @synthesize tenMinBtn=_tenMinBtn;
@property(nonatomic) __weak UIButton *twoHourBtn; // @synthesize twoHourBtn=_twoHourBtn;
@property(nonatomic) __weak UIButton *oneDayBtn; // @synthesize oneDayBtn=_oneDayBtn;
@property(nonatomic) __weak UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) JRJTimeSelectView *timeView; // @synthesize timeView=_timeView;
@property(retain, nonatomic) NSArray *titleArr; // @synthesize titleArr=_titleArr;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void).cxx_destruct;
- (void)layoutImageShowType:(long long)arg1;
- (void)setGoBackBlock:(long long)arg1;
- (void)tenMinBtn:(id)arg1;
- (void)twoHourBtn:(id)arg1;
- (void)oneDayBtn:(id)arg1;
- (void)cancel:(id)arg1;
- (void)awakeFromNib;

@end
