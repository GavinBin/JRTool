//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JRJToutiaoXiaoJin : NSObject
{
    long long _num;
    long long _utime;
    long long _upNum;
    long long _downNum;
    NSString *_stockName;
    NSString *_touguName;
    long long _type;
    long long _wholeNetworkTopNum;
}

+ (id)titles;
@property(nonatomic) long long wholeNetworkTopNum; // @synthesize wholeNetworkTopNum=_wholeNetworkTopNum;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *touguName; // @synthesize touguName=_touguName;
@property(retain, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(nonatomic) long long downNum; // @synthesize downNum=_downNum;
@property(nonatomic) long long upNum; // @synthesize upNum=_upNum;
@property(nonatomic) long long utime; // @synthesize utime=_utime;
@property(nonatomic) long long num; // @synthesize num=_num;
- (void).cxx_destruct;
- (id)p_readCacheKey;
@property(nonatomic, getter=isRead) _Bool read;
- (id)description;
@property(readonly, nonatomic) NSString *status;
@property(readonly, nonatomic) NSString *title;

@end
