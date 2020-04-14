//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JRJUIKit/ModalView.h>

@class NSDictionary, NSMutableArray, UIButton, UILabel;

@interface JRJCreditExchangeAlertView : ModalView
{
    NSDictionary *_couponInfo;
    CDUnknownBlockType _okBlock;
    CDUnknownBlockType _cancelBlock;
    NSDictionary *_info;
    UILabel *_titleLabel;
    NSMutableArray *_rows;
    UIButton *_okButton;
    UIButton *_cancelButton;
}

@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType okBlock; // @synthesize okBlock=_okBlock;
@property(retain, nonatomic) NSDictionary *couponInfo; // @synthesize couponInfo=_couponInfo;
- (void).cxx_destruct;
- (id)p_leftLabelWithText:(id)arg1;
- (id)p_rightLabelWithText:(id)arg1;
- (void)didTapCancelButton:(id)arg1;
- (void)didTapOKButton:(id)arg1;
- (void)makeConstraints;
- (void)commonInit;
- (id)initWithCouponInfo:(id)arg1;

@end
