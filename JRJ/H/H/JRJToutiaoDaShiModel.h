//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface JRJToutiaoDaShiModel : NSObject
{
    NSString *_ID;
    NSString *_title;
    long long _timestamp;
    NSString *_url;
    long long _isBear;
    long long _rank;
    long long _click;
    NSDate *_date;
    NSString *_timeString;
    long long _hits;
    NSArray *_relatedArticles;
    NSString *_relatedArticlesTitle;
    NSArray *_analyse;
}

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)dateFormatter;
@property(retain, nonatomic) NSArray *analyse; // @synthesize analyse=_analyse;
@property(retain, nonatomic) NSString *relatedArticlesTitle; // @synthesize relatedArticlesTitle=_relatedArticlesTitle;
@property(retain, nonatomic) NSArray *relatedArticles; // @synthesize relatedArticles=_relatedArticles;
@property(nonatomic) long long hits; // @synthesize hits=_hits;
@property(retain, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) long long click; // @synthesize click=_click;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(nonatomic) long long isBear; // @synthesize isBear=_isBear;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;

@end
