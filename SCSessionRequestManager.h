//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCRequestAuthenticator-Protocol.h"
#import "SCRequestManager-Protocol.h"

@class NSString;

@interface SCSessionRequestManager : NSObject <SCRequestAuthenticator, SCRequestManager>
{
    NSString *_authToken;
    NSString *_username;
}

+ (id)_deviceListInfo:(id)arg1;
+ (id)staticAuthenticatedRequestManager;
- (void).cxx_destruct;
- (id)_requestToEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 additionalHttpHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 requestParser:(id)arg7 requestType:(long long)arg8 priority:(long long)arg9 method:(long long)arg10 authenticated:(_Bool)arg11;
- (void)_submitEventListToEndpoint:(id)arg1;
- (void)_updateDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addContext:(id)arg1;
- (void)addContext:(id)arg1 toRequestWithKey:(id)arg2;
@property(readonly, copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
- (void)boostRequestWithKey:(id)arg1 toHigherConnectivity:(long long)arg2;
- (void)boostRequestWithKey:(id)arg1 toHigherPriority:(long long)arg2;
- (void)cancelRequestWithKey:(id)arg1;
- (void)cancelRequestWithKey:(id)arg1 queue:(id)arg2 byProducingResumeData:(CDUnknownBlockType)arg3;
- (void)cancelRequestsWithContext:(id)arg1;
- (void)consumeContentWithKey:(id)arg1;
- (void)disableCriticalMode;
- (void)downloadGPSAlmanacWithCompletion:(CDUnknownBlockType)arg1;
- (void)enableCriticalMode;
- (void)forgetDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAuthToken:(id)arg1 username:(id)arg2;
- (void)pauseBackgroundDownloads;
- (void)recordSpectaclesUsage:(id)arg1 lastContentTakenTimestamp:(long long)arg2;
- (void)removeContext:(id)arg1;
- (void)reportLagunaRealTimeEvent:(id)arg1;
- (void)reportLagunaRealTimeEventQueue:(id)arg1;
- (void)requestAllDeviceList:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)resumeBackgroundDownloads;
- (void)setContexts:(id)arg1;
- (void)setContexts:(id)arg1 withRequestManagerMode:(long long)arg2;
- (void)startToMonitorProgressWithKey:(id)arg1 queue:(id)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (void)stopToMonitorProgressWithKey:(id)arg1;
- (void)submitCognacProtoRequest:(id)arg1 responseClass:(Class)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)submitIdleAnalytics:(id)arg1 device:(id)arg2 filename:(id)arg3;
- (void)submitImmediateRequestToEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 key:(id)arg4 contexts:(id)arg5 requestParser:(id)arg6 requestType:(long long)arg7 method:(long long)arg8 authenticated:(_Bool)arg9 successQueue:(id)arg10 failureQueue:(id)arg11 successBlock:(CDUnknownBlockType)arg12 failureBlock:(CDUnknownBlockType)arg13;
- (void)submitProtoRequest:(id)arg1 responseClass:(Class)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)submitRequest:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)submitRequest:(id)arg1 progressiveUpdateQueue:(id)arg2 progressiveUpdateBlock:(CDUnknownBlockType)arg3;
- (void)submitRequest:(id)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)submitRequestToEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 additionalHttpHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 requestParser:(id)arg7 requestType:(long long)arg8 priority:(long long)arg9 method:(long long)arg10 authenticated:(_Bool)arg11 completionQueue:(id)arg12 completionBlock:(CDUnknownBlockType)arg13;
- (void)submitRequestToEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 key:(id)arg4 contexts:(id)arg5 requestParser:(id)arg6 requestType:(long long)arg7 priority:(long long)arg8 method:(long long)arg9 authenticated:(_Bool)arg10 completionQueue:(id)arg11 completionBlock:(CDUnknownBlockType)arg12;
- (void)submitRequestToEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 key:(id)arg4 contexts:(id)arg5 requestParser:(id)arg6 requestType:(long long)arg7 priority:(long long)arg8 method:(long long)arg9 authenticated:(_Bool)arg10 successQueue:(id)arg11 failureQueue:(id)arg12 successBlock:(CDUnknownBlockType)arg13 failureBlock:(CDUnknownBlockType)arg14;
- (void)updateDeviceDisplayName:(id)arg1 device:(id)arg2 timestamp:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateDeviceInfo:(id)arg1 timestamp:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateFirmwareVersion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateUILayoutOrder:(id)arg1 rootContext:(id)arg2 mediaContextType:(long long)arg3;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

