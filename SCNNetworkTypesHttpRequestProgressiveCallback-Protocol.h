//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, SCNNetworkTypesError, SCNNetworkTypesHttpRequest, SCNNetworkTypesNetworkManagerNotifier, SCNNetworkTypesUrlResponseInfo;

@protocol SCNNetworkTypesHttpRequestProgressiveCallback
- (void)onCanceled:(SCNNetworkTypesHttpRequest *)arg1 info:(SCNNetworkTypesUrlResponseInfo *)arg2;
- (void)onFailed:(SCNNetworkTypesHttpRequest *)arg1 info:(SCNNetworkTypesUrlResponseInfo *)arg2 error:(SCNNetworkTypesError *)arg3;
- (void)onReadCompleted:(SCNNetworkTypesNetworkManagerNotifier *)arg1 httpRequest:(SCNNetworkTypesHttpRequest *)arg2 info:(SCNNetworkTypesUrlResponseInfo *)arg3 buffer:(NSData *)arg4 bytesRead:(long long)arg5;
- (void)onRequestStarted:(SCNNetworkTypesHttpRequest *)arg1;
- (void)onResponseStarted:(SCNNetworkTypesHttpRequest *)arg1 info:(SCNNetworkTypesUrlResponseInfo *)arg2;
- (void)onSucceeded:(SCNNetworkTypesHttpRequest *)arg1 info:(SCNNetworkTypesUrlResponseInfo *)arg2;
- (void)onWriteCompleted:(SCNNetworkTypesHttpRequest *)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
@end
