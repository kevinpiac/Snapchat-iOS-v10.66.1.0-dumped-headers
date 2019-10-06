//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCConnectionClassManagerV2Listener-Protocol.h"
#import "SCNNetworkCallbackDelegate-Protocol.h"
#import "SCNNetworkNetworkManager-Protocol.h"

@class NSArray, NSMutableDictionary, NSSet, NSString, SCDisplayContext, SCDownloadConsumptionRecorder, SCLazy, SCNetworkBandwidthChangeNotifier, SCNetworkConnectivityAnnouncer, SCNetworkConnectivityChangeNotifier, SCNetworkUiPageChangeNotifier, SCRequestManagerLogger, SCRequestManagerRunningTaskState, SCRequestPriorityConcurrencyController, SCRequestTaskPool;
@protocol SCNetworkInterceptor, SCPerforming, SCRequestSchedulerDelegate, SCRequestTaskRunDelegate;

@interface SCRequestScheduler : NSObject <SCConnectionClassManagerV2Listener, SCNNetworkNetworkManager, SCNNetworkCallbackDelegate>
{
    SCDisplayContext *_displayContext;
    NSString *_URLSessionHighPriorityContext;
    _Bool _isInHighPriorityContext;
    struct SCNetworkTraceFileStruct *_traceFile;
    id <SCRequestTaskRunDelegate> _taskRunDelegate;
    SCRequestPriorityConcurrencyController *_metadataConcurrencyController;
    SCRequestPriorityConcurrencyController *_largeDownloadConcurrencyController;
    _Bool _isAllDownloadsPaused;
    SCNetworkUiPageChangeNotifier *_uiPageChangeNotifier;
    SCNetworkConnectivityChangeNotifier *_connectivityChangeNotifier;
    SCNetworkBandwidthChangeNotifier *_bandwidthChangeNotifier;
    NSMutableDictionary *_nativeRequestKeyToSCRequestKey;
    _Bool _isCriticalMode;
    _Bool _isBackgroundDownloadPaused;
    _Bool _isAllDownloadPaused;
    _Bool _isContextOnlyModeForCurrentContextSession;
    NSArray<SCNetworkInterceptor> *_networkInterceptors;
    id <SCRequestSchedulerDelegate> _delegate;
    SCRequestTaskPool *_allTasks;
    NSSet *_allTaskPools;
    SCRequestManagerRunningTaskState *_runningTaskState;
    NSMutableDictionary *_runningTasks;
    SCRequestTaskPool *_wwanTasks;
    SCNetworkConnectivityAnnouncer *_connectivityAnnouncer;
    SCRequestManagerLogger *_networkManagerLogger;
    SCDownloadConsumptionRecorder *_downloadConsumptionRecorder;
    id <SCPerforming> _queuePerformer;
    CDUnknownBlockType _dataSaverProviderBlock;
    SCLazy *_lazyNetworkApiRouter;
}

+ (long long)_numberOfTasksInArray:(id)arg1 thatMatch:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)_addContext:(id)arg1 toRequestTask:(id)arg2;
- (void)_addContext:(id)arg1 toRequestWithKey:(id)arg2;
- (void)_addTask:(id)arg1;
- (void)_calculateSessionPriorityForTask:(id)arg1;
- (void)_cancelNativeHttpRequestWithRequestTask:(id)arg1;
- (void)_cancelRequestWithKey:(id)arg1 queue:(id)arg2 byProducingResumeData:(CDUnknownBlockType)arg3;
- (void)_cancelRequestWithkey:(id)arg1;
- (void)_cancelRequestsWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_checkConcurrencyControlAndRunTasks:(id)arg1;
- (id)_concurrencyControllerForTask:(id)arg1;
- (void)_didRunTaskWithKey:(id)arg1 data:(id)arg2;
- (void)_enqueueTask:(id)arg1 reason:(long long)arg2;
- (void)_enqueueTask:(id)arg1 reason:(long long)arg2 andRun:(_Bool)arg3;
- (void)_handleRankerCallbackWithFinishedRequestTask:(id)arg1 error:(id)arg2;
- (void)_handleUserInitiatedRequestTask:(id)arg1;
- (_Bool)_hasIntersetContext:(id)arg1;
- (_Bool)_isAnyCriticalTaskRunning;
- (_Bool)_isCriticalTask:(id)arg1;
- (_Bool)_isInContextIdleState;
- (_Bool)_isMetaDataConcurrencyControlRequestType:(long long)arg1;
- (id)_loggerParameter;
- (unsigned long long)_maxBatchSmallRequests;
- (unsigned long long)_maxLargeOutOfContextRequests;
- (unsigned long long)_maxLargeRequests;
- (unsigned long long)_maxLargeRequestsFromSingleContext;
- (unsigned long long)_maxSmallOutOfContextRequests;
- (unsigned long long)_maxSmallRequests;
- (long long)_numberOfQueuedTasksThatMatch:(CDUnknownBlockType)arg1;
- (long long)_numberOfRunningDownloadTasks;
- (unsigned long long)_numberOfRunningLargeCriticalDownloadTasks;
- (unsigned long long)_numberOfRunningLargeOutOfContextDownloadTasks;
- (unsigned long long)_numberOfRunningSmallOutOfContextDownloadTasks;
- (long long)_numberOfRunningTasksThatMatch:(CDUnknownBlockType)arg1;
- (void)_pauseAllRequestsWithReason:(id)arg1;
- (void)_pauseTasks:(id)arg1 forReason:(id)arg2;
- (void)_removeRunningTaskWithKey:(id)arg1;
- (id)_removeTaskForKey:(id)arg1;
- (void)_resetTasks;
- (void)_runTask:(id)arg1 shouldHandleNativeCallback:(_Bool)arg2;
- (void)_setContexts:(id)arg1 withQueuePerformer:(_Bool)arg2;
- (void)_setContexts:(id)arg1 withQueuePerformer:(_Bool)arg2 withRequestManagerMode:(long long)arg3;
- (void)_setCurrentContextsForRunningTasks;
- (void)_setupConcurrencyController;
- (void)_setupNetworkTracing;
- (_Bool)_shouldCreateConsumptionRecordWithTask:(id)arg1 data:(id)arg2;
- (_Bool)_shouldEnterContextOnlyMode:(long long)arg1 withContexts:(id)arg2;
- (_Bool)_shouldLeaveContextOnlyMode:(long long)arg1 withContexts:(id)arg2;
- (_Bool)_shouldRunAnalyticsV2Task:(id)arg1;
- (_Bool)_shouldRunDownloadTask:(id)arg1;
- (_Bool)_shouldRunLargeDownloadTask:(id)arg1;
- (_Bool)_shouldRunMetadataTask:(id)arg1;
- (_Bool)_shouldRunStreamingTask:(id)arg1;
- (_Bool)_shouldRunTask:(id)arg1;
- (_Bool)_shouldRunUploadOrAnalyticTask:(id)arg1;
- (void)_submitRankedRequestsOnPerformer:(id)arg1;
- (id)_tasksToExecuteWithTasksToRun:(id)arg1;
- (id)_tasksToPauseWithTasksToRun:(id)arg1;
- (void)_updateNativeHttpRequestWithRequestTask:(id)arg1;
- (void)_updateTask:(id)arg1 withContexts:(id)arg2;
- (_Bool)_willExceedSingleContextLargeDownloadConcurrencyWithTask:(id)arg1;
- (void)_willRunTask:(id)arg1;
- (void)addContext:(id)arg1;
- (void)addContext:(id)arg1 toRequestWithKey:(id)arg2;
@property(retain, nonatomic) NSSet *allTaskPools; // @synthesize allTaskPools=_allTaskPools;
@property(retain, nonatomic) SCRequestTaskPool *allTasks; // @synthesize allTasks=_allTasks;
- (void)allowRequestRunOnWwanWithKey:(id)arg1;
- (void)cancel:(id)arg1;
- (void)cancelQueuedRequestWithKey:(id)arg1;
- (void)cancelRequestWithKey:(id)arg1;
- (void)cancelRequestWithKey:(id)arg1 queue:(id)arg2 byProducingResumeData:(CDUnknownBlockType)arg3;
- (void)cancelRequestsWithContext:(id)arg1;
@property(retain, nonatomic) SCNetworkConnectivityAnnouncer *connectivityAnnouncer; // @synthesize connectivityAnnouncer=_connectivityAnnouncer;
- (void)contextsWithBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType dataSaverProviderBlock; // @synthesize dataSaverProviderBlock=_dataSaverProviderBlock;
@property(nonatomic) __weak id <SCRequestSchedulerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didRunTask:(id)arg1 withData:(id)arg2 withResponse:(id)arg3;
- (void)disableCriticalMode;
- (void)downloadConnectionClassDidChange:(id)arg1;
@property(retain, nonatomic) SCDownloadConsumptionRecorder *downloadConsumptionRecorder; // @synthesize downloadConsumptionRecorder=_downloadConsumptionRecorder;
- (unsigned long long)downloadRequestConcurrency;
- (void)downloadStateForRequestWithKey:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enableCriticalMode;
- (void)handleUserInitiatedRequestWithKey:(id)arg1;
- (id)initWithQueuePerformer:(id)arg1 taskRunDelegate:(id)arg2 networkManagerLogger:(id)arg3;
@property(nonatomic) _Bool isAllDownloadPaused; // @synthesize isAllDownloadPaused=_isAllDownloadPaused;
@property(nonatomic) _Bool isBackgroundDownloadPaused; // @synthesize isBackgroundDownloadPaused=_isBackgroundDownloadPaused;
@property(nonatomic) _Bool isContextOnlyModeForCurrentContextSession; // @synthesize isContextOnlyModeForCurrentContextSession=_isContextOnlyModeForCurrentContextSession;
@property(nonatomic) _Bool isCriticalMode; // @synthesize isCriticalMode=_isCriticalMode;
@property(retain, nonatomic) SCLazy *lazyNetworkApiRouter; // @synthesize lazyNetworkApiRouter=_lazyNetworkApiRouter;
- (unsigned long long)metadataRequestConcurrency;
@property(copy) NSArray<SCNetworkInterceptor> *networkInterceptors; // @synthesize networkInterceptors=_networkInterceptors;
@property(copy, nonatomic) SCRequestManagerLogger *networkManagerLogger; // @synthesize networkManagerLogger=_networkManagerLogger;
- (void)networkReachabilityStatusDidChangeWithNotification:(id)arg1;
- (unsigned long long)numOfLargeDLTasks;
- (unsigned long long)numOfUploadTasks;
- (id)pathToNetLog;
- (void)pauseAllRequestsWithReason:(id)arg1;
- (void)pauseBackgroundDownloads;
@property(retain, nonatomic) id <SCPerforming> queuePerformer; // @synthesize queuePerformer=_queuePerformer;
- (void)removeContext:(id)arg1;
- (void)removeContext:(id)arg1 disableContextOnlyModeIfRemoved:(_Bool)arg2;
- (void)removeContexts:(id)arg1;
- (void)reset;
- (void)resumeAllRequestsWithReason:(id)arg1;
- (void)resumeBackgroundDownloads;
@property(retain, nonatomic) SCRequestManagerRunningTaskState *runningTaskState; // @synthesize runningTaskState=_runningTaskState;
@property(retain, nonatomic) NSMutableDictionary *runningTasks; // @synthesize runningTasks=_runningTasks;
- (void)setContexts:(id)arg1;
- (void)setContexts:(id)arg1 withRequestManagerMode:(long long)arg2;
- (void)setDataSaverProvider:(CDUnknownBlockType)arg1;
- (void)setIsUserBlocking:(_Bool)arg1;
@property(retain, nonatomic) SCRequestTaskPool *wwanTasks; // @synthesize wwanTasks=_wwanTasks;
- (_Bool)startNetLog;
- (void)startToMonitorProgressWithRequestKey:(id)arg1 queue:(id)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (void)stopNetLog;
- (void)stopToMonitorProgressWithRequestKey:(id)arg1;
- (void)submit:(id)arg1;
- (void)submitRequest:(id)arg1 authenticator:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)submitRequest:(id)arg1 authenticator:(id)arg2 progressiveUpdateQueue:(id)arg3 progressiveUpdateBlock:(CDUnknownBlockType)arg4;
- (void)submitRequest:(id)arg1 authenticator:(id)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (unsigned long long)totalRequestConcurrencyReceivingData;
- (void)updateUILayoutOrder:(id)arg1 rootContext:(id)arg2 mediaContextType:(long long)arg3;
- (void)uploadConnectionClassDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

