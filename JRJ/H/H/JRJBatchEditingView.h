//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JRJCheckbox, UIButton;

@interface JRJBatchEditingView : UIView
{
    long long _count;
    JRJCheckbox *_checkbox;
    CDUnknownBlockType _selectAllBlock;
    CDUnknownBlockType _deleteBlock;
    UIButton *_deleteButton;
}

@property(nonatomic) __weak UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(copy, nonatomic) CDUnknownBlockType selectAllBlock; // @synthesize selectAllBlock=_selectAllBlock;
@property(nonatomic) __weak JRJCheckbox *checkbox; // @synthesize checkbox=_checkbox;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)deleteButtonPressed:(id)arg1;
- (void)reset;
- (void)awakeFromNib;

@end
