//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class JRJCustomSearchClickView, JRJZSMainPageNaviTitleView, NSArray, NSString, UICollectionView, UIImageView, UILabel;

@interface JRJZSMainPageHeaderView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    CDUnknownBlockType _didClickSearchBlock;
    NSString *_updateTimeString;
    UIImageView *_bannerBgView;
    JRJZSMainPageNaviTitleView *_titleView;
    JRJCustomSearchClickView *_searchView;
    UIView *_sectionView;
    UIImageView *_leftMarkIcon;
    UILabel *_sectionLeftLabel;
    UILabel *_sectionRightLabel;
    UICollectionView *_collectionView;
    UIView *_sepLineView;
    NSArray *_msgList;
}

@property(retain, nonatomic) NSArray *msgList; // @synthesize msgList=_msgList;
@property(retain, nonatomic) UIView *sepLineView; // @synthesize sepLineView=_sepLineView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *sectionRightLabel; // @synthesize sectionRightLabel=_sectionRightLabel;
@property(retain, nonatomic) UILabel *sectionLeftLabel; // @synthesize sectionLeftLabel=_sectionLeftLabel;
@property(retain, nonatomic) UIImageView *leftMarkIcon; // @synthesize leftMarkIcon=_leftMarkIcon;
@property(retain, nonatomic) UIView *sectionView; // @synthesize sectionView=_sectionView;
@property(retain, nonatomic) JRJCustomSearchClickView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) JRJZSMainPageNaviTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *bannerBgView; // @synthesize bannerBgView=_bannerBgView;
@property(copy, nonatomic) NSString *updateTimeString; // @synthesize updateTimeString=_updateTimeString;
@property(copy, nonatomic) CDUnknownBlockType didClickSearchBlock; // @synthesize didClickSearchBlock=_didClickSearchBlock;
- (void).cxx_destruct;
- (void)layoutPageSubviews;
- (id)msgListModelAtIndex:(long long)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)changeSearchViewWithContentOffSetY:(double)arg1;
- (void)updateSuperZhanJiBannerList:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
