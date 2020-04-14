//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPageController.h"

#import "WMPageControllerDelegate-Protocol.h"

@class JRJCommentMeViewController, JRJMyAnswerViewController, NSString;

@interface JRJInteractiveMessagePageViewController : WMPageController <WMPageControllerDelegate>
{
    int _ftype;
    JRJMyAnswerViewController *_answerVC;
    JRJCommentMeViewController *_commentVC;
}

+ (void)p_JRJInteractiveMessagePageViewController:(int)arg1 withUIViewController:(id)arg2;
@property(retain, nonatomic) JRJCommentMeViewController *commentVC; // @synthesize commentVC=_commentVC;
@property(retain, nonatomic) JRJMyAnswerViewController *answerVC; // @synthesize answerVC=_answerVC;
@property(nonatomic) int ftype; // @synthesize ftype=_ftype;
- (void).cxx_destruct;
- (void)askButtonTapped:(id)arg1;
- (id)title;
- (void)didSelectedPageController:(id)arg1 index:(long long)arg2;
- (id)pageControllerForIndex:(long long)arg1;
- (long long)numberOfPages:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
