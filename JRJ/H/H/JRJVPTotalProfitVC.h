//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJUserDetailBaseTableVC.h"

@class JRJNoStockView, JRJSimHoldPositionHandler, JRJStockGroupModel, JRJVPTotalProfitHeaderView, NSArray, TradeEmptyView;

@interface JRJVPTotalProfitVC : JRJUserDetailBaseTableVC
{
    NSArray *_hqModelList;
    NSArray *_storeHqModelList;
    JRJStockGroupModel *_groupModel;
    JRJSimHoldPositionHandler *_handler;
    JRJVPTotalProfitHeaderView *_sectionView;
    TradeEmptyView *_emptyView;
    JRJNoStockView *_noStockView;
    long long _selectindex;
}

@property(nonatomic) long long selectindex; // @synthesize selectindex=_selectindex;
@property(retain, nonatomic) JRJNoStockView *noStockView; // @synthesize noStockView=_noStockView;
@property(retain, nonatomic) TradeEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) JRJVPTotalProfitHeaderView *sectionView; // @synthesize sectionView=_sectionView;
@property(retain, nonatomic) JRJSimHoldPositionHandler *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) JRJStockGroupModel *groupModel; // @synthesize groupModel=_groupModel;
@property(retain, nonatomic) NSArray *storeHqModelList; // @synthesize storeHqModelList=_storeHqModelList;
@property(retain, nonatomic) NSArray *hqModelList; // @synthesize hqModelList=_hqModelList;
- (void).cxx_destruct;
- (id)leftNavigationImageStr;
- (void)chooseGroup;
- (void)updateListData;
- (void)updateStockData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)p_getVPProfitListJsonArr;
- (void)p_reTypeOrderChanged;
- (void)p_rePriceOrderChanged;
- (void)startStockSearchViewController;
- (void)p_removeEmpty;
- (void)p_showEmpty;
- (void)p_resetHeader;
- (void)p_tableViewReload;
- (void)p_workVPProfitResponseDic:(id)arg1;
- (void)p_updateHqModelList;
- (void)requestVPProfit;
- (void)fetchdata;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)addNotification;
- (void)configTableViewBottomInset;
- (void)configBaseTableView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
