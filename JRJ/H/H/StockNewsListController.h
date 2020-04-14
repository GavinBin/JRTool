//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJListTableViewController.h"

#import "YZStockInfoCenterCellDelegate-Protocol.h"

@class JRJResearchReportListContentModel, JRJZXQBOldHeader, NSArray, NSMutableArray, NSString, StockInfoMainFooterView, UIView;

@interface StockNewsListController : JRJListTableViewController <YZStockInfoCenterCellDelegate>
{
    StockInfoMainFooterView *requestStatusView;
    JRJZXQBOldHeader *_headerView;
    NSString *stockCode;
    NSString *_stockName;
    long long _newsPageIndex;
    UIView *_headerSuperView;
    UIView *_sectionView;
    long long _currentType;
    NSArray *_researchGradeArr;
    NSMutableArray *_newsListArr;
    NSMutableArray *_researchListArr;
    JRJResearchReportListContentModel *_report;
}

@property(retain, nonatomic) JRJResearchReportListContentModel *report; // @synthesize report=_report;
@property(retain, nonatomic) NSMutableArray *researchListArr; // @synthesize researchListArr=_researchListArr;
@property(retain, nonatomic) NSMutableArray *newsListArr; // @synthesize newsListArr=_newsListArr;
@property(retain, nonatomic) NSArray *researchGradeArr; // @synthesize researchGradeArr=_researchGradeArr;
@property(nonatomic) long long currentType; // @synthesize currentType=_currentType;
@property(retain, nonatomic) UIView *sectionView; // @synthesize sectionView=_sectionView;
@property(retain, nonatomic) UIView *headerSuperView; // @synthesize headerSuperView=_headerSuperView;
@property(nonatomic) long long newsPageIndex; // @synthesize newsPageIndex=_newsPageIndex;
@property(copy, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(copy, nonatomic) NSString *stockCode; // @synthesize stockCode;
- (void).cxx_destruct;
- (void)dealMoreAction;
- (id)p_readCacheKeyWithUrl:(id)arg1;
- (void)p_setArticleIsRead:(id)arg1;
- (_Bool)p_articleIsRead:(id)arg1;
- (id)title;
- (void)loadMore;
- (void)requestDataWithStart:(_Bool)arg1;
- (void)scrollsToTop;
- (double)heightForCenterCell;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)p_getRATING_SYNWithCode:(long long)arg1;
- (id)p_getStrListArrWithModel:(id)arg1;
- (void)stockClick:(id)arg1;
- (void)p_resetTableViewBottomPadding:(double)arg1;
- (void)addRequestStatusWithHeight:(double)arg1 withShowType:(int)arg2;
- (void)p_handleResearchInfoWithArr:(id)arg1 isLoadMore:(_Bool)arg2;
- (void)p_handleMyStockNewsResponse:(id)arg1 isLoadMore:(_Bool)arg2;
- (void)requestZhiHuiYanBao;
- (void)requestYanBaoWithLoadMore:(_Bool)arg1;
- (void)requestPingJi;
- (void)requestNewsWithLoadMore:(_Bool)arg1;
- (void)loadNewsDataIsLoadMore:(_Bool)arg1;
- (void)handleRequestDataArray:(id)arg1;
- (void)requestMoreListData;
- (void)loadListRequest;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)addTopHeaderView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
