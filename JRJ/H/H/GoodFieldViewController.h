//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseViewController.h"

#import "UINavigationControllerDelegate-Protocol.h"

@class NSMutableArray, NSMutableString, NSString;

@interface GoodFieldViewController : JRJBaseViewController <UINavigationControllerDelegate>
{
    int btnSelectedCount;
    NSMutableString *goodStr;
    NSMutableArray *_goodFieldList;
    CDUnknownBlockType _goodFieldBlock;
}

@property(copy, nonatomic) CDUnknownBlockType goodFieldBlock; // @synthesize goodFieldBlock=_goodFieldBlock;
@property(retain, nonatomic) NSMutableArray *goodFieldList; // @synthesize goodFieldList=_goodFieldList;
- (void).cxx_destruct;
- (id)title;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)btnGoodClick:(id)arg1;
- (void)loadData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
