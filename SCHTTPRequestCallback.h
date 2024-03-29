//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNNetworkTypesHttpRequestCallback-Protocol.h"

@class NSMutableDictionary, NSURL, SCRequestTask;
@protocol SCNNetworkCallbackDelegate;

@interface SCHTTPRequestCallback : NSObject <SCNNetworkTypesHttpRequestCallback>
{
    SCRequestTask *_requestTask;
    long long _accumulatedBytesReceived;
    unsigned long long _decompressedBytesReceived;
    NSMutableDictionary *_loggingParams;
    id <SCNNetworkCallbackDelegate> _networkCallbackDelegate;
    NSURL *_downloadLocation;
}

- (void).cxx_destruct;
- (void)_finishBandwidthUsageUpdateWithResponseInfo:(id)arg1;
- (void)cleanUpDownloadFileWithError:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *downloadLocation; // @synthesize downloadLocation=_downloadLocation;
- (id)initWithRequestTask:(id)arg1 networkCallbackDelegate:(id)arg2;
- (id)initWithRequestTask:(id)arg1 networkCallbackDelegate:(id)arg2 useNativeNetworkManager:(_Bool)arg3;
- (void)onCanceled:(id)arg1 info:(id)arg2;
- (void)onFailed:(id)arg1 info:(id)arg2 error:(id)arg3;
- (void)onFinishWithParsedData:(id)arg1 info:(id)arg2 error:(id)arg3;
- (void)onReadCompleted:(id)arg1 info:(id)arg2;
- (void)onRequestStarted:(id)arg1;
- (void)onResponseStarted:(id)arg1 info:(id)arg2;
- (void)onSucceeded:(id)arg1 info:(id)arg2 buffer:(id)arg3 bytesRead:(long long)arg4;
- (void)onWriteCompleted:(id)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (_Bool)setUpDownloadLocation;

@end

