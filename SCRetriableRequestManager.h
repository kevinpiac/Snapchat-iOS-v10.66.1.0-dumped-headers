//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, SCExperimentManager, SCQueuePerformer, SCWeakTimer;
@protocol SCRetriableRequestManagerDelegate, SCRetriableRequestManagerRetroConfigProtocol;

@interface SCRetriableRequestManager : NSObject
{
    CDUnknownBlockType _shouldRetryBlock;
    CDUnknownBlockType _shouldPersistBlock;
    CDUnknownBlockType _retryBackoffBlock;
    double _maxRetryRuntimeSeconds;
    double _maxRetryRuntimeSecondsBackground;
    double _retryIntervalSeconds;
    double _maxRetryDelaySeconds;
    double _backoffFailureThreshold;
    NSString *_category;
    NSString *_basePersistencePath;
    NSMutableDictionary *_requests;
    id <SCRetriableRequestManagerRetroConfigProtocol> _retroConfig;
    SCQueuePerformer *_performer;
    SCExperimentManager *_experimentManager;
    id <SCRetriableRequestManagerDelegate> _delegate;
    SCWeakTimer *_retryTimer;
}

- (void).cxx_destruct;
- (void)_appDidEnterBackground;
- (void)_appWillEnterForeground;
- (id)_categoryStringFromType:(long long)arg1;
- (void)_createBasePathIfNecessary;
- (void)_dropExpiredRequests;
- (double)_exponentialBackoffWithFailureCount:(unsigned long long)arg1;
- (double)_getDoubleConfig:(id)arg1 customValue:(double)arg2 defaultValue:(double)arg3;
- (long long)_getLongConfig:(id)arg1 customValue:(long long)arg2 defaultValue:(long long)arg3;
- (unsigned long long)_maxAttempts:(id)arg1;
- (_Bool)_networkUnreachable;
- (id)_newRequestFile;
- (id)_pathForRequestFile:(id)arg1;
- (void)_removeRetryRequestFile:(id)arg1 successEventType:(long long)arg2 successParams:(id)arg3 isInBackgroundString:(id)arg4;
- (void)_retryPersistedRequests:(id)arg1;
- (void)_submitRequest:(id)arg1 withAttempt:(unsigned long long)arg2 maxAttempts:(unsigned long long)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_submitRequest:(id)arg1 withAttempt:(unsigned long long)arg2 maxAttempts:(unsigned long long)arg3 successQueue:(id)arg4 failureQueue:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
@property(nonatomic) double backoffFailureThreshold; // @synthesize backoffFailureThreshold=_backoffFailureThreshold;
@property(copy, nonatomic) NSString *basePersistencePath; // @synthesize basePersistencePath=_basePersistencePath;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
- (void)clearPersistedRequests;
@property(nonatomic) __weak id <SCRetriableRequestManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCExperimentManager *experimentManager; // @synthesize experimentManager=_experimentManager;
- (id)initWithCategory:(long long)arg1 experimentManager:(id)arg2 delegate:(id)arg3;
- (void)loadPersistedRequests;
@property(nonatomic) double maxRetryDelaySeconds; // @synthesize maxRetryDelaySeconds=_maxRetryDelaySeconds;
@property(nonatomic) double maxRetryRuntimeSeconds; // @synthesize maxRetryRuntimeSeconds=_maxRetryRuntimeSeconds;
@property(nonatomic) double maxRetryRuntimeSecondsBackground; // @synthesize maxRetryRuntimeSecondsBackground=_maxRetryRuntimeSecondsBackground;
@property(retain, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
- (void)persistRequestForRetry:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *requests; // @synthesize requests=_requests;
- (void)rescheduleRetryTaskWithSeconds:(double)arg1 isInBackground:(_Bool)arg2 maxRetryRunTime:(double)arg3;
@property(retain, nonatomic) id <SCRetriableRequestManagerRetroConfigProtocol> retroConfig; // @synthesize retroConfig=_retroConfig;
@property(copy, nonatomic) CDUnknownBlockType retryBackoffBlock; // @synthesize retryBackoffBlock=_retryBackoffBlock;
@property(nonatomic) double retryIntervalSeconds; // @synthesize retryIntervalSeconds=_retryIntervalSeconds;
@property(retain, nonatomic) SCWeakTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
- (void)scheduleRetryTaskWithSeconds:(double)arg1 isInBackground:(_Bool)arg2 maxRetryRunTime:(double)arg3;
@property(copy, nonatomic) CDUnknownBlockType shouldPersistBlock; // @synthesize shouldPersistBlock=_shouldPersistBlock;
@property(copy, nonatomic) CDUnknownBlockType shouldRetryBlock; // @synthesize shouldRetryBlock=_shouldRetryBlock;
- (void)submitRequest:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)submitRequest:(id)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)updateExperimentManagerIfNil:(id)arg1;

@end

