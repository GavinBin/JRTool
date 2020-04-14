//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJFormBaseCell.h"

@class MLLinkLabel, NSString;

@interface JRJFormLinkCell : JRJFormBaseCell
{
    _Bool _enabled;
    double _height;
    long long _textAlignment;
    CDUnknownBlockType _pressedBlock;
    MLLinkLabel *_linkLabel;
    NSString *_text;
    NSString *_linkText;
}

@property(copy, nonatomic) NSString *linkText; // @synthesize linkText=_linkText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) MLLinkLabel *linkLabel; // @synthesize linkLabel=_linkLabel;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) CDUnknownBlockType pressedBlock; // @synthesize pressedBlock=_pressedBlock;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
- (void)p_setLinkWithText:(id)arg1 linkText:(id)arg2;
- (void)setText:(id)arg1 linkText:(id)arg2;
- (void)configure;

@end
