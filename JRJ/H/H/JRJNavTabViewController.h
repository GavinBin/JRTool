//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VTMagic/VTMagicController.h>

@class JRJNavTabMagicView, JRJNavigationBarContainerView;

@interface JRJNavTabViewController : VTMagicController
{
    JRJNavigationBarContainerView *_titleViewContainerView;
    JRJNavTabMagicView *_customMagicView;
}

@property(retain, nonatomic) JRJNavTabMagicView *customMagicView; // @synthesize customMagicView=_customMagicView;
@property(retain, nonatomic) JRJNavigationBarContainerView *titleViewContainerView; // @synthesize titleViewContainerView=_titleViewContainerView;
- (void).cxx_destruct;
- (id)magicView;
- (_Bool)shouldAutorotate;
- (id)magicView:(id)arg1 menuItemAtIndex:(unsigned long long)arg2;
- (void)setupNavigationUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

@end
