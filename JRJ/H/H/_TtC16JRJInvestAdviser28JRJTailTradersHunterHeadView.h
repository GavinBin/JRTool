//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC16JRJInvestAdviser10ZKBaseView.h"

#import "JRJCarouselViewDelegate-Protocol.h"

@class JRJCarouselView, UIImageView, UILabel, UIView, _TtC16JRJInvestAdviser16JRJZStrategModel;

@interface _TtC16JRJInvestAdviser28JRJTailTradersHunterHeadView : _TtC16JRJInvestAdviser10ZKBaseView <JRJCarouselViewDelegate>
{
    // Error parsing type: , name: tapView
    // Error parsing type: , name: topJRJCarouselView
    // Error parsing type: , name: unreadBGView
    // Error parsing type: , name: hasUnreadLabel
    // Error parsing type: , name: hasUnreadImageView
    // Error parsing type: , name: tapFunc
    // Error parsing type: , name: model
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateViewForModel;
- (void)zTapViewHandle;
- (void)carouselView:(id)arg1 didTouchImageAtIndex:(long long)arg2;
- (void)setSubViewEvent;
@property(nonatomic, retain) _TtC16JRJInvestAdviser16JRJZStrategModel *model; // @synthesize model;
@property(nonatomic, copy) CDUnknownBlockType tapFunc;
@property(nonatomic, retain) UIImageView *hasUnreadImageView; // @synthesize hasUnreadImageView;
@property(nonatomic, retain) UILabel *hasUnreadLabel; // @synthesize hasUnreadLabel;
@property(nonatomic, retain) UIView *unreadBGView; // @synthesize unreadBGView;
@property(nonatomic, retain) JRJCarouselView *topJRJCarouselView; // @synthesize topJRJCarouselView;
@property(nonatomic, retain) UIView *tapView; // @synthesize tapView;

@end
