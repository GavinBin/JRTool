//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseCell.h"

@class NSArray, UIColor;

@interface JRJStockNewsResearchGradeCell : JRJBaseCell
{
    UIColor *_lableColor;
    NSArray *_labels;
}

@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) UIColor *lableColor; // @synthesize lableColor=_lableColor;
- (void).cxx_destruct;
- (void)updateCellWithList:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
