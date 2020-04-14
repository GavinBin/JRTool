//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSTimer, OLImage;

@interface OLImageView : UIImageView
{
    unsigned long long currentFrameIndex;
    double _currentKeyframeElapsedTime;
    OLImage *_animatedImage;
    NSTimer *_keyFrameTimer;
}

@property(retain, nonatomic) NSTimer *keyFrameTimer; // @synthesize keyFrameTimer=_keyFrameTimer;
@property(retain, nonatomic) OLImage *animatedImage; // @synthesize animatedImage=_animatedImage;
@property(nonatomic) double currentKeyframeElapsedTime; // @synthesize currentKeyframeElapsedTime=_currentKeyframeElapsedTime;
@property(nonatomic) unsigned long long currentFrameIndex; // @synthesize currentFrameIndex;
- (void).cxx_destruct;
- (id)image;
- (void)didMoveToSuperview;
- (void)displayLayer:(id)arg1;
- (void)changeKeyframe;
- (void)startAnimating;
- (void)stopAnimating;
- (_Bool)isAnimating;
- (void)setImage:(id)arg1;
- (id)init;

@end
