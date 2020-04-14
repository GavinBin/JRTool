//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;
@protocol TreemapViewDataSource, TreemapViewDelegate;

@interface TreemapView : UIView
{
    _Bool initialized;
    id <TreemapViewDataSource> dataSource;
    id <TreemapViewDelegate> delegate;
    NSMutableArray *_treemapItems;
    long long _currentItemIndex;
    struct CGPoint _gesturePoint;
}

@property(nonatomic) long long currentItemIndex; // @synthesize currentItemIndex=_currentItemIndex;
@property(retain, nonatomic) NSMutableArray *treemapItems; // @synthesize treemapItems=_treemapItems;
@property(nonatomic) struct CGPoint gesturePoint; // @synthesize gesturePoint=_gesturePoint;
@property(nonatomic) __weak id <TreemapViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic) __weak id <TreemapViewDataSource> dataSource; // @synthesize dataSource;
- (void).cxx_destruct;
- (void)clearTreemapProperties;
- (struct CGRect)getCellRectByIndex:(long long)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)endLondPressDir;
- (void)changedLongPressDirAtCurrentPoint:(struct CGPoint)arg1;
- (void)didLongPressGestureForTreemapView:(id)arg1;
- (void)didPressedTreemapItem:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reloadData;
- (void)removeNodes;
- (void)resizeNodes;
- (void)createNodes;
- (id)getData;
- (void)calcNodePositions:(struct CGRect)arg1 nodes:(id)arg2 width:(double)arg3 height:(double)arg4 depth:(long long)arg5 withCreate:(_Bool)arg6;

@end
