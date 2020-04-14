//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface JRJActivity : NSObject
{
    _Bool _enable;
    long long _actType;
    NSString *_activityTitle;
    UIImage *_activityImage;
    long long _actTag;
}

@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) long long actTag; // @synthesize actTag=_actTag;
@property(retain, nonatomic) UIImage *activityImage; // @synthesize activityImage=_activityImage;
@property(copy, nonatomic) NSString *activityTitle; // @synthesize activityTitle=_activityTitle;
@property(nonatomic) long long actType; // @synthesize actType=_actType;
- (void).cxx_destruct;
- (id)activityImageForType:(long long)arg1;
- (id)activityTitleForType:(long long)arg1;
- (id)initWithJRJActivityType:(long long)arg1;
- (id)initWithTitle:(id)arg1 icon:(id)arg2;

@end
