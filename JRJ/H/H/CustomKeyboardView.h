//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString;
@protocol CustomKeyboardViewTextChangeDelegate, UITextInput;

@interface CustomKeyboardView : UIView
{
    NSString *originalString;
    NSArray *TTstockCodes;
    id <UITextInput> _textView;
    id <CustomKeyboardViewTextChangeDelegate> _mCustKeyboardTextChangeDelegate;
}

@property(nonatomic) __weak id <CustomKeyboardViewTextChangeDelegate> mCustKeyboardTextChangeDelegate; // @synthesize mCustKeyboardTextChangeDelegate=_mCustKeyboardTextChangeDelegate;
@property(retain, nonatomic) id <UITextInput> textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)setInputViewValue:(id)arg1;
- (void)inputViewEndEdit;
- (void)keyboardDelectAction;
- (void)keyBoardClick:(id)arg1;
- (void)addSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
