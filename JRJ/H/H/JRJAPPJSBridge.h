//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JRJAPPJSExport-Protocol.h"

@class JRJBaseViewController;
@protocol JRJAPPJSBridgeProtocol;

@interface JRJAPPJSBridge : NSObject <JRJAPPJSExport>
{
    JRJBaseViewController<JRJAPPJSBridgeProtocol> *_delegate;
}

+ (void)clearJSInfo:(id)arg1;
+ (void)registJSCallback:(id)arg1 delegate:(id)arg2;
@property(nonatomic) __weak JRJBaseViewController<JRJAPPJSBridgeProtocol> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)enterZpointPage;
- (void)payHandle:(id)arg1;
- (_Bool)haveMobile;
- (void)enterEditMobile:(id)arg1 fuctionId:(int)arg2;
- (void)dealloc;

@end
