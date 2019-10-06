//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensDataFetcher-Protocol.h"
#import "SCLensLoadingQueueDelegate-Protocol.h"
#import "SCLensUIUpdateListener-Protocol.h"
#import "SCManagedDatastore-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, SCExperimentManager, SCFeatureSettingsManager, SCLensBlobDataFetcher, SCLensCacheClearTracker, SCLensDataFetcherListenerAnnouncer, SCLensDownloadOperationFactory, SCLensDownloadTracker, SCLensFetchingRanker, SCLensFetchingThrottler, SCLensLoadingQueue, SCLensURLDataFetcher, SCRequestManager;
@protocol SCLensUserProvider, SCPerforming;

@interface SCLensDataFetcher : NSObject <SCUserSessionScoped, SCLensLoadingQueueDelegate, SCLensDataFetcher, SCLensUIUpdateListener, SCManagedDatastore>
{
    id <SCPerforming> _performer;
    SCLensDownloadOperationFactory *_operationsFactory;
    SCLensDataFetcherListenerAnnouncer *_announcer;
    SCLensLoadingQueue *_contentQueue;
    SCLensLoadingQueue *_imageQueue;
    SCLensLoadingQueue *_assetsQueue;
    SCLensLoadingQueue *_filterOverlayImageQueue;
    SCLensLoadingQueue *_warmupQueue;
    NSArray *_allQueues;
    SCRequestManager *_requestManager;
    SCLensURLDataFetcher *_urlDataFetcher;
    SCLensBlobDataFetcher *_blobDataFetcher;
    SCFeatureSettingsManager *_featureSettingsManager;
    SCLensDownloadTracker *_downloadTracker;
    SCLensCacheClearTracker *_cacheClearTracker;
    SCExperimentManager *_experimentManager;
    NSString *_currentSelectedLensId;
    NSMutableDictionary *_visibleLenses;
    NSMutableSet *_explicitlySelectedLensIds;
    NSMutableDictionary *_lensIdsToVisibleIndexes;
    id <SCLensUserProvider> _lensUserProvider;
    SCLensFetchingThrottler *_throttler;
    SCLensFetchingRanker *_ranker;
    long long _freeDiskSpaceInMB;
}

+ (id)_unableToCreateOperationError;
- (void).cxx_destruct;
- (void)_didFinishUpdatingVisibleLens;
- (void)_fetchVisibleLensesIfNeeded;
- (void)_logCacheSize;
- (void)_notifyVisibleLensUpdatedEvent;
- (id)_scheduleContentDownloadingForLens:(id)arg1 requestTiming:(long long)arg2;
- (id)_scheduleFilterOverlayDownloadingForLens:(id)arg1 requestTiming:(long long)arg2;
- (id)_scheduleIconDownloadingForLens:(id)arg1 requestTiming:(long long)arg2;
- (void)addListener:(id)arg1;
@property(retain, nonatomic) NSArray *allQueues; // @synthesize allQueues=_allQueues;
@property(retain, nonatomic) SCLensDataFetcherListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
- (void)applicationDidEnterBackground:(id)arg1;
- (CDUnknownBlockType)assetDownloadOperationsSettingsBlock;
@property(retain, nonatomic) SCLensLoadingQueue *assetsQueue; // @synthesize assetsQueue=_assetsQueue;
@property(retain, nonatomic) SCLensBlobDataFetcher *blobDataFetcher; // @synthesize blobDataFetcher=_blobDataFetcher;
@property(retain, nonatomic) SCLensCacheClearTracker *cacheClearTracker; // @synthesize cacheClearTracker=_cacheClearTracker;
- (void)cancelDownloads;
- (id)checkCacheAndScheduleOperationIfNeeded:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)clear;
- (void)clearCacheFromTweaks;
- (void)clearCacheWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)clearInMemoryCache;
@property(retain, nonatomic) SCLensLoadingQueue *contentQueue; // @synthesize contentQueue=_contentQueue;
@property(retain, nonatomic) NSString *currentSelectedLensId; // @synthesize currentSelectedLensId=_currentSelectedLensId;
- (void)didEndDisplayingLens:(id)arg1;
- (void)didHideLenses;
- (void)didSelectLens:(id)arg1;
- (void)didUpdateActiveLensOrder:(id)arg1;
@property(retain, nonatomic) SCLensDownloadTracker *downloadTracker; // @synthesize downloadTracker=_downloadTracker;
@property(retain, nonatomic) SCExperimentManager *experimentManager; // @synthesize experimentManager=_experimentManager;
@property(retain, nonatomic) NSMutableSet *explicitlySelectedLensIds; // @synthesize explicitlySelectedLensIds=_explicitlySelectedLensIds;
- (long long)fallbackPriorityForLens:(id)arg1 requestTiming:(long long)arg2;
@property(retain, nonatomic) SCFeatureSettingsManager *featureSettingsManager; // @synthesize featureSettingsManager=_featureSettingsManager;
- (void)fetchAsset:(id)arg1 lens:(id)arg2 completionPerformer:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchContentForLens:(id)arg1 requestTiming:(long long)arg2;
- (void)fetchLenses:(id)arg1;
- (void)fetchLenses:(id)arg1 requestTiming:(long long)arg2;
@property(retain, nonatomic) SCLensLoadingQueue *filterOverlayImageQueue; // @synthesize filterOverlayImageQueue=_filterOverlayImageQueue;
@property(nonatomic) long long freeDiskSpaceInMB; // @synthesize freeDiskSpaceInMB=_freeDiskSpaceInMB;
- (void)handleEmergencyDiskConditionWithDispatchGroup:(id)arg1;
@property(retain, nonatomic) SCLensLoadingQueue *imageQueue; // @synthesize imageQueue=_imageQueue;
- (id)initWithFeatureSettingsManager:(id)arg1 downloadTracker:(id)arg2 cacheClearTracker:(id)arg3 urlDataFetcher:(id)arg4 blobDataFetcher:(id)arg5 operationsFactory:(id)arg6 performer:(id)arg7 lensUserProvider:(id)arg8 experimentManager:(id)arg9;
- (void)invalidate;
- (id)kindName;
- (CDUnknownBlockType)lensContentDownloadOperationsSettingsBlock;
- (long long)lensContentFetchPolicyForOperation:(id)arg1 requestTiming:(long long)arg2;
- (long long)lensDataFetchPolicy:(id)arg1 requestTiming:(long long)arg2;
- (long long)lensFetchPolicyForOperation:(id)arg1 requestTiming:(long long)arg2;
- (CDUnknownBlockType)lensIconDownloadOperationsSettingsBlock;
@property(retain, nonatomic) NSMutableDictionary *lensIdsToVisibleIndexes; // @synthesize lensIdsToVisibleIndexes=_lensIdsToVisibleIndexes;
- (CDUnknownBlockType)lensOverlayDownloadOperationsSettingsBlock;
@property(readonly, nonatomic) id <SCLensUserProvider> lensUserProvider; // @synthesize lensUserProvider=_lensUserProvider;
@property(retain, nonatomic) SCLensDownloadOperationFactory *operationsFactory; // @synthesize operationsFactory=_operationsFactory;
- (CDUnknownBlockType)orderingComparator;
- (CDUnknownBlockType)orderingComparatorV2;
- (void)pauseDownloads;
@property(readonly, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
- (void)queue:(id)arg1 didFinishOperation:(id)arg2 result:(id)arg3;
- (void)queue:(id)arg1 willStartOperation:(id)arg2;
@property(retain, nonatomic) SCLensFetchingRanker *ranker; // @synthesize ranker=_ranker;
- (void)removeAllUserSessionDataAsync:(id)arg1;
- (void)removeExpiredContentAsync:(id)arg1 reason:(unsigned long long)arg2 dispatchGroup:(id)arg3;
- (void)removeExpiredData:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeListener:(id)arg1;
- (id)reportMetrics;
@property(retain, nonatomic) SCRequestManager *requestManager; // @synthesize requestManager=_requestManager;
- (long long)requestPriorityForLens:(id)arg1 requestTiming:(long long)arg2;
- (void)resumeDownloads;
@property(retain, nonatomic) SCLensFetchingThrottler *throttler; // @synthesize throttler=_throttler;
@property(retain, nonatomic) SCLensURLDataFetcher *urlDataFetcher; // @synthesize urlDataFetcher=_urlDataFetcher;
@property(retain, nonatomic) NSMutableDictionary *visibleLenses; // @synthesize visibleLenses=_visibleLenses;
@property(retain, nonatomic) SCLensLoadingQueue *warmupQueue; // @synthesize warmupQueue=_warmupQueue;
- (CDUnknownBlockType)warmupOperationsSettingsBlock;
- (CDUnknownBlockType)warmupOrderingComparator;
- (void)willDisplayLens:(id)arg1;
- (void)willShowLenses;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

