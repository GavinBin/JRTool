//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSMutableURLRequest.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface NBSFormDataRequest : NSMutableURLRequest
{
    NSString *BOUNDRY;
    NSString *subBOUNDRY;
    NSMutableArray *fileNames;
    NSMutableArray *filePaths;
    NSMutableDictionary *keyValues;
    NSMutableArray *dataNames;
    NSMutableArray *datas;
}

- (void).cxx_destruct;
- (void)complete;
- (void)clear;
- (void)addFileData:(id)arg1 forField:(id)arg2;
- (void)addFilePath:(id)arg1 forField:(id)arg2;
- (void)addData:(id)arg1 forField:(id)arg2;
- (id)initWithURL:(id)arg1;

@end
