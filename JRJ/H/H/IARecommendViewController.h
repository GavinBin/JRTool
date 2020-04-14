//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKTableViewController.h"

@class IAComplexModel, IAViewPointInfoModel, InvestAdviserHandler, JRJReferenceSubscriptionHelper, NSArray, _TtC16JRJInvestAdviser14DynamicHandler;

@interface IARecommendViewController : KKTableViewController
{
    _Bool _isManualRrefresh;
    _Bool _hasData;
    InvestAdviserHandler *_handler;
    _TtC16JRJInvestAdviser14DynamicHandler *_dynamicHandler;
    IAComplexModel *_model;
    IAViewPointInfoModel *_viewPointInfoModel;
    JRJReferenceSubscriptionHelper *_subscriptionHelper;
    long long _currentPage;
    NSArray *_feedAD;
}

@property(retain, nonatomic) NSArray *feedAD; // @synthesize feedAD=_feedAD;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) _Bool hasData; // @synthesize hasData=_hasData;
@property(nonatomic) _Bool isManualRrefresh; // @synthesize isManualRrefresh=_isManualRrefresh;
@property(retain, nonatomic) JRJReferenceSubscriptionHelper *subscriptionHelper; // @synthesize subscriptionHelper=_subscriptionHelper;
@property(retain, nonatomic) IAViewPointInfoModel *viewPointInfoModel; // @synthesize viewPointInfoModel=_viewPointInfoModel;
@property(retain, nonatomic) IAComplexModel *model; // @synthesize model=_model;
@property(retain, nonatomic) _TtC16JRJInvestAdviser14DynamicHandler *dynamicHandler; // @synthesize dynamicHandler=_dynamicHandler;
@property(retain, nonatomic) InvestAdviserHandler *handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (id)title;
- (void)reload;
- (void)addNotification;
- (void)subscribeReference:(id)arg1;
- (void)initConfiguration;
- (void)p_ask;
- (id)obtainRecommendSource;
- (id)obtainFreeAskStockSource;
- (id)obtainFindAdviserSource;
- (id)referenceSource;
- (void)addHotStocksSource:(id)arg1 toArray:(id)arg2;
- (void)zxAdviserSource:(id)arg1 destArray:(id)arg2;
- (id)obtainContainerSource;
- (id)obtainColumnSource:(id)arg1 cellclass:(Class)arg2;
- (id)obtainCarouseSource;
- (id)promotionImageSource;
- (id)redianTextSource;
- (id)promotionTextSource;
- (id)liveSource;
- (id)videoSource;
- (id)classSource;
- (id)sourceWithTitle:(id)arg1 detail:(id)arg2;
- (id)sourceWithTitle:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)showEmptyView;
- (void)clickCellActions;
- (void)displayTableViewWith:(id)arg1 model:(id)arg2;
- (void)handleResponseWithError:(id)arg1;
- (void)handleResponseData;
- (void)requestViewpointOfWhiteList;
- (void)requestDynamic;
- (void)requestIVComplexInfo;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end
