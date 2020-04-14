//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKTableDataSource.h"

@class LoadMoreCell, NSMutableArray;

@interface KKTableLoadMoreDataSource : KKTableDataSource
{
    _Bool _isHaveNoneData;
    _Bool _isNetworkError;
    _Bool _isLoading;
    LoadMoreCell *_loadMoreCell;
    long long _pageSize;
    long long _pageNum;
    NSMutableArray *_dataArray;
}

@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isNetworkError; // @synthesize isNetworkError=_isNetworkError;
@property(nonatomic) long long pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) _Bool isHaveNoneData; // @synthesize isHaveNoneData=_isHaveNoneData;
@property(retain, nonatomic) LoadMoreCell *loadMoreCell; // @synthesize loadMoreCell=_loadMoreCell;
- (void).cxx_destruct;
- (_Bool)configCellWithDic;
- (void)loadListRequest;
- (void)requestMoreListData;
- (void)handleRequestDataArray:(id)arg1;
- (_Bool)isNibCell;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)viewForFooterInSection:(long long)arg1;
- (id)viewForHeaderInSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)init;

@end
