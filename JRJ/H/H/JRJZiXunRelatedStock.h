//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JRJZiXunRelatedResearchReport, NSNumber, NSString;

@interface JRJZiXunRelatedStock : NSObject
{
    _Bool _isXreport;
    long long _zstype;
    long long _zstradetype;
    NSNumber *_zsprofit;
    NSString *_stockcode;
    NSString *_stockname;
    NSString *_mktype;
    NSString *_zsdesc;
    NSNumber *_stockchange;
    NSNumber *_stockprofit;
    NSNumber *_stockprice;
    JRJZiXunRelatedResearchReport *_xreport;
}

@property(retain, nonatomic) JRJZiXunRelatedResearchReport *xreport; // @synthesize xreport=_xreport;
@property(nonatomic) _Bool isXreport; // @synthesize isXreport=_isXreport;
@property(retain, nonatomic) NSNumber *stockprice; // @synthesize stockprice=_stockprice;
@property(retain, nonatomic) NSNumber *stockprofit; // @synthesize stockprofit=_stockprofit;
@property(retain, nonatomic) NSNumber *stockchange; // @synthesize stockchange=_stockchange;
@property(retain, nonatomic) NSString *zsdesc; // @synthesize zsdesc=_zsdesc;
@property(retain, nonatomic) NSString *mktype; // @synthesize mktype=_mktype;
@property(retain, nonatomic) NSString *stockname; // @synthesize stockname=_stockname;
@property(retain, nonatomic) NSString *stockcode; // @synthesize stockcode=_stockcode;
@property(retain, nonatomic) NSNumber *zsprofit; // @synthesize zsprofit=_zsprofit;
@property(nonatomic) long long zstradetype; // @synthesize zstradetype=_zstradetype;
@property(nonatomic) long long zstype; // @synthesize zstype=_zstype;
- (void).cxx_destruct;

@end
