//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class JRJToutiaoJiHuiModel, P_JRJTodayChanceTopListStockItem, UILabel, UIView;

@interface JRJTodayChanceTopListCell : JRJTableViewCell
{
    JRJToutiaoJiHuiModel *_jihuiModel;
    CDUnknownBlockType _didClickStockItemBlock;
    UIView *_bgView;
    UIView *_shadowView;
    UILabel *_titleLabel;
    P_JRJTodayChanceTopListStockItem *_leftStock;
    P_JRJTodayChanceTopListStockItem *_rightStock;
}

@property(retain, nonatomic) P_JRJTodayChanceTopListStockItem *rightStock; // @synthesize rightStock=_rightStock;
@property(retain, nonatomic) P_JRJTodayChanceTopListStockItem *leftStock; // @synthesize leftStock=_leftStock;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType didClickStockItemBlock; // @synthesize didClickStockItemBlock=_didClickStockItemBlock;
@property(retain, nonatomic) JRJToutiaoJiHuiModel *jihuiModel; // @synthesize jihuiModel=_jihuiModel;
- (void).cxx_destruct;
- (void)layoutPageSubviews;
- (void)p_setStocks:(id)arg1;
- (void)p_setTitle:(id)arg1 strength:(long long)arg2;
- (void)p_dropShadow;
- (void)layoutSubviews;
- (void)didPressedStockRightItem;
- (void)didPressedStockLetfItem;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
