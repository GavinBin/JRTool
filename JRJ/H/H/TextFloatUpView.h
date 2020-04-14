//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, UIScrollView;

@interface TextFloatUpView : UIView <UIScrollViewDelegate>
{
    NSArray *_array;
    NSTimer *_timer;
    long long _idx;
    UIScrollView *_scrollV;
    _Bool _isDataBinded;
}

- (void).cxx_destruct;
- (void)clearAllData;
- (void)shouldStartRefresh:(_Bool)arg1;
- (void)textUpFloat;
- (void)createLabels;
- (void)bindDataWithArray:(id)arg1;
- (void)createScrollView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
