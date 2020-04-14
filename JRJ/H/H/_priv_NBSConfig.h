//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, _priv_NBSFilter, _priv_NBSLENS_URLParamsFilter;

@interface _priv_NBSConfig : NSObject
{
    int data_sent_interval;
    int maxCountOfActionToSent;
    int maxAgeOfData;
    _Bool isLogError;
    int maxCountOffError;
    int maxOfErrorBody;
    int maxOfStack;
    _Bool needStackTrace;
    _Bool isNeedDNSTime;
    NSString *dataToken;
    NSString *nbsID;
    int intervalOnIdle;
    _Bool sdk_enabled;
    int actionURLMatchMode;
    _priv_NBSFilter *ActionFilter;
    _priv_NBSFilter *ErrorFilter;
    _priv_NBSLENS_URLParamsFilter *urlParamsCapturer;
    int uiTraceThreshold;
    int uiTraceSize;
    int uiTraceRetries;
    int uiTraces;
    int disableTime;
    long long sleepBefore;
    unsigned int features;
    int CRASH_TRAIL_NODES_MAX_COUNT;
    long long betaOn;
    long long stutterValue;
    NSDictionary *cdn_config;
    int afterLoadingThreshold;
    NSString *_appVersion;
    NSString *_iosSysVersion;
    NSString *_nbs_SDKVersion;
    NSString *_tingyunID;
    NSString *tingyun_id_secret;
    long long betaFeatures;
    long long anrThreshold;
    long long anrActionsCount;
    NSString *cdnHeaderName;
    NSDictionary *hijackWhitelist;
    long long slowPageThreshold;
    long long slowFirstPaintThreshold;
    long long slowFirstScreenThreshold;
    long long slowDomInteractiveThreshold;
    long long hotStartThreshold;
    long long slowStartThreshold;
    NSDate *redirectDate;
    long long accessKey_expireTime;
    long long slowUserActionThreshold;
    long long userActions;
    long long actionFailureThreshold;
    unsigned long long _so_disabled;
    NSString *_nbs_secret_key;
    NSString *_nbs_access_key;
}

+ (id)sharedConfig;
@property(retain) NSString *nbs_access_key; // @synthesize nbs_access_key=_nbs_access_key;
@property(retain) NSString *nbs_secret_key; // @synthesize nbs_secret_key=_nbs_secret_key;
@property unsigned long long so_disabled; // @synthesize so_disabled=_so_disabled;
@property(readonly) long long actionFailureThreshold; // @synthesize actionFailureThreshold;
@property(readonly) long long userActions; // @synthesize userActions;
@property(readonly) long long slowUserActionThreshold; // @synthesize slowUserActionThreshold;
@property long long accessKey_expireTime; // @synthesize accessKey_expireTime;
@property(retain) NSDate *redirectDate; // @synthesize redirectDate;
@property(readonly) long long slowStartThreshold; // @synthesize slowStartThreshold;
@property(readonly) long long hotStartThreshold; // @synthesize hotStartThreshold;
@property(readonly) long long slowDomInteractiveThreshold; // @synthesize slowDomInteractiveThreshold;
@property(readonly) long long slowFirstScreenThreshold; // @synthesize slowFirstScreenThreshold;
@property(readonly) long long slowFirstPaintThreshold; // @synthesize slowFirstPaintThreshold;
@property(readonly) long long slowPageThreshold; // @synthesize slowPageThreshold;
@property(readonly) NSDictionary *hijackWhitelist; // @synthesize hijackWhitelist;
@property(retain) NSDictionary *cdn_config; // @synthesize cdn_config;
@property(readonly) NSString *cdnHeaderName; // @synthesize cdnHeaderName;
@property(readonly) long long anrActionsCount; // @synthesize anrActionsCount;
@property(readonly) long long anrThreshold; // @synthesize anrThreshold;
@property(readonly) long long betaFeatures; // @synthesize betaFeatures;
@property long long stutterValue; // @synthesize stutterValue;
@property(readonly) NSString *tingyun_id_secret; // @synthesize tingyun_id_secret;
@property long long betaOn; // @synthesize betaOn;
@property int CRASH_TRAIL_NODES_MAX_COUNT; // @synthesize CRASH_TRAIL_NODES_MAX_COUNT;
@property unsigned int features; // @synthesize features;
@property int afterLoadingThreshold; // @synthesize afterLoadingThreshold;
@property(readonly) _priv_NBSLENS_URLParamsFilter *urlParamsCapturer; // @synthesize urlParamsCapturer;
@property long long sleepBefore; // @synthesize sleepBefore;
@property int disableTime; // @synthesize disableTime;
@property int uiTraceThreshold; // @synthesize uiTraceThreshold;
@property int uiTraceSize; // @synthesize uiTraceSize;
@property int uiTraces; // @synthesize uiTraces;
@property int uiTraceRetries; // @synthesize uiTraceRetries;
@property(readonly) int actionURLMatchMode; // @synthesize actionURLMatchMode;
@property(readonly) _priv_NBSFilter *ErrorFilter; // @synthesize ErrorFilter;
@property(readonly) _priv_NBSFilter *ActionFilter; // @synthesize ActionFilter;
@property _Bool sdk_enabled; // @synthesize sdk_enabled;
@property _Bool needStackTrace; // @synthesize needStackTrace;
@property int intervalOnIdle; // @synthesize intervalOnIdle;
@property(readonly) NSString *nbsID; // @synthesize nbsID;
@property(readonly) NSString *dataToken; // @synthesize dataToken;
@property int data_sent_interval; // @synthesize data_sent_interval;
@property _Bool isNeedDNSTime; // @synthesize isNeedDNSTime;
@property _Bool isLogError; // @synthesize isLogError;
@property int maxOfStack; // @synthesize maxOfStack;
@property int maxOfErrorBody; // @synthesize maxOfErrorBody;
@property int maxCountOffError; // @synthesize maxCountOffError;
@property int maxCountOfActionToSent; // @synthesize maxCountOfActionToSent;
@property int maxAgeOfData; // @synthesize maxAgeOfData;
- (void).cxx_destruct;
- (void)disableAll;
- (void)loadFromDictionary:(id)arg1;
- (id)init;
- (void)clearDataToken;
- (void)clearUDIDFromLastConfig;
@property(copy) NSString *tingyunID; // @synthesize tingyunID=_tingyunID;
@property(copy) NSString *nbs_SDKVersion; // @synthesize nbs_SDKVersion=_nbs_SDKVersion;
@property(copy) NSString *iosSysVersion; // @synthesize iosSysVersion=_iosSysVersion;
@property(copy) NSString *appVersion; // @synthesize appVersion=_appVersion;
- (void)saveConfig:(id)arg1;
- (void)saveCondig2:(id)arg1;
- (void)saveConfig1:(id)arg1;
- (void)removeConfig2;
- (void)loadConfig2;
- (void)loadConfig1;

@end
