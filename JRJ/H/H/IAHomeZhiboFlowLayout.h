//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface IAHomeZhiboFlowLayout : UICollectionViewFlowLayout
{
    double _previousOffsetX;
    long long _currentPage;
}

@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) double previousOffsetX; // @synthesize previousOffsetX=_previousOffsetX;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;

@end
