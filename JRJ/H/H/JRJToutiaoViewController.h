//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJListTableViewController.h"

#import "JSKRequestDelegate-Protocol.h"

@class JRJStockFriendsTouTiaoView, JRJToutiaoFooterView, NSArray, NSNumber, NSString, NSTimer;

@interface JRJToutiaoViewController : JRJListTableViewController <JSKRequestDelegate>
{
    _Bool _isManualRrefresh;
    _Bool _isFirstLoad;
    JRJToutiaoFooterView *_footerView;
    JRJStockFriendsTouTiaoView *_stockFriendsTouTiaoView;
    NSNumber *_articleNumber;
    NSTimer *_articleNumTimer;
    long long _refreshTextIndex;
    NSArray *_originalResponse;
}

@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(retain, nonatomic) NSArray *originalResponse; // @synthesize originalResponse=_originalResponse;
@property(nonatomic) long long refreshTextIndex; // @synthesize refreshTextIndex=_refreshTextIndex;
@property(retain, nonatomic) NSTimer *articleNumTimer; // @synthesize articleNumTimer=_articleNumTimer;
@property(nonatomic) _Bool isManualRrefresh; // @synthesize isManualRrefresh=_isManualRrefresh;
@property(retain, nonatomic) NSNumber *articleNumber; // @synthesize articleNumber=_articleNumber;
@property(retain, nonatomic) JRJStockFriendsTouTiaoView *stockFriendsTouTiaoView; // @synthesize stockFriendsTouTiaoView=_stockFriendsTouTiaoView;
@property(retain, nonatomic) JRJToutiaoFooterView *footerView; // @synthesize footerView=_footerView;
- (void).cxx_destruct;
- (void)pullToRefresh;
- (void)stopArticleNumTimer;
- (void)startArticleNumTimer;
- (void)p_updateRefreshHeaderText;
- (void)p_refresh;
- (void)p_appendFeedArray:(id)arg1 toDataArray:(id)arg2;
- (id)p_buildNewsFeeds:(id)arg1;
- (void)p_handleResponse:(id)arg1;
- (void)feedADDidUpdate:(id)arg1;
- (void)configurationDidChange:(id)arg1;
- (void)userDidLogout:(id)arg1;
- (void)userDidLogin:(id)arg1;
- (void)loadListRequest;
- (void)requestArticleNumber;
- (void)dealloc;
- (void)registerNotifications;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)launchpad_items;
- (void)tooltip_dismissScrollToTop;
- (void)tooltip_showScrollToTop;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)p_openAD:(id)arg1;
- (void)p_didTapSectionHeaderWithModel:(id)arg1;
- (_Bool)p_isLastRowInSection:(id)arg1;
- (id)p_sectionModelInSection:(long long)arg1;
- (void)registerTableViewCells;
- (void)updateArticleNumber:(id)arg1;
- (void)table_setupFooter;
- (void)setupTableView;
- (void)footer_collapse;
- (void)xiaojin_showStockSearchViewController;
- (void)xiaojin_reorder;
- (void)xiaojin_didReceiveResponse:(id)arg1;
- (void)xiaojin_request;
- (void)xiaojin_routeTo:(id)arg1;
- (void)footer_init;
- (id)ad_FeedADsInArray:(id)arg1 count:(long long)arg2;
- (id)ad_firstFeedADInArray:(id)arg1;
- (id)ad_bannerADWithSpace:(id)arg1 inArray:(id)arg2;
- (void)ad_update;
- (void)p_addAdModel:(id)arg1 to:(id)arg2 index:(long long)arg3;
- (id)ad_feedADs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
