//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UserView;

@interface UserHeaderView : UIView
{
    UserView *_userView;
    UILabel *_userNameLabel;
    CDUnknownBlockType _headerTouchedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType headerTouchedBlock; // @synthesize headerTouchedBlock=_headerTouchedBlock;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UserView *userView; // @synthesize userView=_userView;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)init;

@end
