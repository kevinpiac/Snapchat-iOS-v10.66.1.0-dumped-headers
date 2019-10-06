//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBitmojiManagerProtocol-Protocol.h"
#import "SCBitmojiMetricsProvider-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, SCBehaviorSubject, SCBitmojiDownloadQueue, SCBitmojiJobCollector, SCBitmojiMetricsCollector, SCBitmojiMetricsReporter, SCBitmojiNetworkPolicy, SCDisposableObserver, SCLazy, SCObservable, SCWeakTimer;
@protocol OS_dispatch_queue, SCBitmojiAvatarProvider, SCBitmojiNetworkStrategy;

@interface SCBitmojiManager : NSObject <SCBitmojiManagerProtocol, SCBitmojiMetricsProvider, SCUserSessionScoped>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    SCLazy *_selfBitmojiCache;
    SCLazy *_friendBitmojiCache;
    SCBehaviorSubject *_metricsAnnouncer;
    SCBitmojiMetricsCollector *_metricsCollector;
    SCBitmojiMetricsReporter *_metricsReporter;
    int _outstandingDownloads;
    SCWeakTimer *_outstandingDownloadBackoff;
    SCBitmojiDownloadQueue *_downloadBacklog;
    SCBitmojiJobCollector *_jobCollector;
    NSMutableSet *_prefetchesDone;
    NSMutableDictionary *_negativeResponseCache;
    id <SCBitmojiAvatarProvider> _avatarProvider;
    id <SCBitmojiNetworkStrategy> _networkStrategy;
    SCBitmojiNetworkPolicy *_networkPolicy;
    _Atomic _Bool _invalidated;
    SCDisposableObserver *_avatarIdObserver;
}

- (void).cxx_destruct;
- (_Bool)_cacheErrorIfPossible:(id)arg1 response:(id)arg2;
- (id)_cacheForBitmoji:(id)arg1;
- (void)_checkCacheAndFetch:(id)arg1;
- (void)_checkCacheOnly:(id)arg1 failure:(CDUnknownBlockType)arg2;
- (void)_checkImageFetchBacklog;
- (void)_clearDownloadBackoffTimer;
- (void)_completePrefetchQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_determineContexts:(id)arg1;
- (id)_determineImageParamsWithPriorAvatarVersion:(id)arg1;
- (id)_determineNetworkStrategy:(id)arg1;
- (double)_determineRandomTTL;
- (_Bool)_downloadSlotAllocate;
- (void)_downloadSlotRelease;
- (void)_fetchBitmojiImage:(id)arg1;
- (id)_generateCacheKey:(id)arg1;
- (id)_generateCacheKey:(id)arg1 imageType:(unsigned long long)arg2;
- (id)_generateCacheKey:(id)arg1 imageType:(unsigned long long)arg2 scale:(unsigned long long)arg3;
- (_Bool)_handleImageFailedForJob:(id)arg1 response:(id)arg2 allowRetry:(_Bool)arg3;
- (void)_handleImageResponse:(id)arg1 image:(id)arg2 job:(id)arg3 requestTrackingId:(id)arg4 isFromCache:(_Bool)arg5;
- (_Bool)_isBitmojiCached:(id)arg1;
- (void)_issueImageFetchForJob:(id)arg1 scheduleNextOnCompletion:(_Bool)arg2;
- (void)_issueMultipleSingleImageFetches:(id)arg1;
- (id)_keyForCachedBitmoji:(id)arg1 cachedImageType:(unsigned long long *)arg2;
- (void)_kickDownloadSlots:(id)arg1;
- (void)_lookupInCaches:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_lookupInCaches:(id)arg1 imageType:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)_resetPendingDownloads;
- (_Bool)_skipRequestDueToCachedError:(id)arg1;
- (void)_startFetch:(id)arg1;
- (void)_willEnterBackground;
- (void)cancelJob:(id)arg1;
- (void)clearMemoryCache;
- (void)dealloc;
- (id)describeEndpointMetrics;
- (id)fetchBitmojiImage:(id)arg1 contexts:(id)arg2 feature:(long long)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)fetchBitmojiImageData:(id)arg1 contexts:(id)arg2 feature:(long long)arg3 transform:(CDUnknownBlockType)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)fetchCurrentOrPrior:(id)arg1 contexts:(id)arg2 feature:(long long)arg3 transform:(CDUnknownBlockType)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)initSelfCache:(id)arg1 friendCache:(id)arg2 avatarProvider:(id)arg3 requestManager:(id)arg4;
- (void)invalidate;
- (_Bool)isBitmojiCached:(id)arg1;
@property(readonly, nonatomic) SCObservable *metricsObservable;
- (id)prefetchBitmojiImage:(id)arg1 contexts:(id)arg2 feature:(long long)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)resetCache;
- (void)resetMetrics;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

