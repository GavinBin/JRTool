//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJListTableViewController.h"

@class NSArray;

@interface JRJFreeTryReadListVC : JRJListTableViewController
{
    NSArray *_dataList;
}

@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
- (void).cxx_destruct;
- (void)layoutPageSubviews;
- (id)modelAtIndex:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)loadUIData:(_Bool)arg1;
- (void)loadNewData;
- (void)loadData;
- (void)viewDidLoad;

@end
