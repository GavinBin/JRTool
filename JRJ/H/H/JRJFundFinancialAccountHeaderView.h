//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JRJFundFinancialAccountInfoModel, JRJFundFinancialAssetGroupView, UIButton, UIImageView, UILabel;

@interface JRJFundFinancialAccountHeaderView : UIView
{
    JRJFundFinancialAccountInfoModel *_accountInfoModel;
    CDUnknownBlockType _didClickAccountAreaBlock;
    UIImageView *_bgImageView;
    UIView *_bgView;
    UIView *_assetsView;
    UILabel *_totalAssetsDescLabel;
    UILabel *_totalAssetsLabel;
    UIButton *_eyeButton;
    UILabel *_lastIncomeDescLabel;
    UILabel *_lastIncomeLabel;
    UIImageView *_arrowImageView;
    UIView *_lineView;
    JRJFundFinancialAssetGroupView *_groupView;
}

@property(retain, nonatomic) JRJFundFinancialAssetGroupView *groupView; // @synthesize groupView=_groupView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *lastIncomeLabel; // @synthesize lastIncomeLabel=_lastIncomeLabel;
@property(retain, nonatomic) UILabel *lastIncomeDescLabel; // @synthesize lastIncomeDescLabel=_lastIncomeDescLabel;
@property(retain, nonatomic) UIButton *eyeButton; // @synthesize eyeButton=_eyeButton;
@property(retain, nonatomic) UILabel *totalAssetsLabel; // @synthesize totalAssetsLabel=_totalAssetsLabel;
@property(retain, nonatomic) UILabel *totalAssetsDescLabel; // @synthesize totalAssetsDescLabel=_totalAssetsDescLabel;
@property(retain, nonatomic) UIView *assetsView; // @synthesize assetsView=_assetsView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(copy, nonatomic) CDUnknownBlockType didClickAccountAreaBlock; // @synthesize didClickAccountAreaBlock=_didClickAccountAreaBlock;
@property(retain, nonatomic) JRJFundFinancialAccountInfoModel *accountInfoModel; // @synthesize accountInfoModel=_accountInfoModel;
- (void).cxx_destruct;
- (void)layoutPageSubviews;
- (void)updateAccountInfoUI;
- (void)didPressedEyeButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
