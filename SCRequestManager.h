//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNetworkManagerDelegate-Protocol.h"
#import "SCRequestManager-Protocol.h"
#import "SCRequestManagerHelper-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSArray, NSString, SCNetworkManager;
@protocol SCNetworkInterceptor, SCRequestManagerDelegate;

@interface SCRequestManager : NSObject <SCRequestManagerHelper, SCTraceEnabled, SCNetworkManagerDelegate, SCRequestManager>
{
    SCNetworkManager *_networkManager;
    id <SCRequestManagerDelegate> _delegate;
}

+ (id)pageContextForFriendStories:(id)arg1;
+ (id)pageContextForStory:(id)arg1;
+ (id)requestContextForCloudFSSnapWithId:(id)arg1;
+ (id)requestContextForDsnapViewingSessionWithId:(id)arg1;
+ (id)requestContextForEditionViewingSessionWithId:(id)arg1;
+ (id)requestContextForFriendStoriesInChatViewWithUsername:(id)arg1;
+ (id)requestContextForFriendStoriesWithUsername:(id)arg1;
+ (id)requestContextForSearchStoryWithId:(id)arg1;
+ (id)requestContextForStorySnapViewingSessionWithClientId:(id)arg1;
+ (id)requestContextsForStory:(id)arg1 inFriendStories:(id)arg2 includePage:(_Bool)arg3;
+ (id)requestContextsForWatchingFriendStories:(id)arg1;
+ (id)shared;
- (void).cxx_destruct;
- (id)_requestToEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 additionalHttpHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 requestParser:(id)arg7 requestType:(long long)arg8 priority:(long long)arg9 method:(long long)arg10 authenticated:(_Bool)arg11 useGzipRequestCompression:(_Bool)arg12;
- (id)_submitRequestToEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 additionalHttpHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 requestParser:(id)arg7 requestType:(long long)arg8 priority:(long long)arg9 method:(long long)arg10 authenticated:(_Bool)arg11 authenticator:(id)arg12 useGzipRequestCompression:(_Bool)arg13 maxNumRequestAttempts:(id)arg14 successQueue:(id)arg15 failureQueue:(id)arg16 successBlock:(CDUnknownBlockType)arg17 failureBlock:(CDUnknownBlockType)arg18;
- (void)addContext:(id)arg1;
- (void)addContext:(id)arg1 toRequestWithKey:(id)arg2;
- (void)boostRequestWithKey:(id)arg1 toHigherConnectivity:(long long)arg2;
- (void)boostRequestWithKey:(id)arg1 toHigherPriority:(long long)arg2;
- (void)cancelQueuedRequestWithKey:(id)arg1;
- (void)cancelRequestWithKey:(id)arg1;
- (void)cancelRequestWithKey:(id)arg1 queue:(id)arg2 byProducingResumeData:(CDUnknownBlockType)arg3;
- (void)cancelRequestsWithContext:(id)arg1;
- (void)consumeContentWithKey:(id)arg1;
- (void)contextsDidChangeForNetworkManager:(id)arg1;
- (void)contextsWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)criticalModeEnabled;
@property(nonatomic) __weak id <SCRequestManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)disableCriticalMode;
- (unsigned long long)downloadRequestConcurrency;
- (void)downloadStateForRequestWithKey:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enableCriticalMode;
- (id)getNetworkManager;
- (id)init;
- (unsigned long long)metadataRequestConcurrency;
@property(copy, nonatomic) NSArray<SCNetworkInterceptor> *networkInterceptors;
- (unsigned long long)numOfLargeDLTasks;
- (unsigned long long)numOfUploadTasks;
- (void)pauseAllRequestsWithReason:(id)arg1;
- (void)pauseBackgroundDownloads;
- (void)removeContext:(id)arg1;
- (void)removeContext:(id)arg1 disableContextOnlyModeIfRemoved:(_Bool)arg2;
- (void)removeContexts:(id)arg1;
- (void)reset;
- (void)resumeAllRequestsWithReason:(id)arg1;
- (void)resumeBackgroundDownloads;
- (void)setContexts:(id)arg1;
- (void)setContexts:(id)arg1 withRequestManagerMode:(long long)arg2;
- (void)setDataSaverProvider:(CDUnknownBlockType)arg1;
- (void)setIsUserBlocking:(_Bool)arg1;
- (void)startToMonitorProgressWithRequestKey:(id)arg1 queue:(id)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (void)stopToMonitorProgressWithRequestKey:(id)arg1;
- (id)submitImmediateRequestToEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 additionalHttpHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 requestParser:(id)arg7 requestType:(long long)arg8 method:(long long)arg9 authenticated:(_Bool)arg10 authenticator:(id)arg11 successQueue:(id)arg12 failureQueue:(id)arg13 successBlock:(CDUnknownBlockType)arg14 failureBlock:(CDUnknownBlockType)arg15;
- (id)submitImmediateRequestToEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 key:(id)arg4 contexts:(id)arg5 requestParser:(id)arg6 requestType:(long long)arg7 method:(long long)arg8 authenticated:(_Bool)arg9 authenticator:(id)arg10 maxNumRequestAttempts:(id)arg11 successQueue:(id)arg12 failureQueue:(id)arg13 successBlock:(CDUnknownBlockType)arg14 failureBlock:(CDUnknownBlockType)arg15;
- (id)submitImmediateRequestToEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 key:(id)arg4 contexts:(id)arg5 requestParser:(id)arg6 requestType:(long long)arg7 method:(long long)arg8 authenticated:(_Bool)arg9 authenticator:(id)arg10 successQueue:(id)arg11 failureQueue:(id)arg12 successBlock:(CDUnknownBlockType)arg13 failureBlock:(CDUnknownBlockType)arg14;
- (void)submitRequest:(id)arg1 authenticator:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)submitRequest:(id)arg1 authenticator:(id)arg2 progressiveUpdateQueue:(id)arg3 progressiveUpdateBlock:(CDUnknownBlockType)arg4;
- (void)submitRequest:(id)arg1 authenticator:(id)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)submitRequest:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)submitRequest:(id)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)submitRequestToEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 key:(id)arg4 contexts:(id)arg5 requestParser:(id)arg6 requestType:(long long)arg7 priority:(long long)arg8 method:(long long)arg9 authenticated:(_Bool)arg10 authenticator:(id)arg11 completionQueue:(id)arg12 completionBlock:(CDUnknownBlockType)arg13;
- (id)submitRequestToEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 key:(id)arg4 contexts:(id)arg5 requestParser:(id)arg6 requestType:(long long)arg7 priority:(long long)arg8 method:(long long)arg9 authenticated:(_Bool)arg10 authenticator:(id)arg11 successQueue:(id)arg12 failureQueue:(id)arg13 successBlock:(CDUnknownBlockType)arg14 failureBlock:(CDUnknownBlockType)arg15;
- (id)submitRequestToEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 key:(id)arg4 contexts:(id)arg5 requestParser:(id)arg6 requestType:(long long)arg7 priority:(long long)arg8 method:(long long)arg9 authenticated:(_Bool)arg10 authenticator:(id)arg11 useGzipRequestCompression:(_Bool)arg12 successQueue:(id)arg13 failureQueue:(id)arg14 successBlock:(CDUnknownBlockType)arg15 failureBlock:(CDUnknownBlockType)arg16;
- (unsigned long long)totalRequestConcurrencyReceivingData;
- (void)updateUILayoutOrder:(id)arg1 rootContext:(id)arg2 mediaContextType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
