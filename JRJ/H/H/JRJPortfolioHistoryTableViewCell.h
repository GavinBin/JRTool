//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class JRJPortfolioV3, UILabel, UIView;

@interface JRJPortfolioHistoryTableViewCell : JRJTableViewCell
{
    _Bool _isHistory;
    UIView *_bottomSeparator;
    JRJPortfolioV3 *_portfolio;
    UILabel *_portfolioNameLabel;
    UILabel *_percentNameLabel;
    UILabel *_percentLabel;
    UILabel *_dateLabel;
}

@property(nonatomic) __weak UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) __weak UILabel *percentLabel; // @synthesize percentLabel=_percentLabel;
@property(nonatomic) __weak UILabel *percentNameLabel; // @synthesize percentNameLabel=_percentNameLabel;
@property(nonatomic) __weak UILabel *portfolioNameLabel; // @synthesize portfolioNameLabel=_portfolioNameLabel;
@property(nonatomic) _Bool isHistory; // @synthesize isHistory=_isHistory;
@property(retain, nonatomic) JRJPortfolioV3 *portfolio; // @synthesize portfolio=_portfolio;
@property(nonatomic) __weak UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
- (void).cxx_destruct;

@end
