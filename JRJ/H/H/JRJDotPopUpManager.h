//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JRJDotPopUpView, NSMutableArray;

@interface JRJDotPopUpManager : NSObject
{
    JRJDotPopUpView *_dotPopUpView;
    NSMutableArray *_dotData;
}

+ (void)closeTrackView;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *dotData; // @synthesize dotData=_dotData;
@property(retain, nonatomic) JRJDotPopUpView *dotPopUpView; // @synthesize dotPopUpView=_dotPopUpView;
- (void).cxx_destruct;
- (void)removeAllTrack;
- (void)addTrackModel:(id)arg1;

@end
