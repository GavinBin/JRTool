//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface JRJTradeBuyAndSellRiskInfoModel : NSObject
{
    NSString *_dealKey;
    NSString *_msgType;
    NSString *_msgTitle;
    NSString *_msgContent;
    NSString *_riskTestUrl;
    NSArray *_agreementList;
}

+ (id)mj_objectClassInArray;
@property(retain, nonatomic) NSArray *agreementList; // @synthesize agreementList=_agreementList;
@property(copy, nonatomic) NSString *riskTestUrl; // @synthesize riskTestUrl=_riskTestUrl;
@property(copy, nonatomic) NSString *msgContent; // @synthesize msgContent=_msgContent;
@property(copy, nonatomic) NSString *msgTitle; // @synthesize msgTitle=_msgTitle;
@property(copy, nonatomic) NSString *msgType; // @synthesize msgType=_msgType;
@property(copy, nonatomic) NSString *dealKey; // @synthesize dealKey=_dealKey;
- (void).cxx_destruct;

@end
