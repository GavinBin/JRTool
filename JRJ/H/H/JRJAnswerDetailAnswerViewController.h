//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKTableViewController.h"

@class JRJAnswerDetailAnswerModel, JRJAnswerDetailHandler, JRJAnswerModel, NSString, UIView;

@interface JRJAnswerDetailAnswerViewController : KKTableViewController
{
    long long _answerId;
    NSString *_userId;
    JRJAnswerModel *_answer;
    JRJAnswerDetailHandler *_handler;
    UIView *_banner;
    JRJAnswerDetailAnswerModel *_model;
}

@property(retain, nonatomic) JRJAnswerDetailAnswerModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *banner; // @synthesize banner=_banner;
@property(retain, nonatomic) JRJAnswerDetailHandler *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) JRJAnswerModel *answer; // @synthesize answer=_answer;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) long long answerId; // @synthesize answerId=_answerId;
- (void).cxx_destruct;
- (void)refreshViewBeginRefresh:(id)arg1;
- (id)title;
- (void)followUser:(id)arg1;
- (void)doWithResponse:(id)arg1;
- (void)evealuteAnswer:(id)arg1 target:(id)arg2;
- (void)didClickedAsk:(id)arg1;
- (void)reloadDataSource;
- (void)hideBanner;
- (void)showBanner;
- (void)fetchDetailAnswer;
- (void)acceptAnswer:(id)arg1;
- (void)viewDidLoad;

@end
