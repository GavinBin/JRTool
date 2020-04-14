//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJStockCommentViewController.h"

@class JRJStockFriendCircleHandler, NSString, TradeEmptyView;

@interface JRJUserDetailAllDynamicVC : JRJStockCommentViewController
{
    _Bool _vcCanScroll;
    _Bool _isRefresh;
    _Bool _fingerIsTouch;
    NSString *_userId;
    JRJStockFriendCircleHandler *_circleHandler;
    TradeEmptyView *_emptyView;
}

@property(retain, nonatomic) TradeEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) JRJStockFriendCircleHandler *circleHandler; // @synthesize circleHandler=_circleHandler;
@property(nonatomic) _Bool fingerIsTouch; // @synthesize fingerIsTouch=_fingerIsTouch;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) _Bool isRefresh; // @synthesize isRefresh=_isRefresh;
@property(nonatomic) _Bool vcCanScroll; // @synthesize vcCanScroll=_vcCanScroll;
- (void).cxx_destruct;
- (void)beginEditing;
- (void)cellClicked:(id)arg1 Index:(id)arg2 mianModel:(id)arg3;
- (void)clickCellActions;
- (void)reloadDataSourceWithData:(id)arg1;
- (void)fetchCommentList;
- (void)configTableViewInset;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)p_removeEmptyView;
- (void)p_showEmptyView;
- (void)p_delayLoadMore;
- (void)p_removeUnuseViewFromSuperView;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
