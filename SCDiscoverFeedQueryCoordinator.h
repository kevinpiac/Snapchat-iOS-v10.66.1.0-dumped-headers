//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverFeedQueryCoordinating-Protocol.h"

@class NSMutableArray, NSString, SCDiscoverFeedDataStore, SCDiscoverFeedDebugInfoDataProvider, SCDiscoverFeedInteractionHistoryModifier, SCDiscoverFeedNetworkResponseProcessor, SCExperimentManager, SCGCDBlockTimer, SCLazy, SCQueuePerformer, SCSearchNavigationCoordinator, SCSearchQuery, SCSessionRequestManager, SCUserSession;
@protocol SCDiscoverFeedEndpointManaging, SCDiscoverFeedQueryCoordinatingDelegate;

@interface SCDiscoverFeedQueryCoordinator : NSObject <SCDiscoverFeedQueryCoordinating>
{
    SCUserSession *_userSession;
    SCLazy *_sectionExtensionServices;
    SCSessionRequestManager *_requestManager;
    SCExperimentManager *_experimentManager;
    SCDiscoverFeedDataStore *_storiesDataStore;
    SCDiscoverFeedInteractionHistoryModifier *_interactionHistoryModifier;
    SCDiscoverFeedDebugInfoDataProvider *_debugInfoDataProvider;
    SCDiscoverFeedNetworkResponseProcessor *_networkResponseProcessor;
    NSMutableArray *_queryRetryTimers;
    SCQueuePerformer *_performer;
    SCLazy *_discoverFeedDataCoordinator;
    SCLazy *_friendStoriesDataCoordinator;
    SCLazy *_docObjectContext;
    id <SCDiscoverFeedEndpointManaging> _discoverFeedEndpointManager;
    SCGCDBlockTimer *_queryTimeoutTimer;
    _Bool _isLoading;
    SCSearchQuery *_currentQuery;
    SCSearchNavigationCoordinator *_navigationCoordinator;
    id <SCDiscoverFeedQueryCoordinatingDelegate> _delegate;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (id)_createSectionFromResponse:(id)arg1 feedType:(int)arg2 query:(id)arg3;
- (void)_fetchRemoteDFStoriesWithQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;
- (void)_fetchRemoteFriendAndDFStoriesIfNeededWithQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;
- (void)_fetchRemoteFriendStoriesWithQuery:(id)arg1;
- (void)_fetchRemoteStoriesWithQuery:(id)arg1 tapHistory:(id)arg2 pageSessionId:(id)arg3 updatingBlock:(CDUnknownBlockType)arg4;
- (void)_fetchRemoteStoriesWithQuery:(id)arg1 tapHistory:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_handleFailureWithQuery:(id)arg1 error:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3 statusCodeToDisplay:(id)arg4;
- (void)_handleStoriesBatchResponse:(id)arg1 query:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_handleStoriesBatchResponseUpdatedWatchedStates:(id)arg1 query:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_handleStoriesResponse:(id)arg1 query:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_handleStoriesResponseUpdatedWatchedStates:(id)arg1 query:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_invalidateQueryTimeoutTimer;
- (void)_logResponse:(id)arg1 query:(id)arg2;
- (void)_persistBatchResponse:(id)arg1 query:(id)arg2;
- (id)_persistSectionMetadataWithStoriesResponse:(id)arg1;
- (void)_persistStoriesToDataStoreWithStoriesResponse:(id)arg1 metaStreamToken:(id)arg2 query:(id)arg3;
- (id)_personalizeLoadQueryResultWithQuery:(id)arg1;
- (void)_prefetchPlaybackInfoBasedOnStoriesResponse:(id)arg1;
- (void)_sendQuery:(id)arg1 snapToken:(id)arg2 tapHistory:(id)arg3 interactionsHistory:(id)arg4 pageSessionId:(id)arg5 updatingBlock:(CDUnknownBlockType)arg6;
- (void)_sendQueryBlock:(id)arg1 snapToken:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3 retryTimer:(id)arg4 tapHistory:(id)arg5 interactionsHistory:(id)arg6 pageSessionId:(id)arg7;
- (void)_startQueryTimeoutTimerWithQuery:(id)arg1 resultState:(long long)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_syncShowWatchedStateAndHandleStoriesBatchResponse:(id)arg1 query:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_syncShowWatchedStateAndHandleStoriesResponse:(id)arg1 query:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_synchronizedCachedContentFetchForQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;
- (void)_timeoutTimerAssertWithQuery:(id)arg1 resultState:(long long)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_updateContentSectionsWithSectionMetadatas:(id)arg1 query:(id)arg2 resultState:(long long)arg3 updatingBlock:(CDUnknownBlockType)arg4;
- (void)_updateDebugWithBatchResponse:(id)arg1;
- (void)_updateForResponseFromQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2 response:(id)arg3 data:(id)arg4 error:(id)arg5 startTime:(double)arg6 retryTimer:(id)arg7;
- (void)_updatePlaybackSequenceIntoDataStore:(id)arg1;
- (_Bool)canPerformQuery:(id)arg1;
@property(copy, nonatomic) SCSearchQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(nonatomic) __weak id <SCDiscoverFeedQueryCoordinatingDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithUserSession:(id)arg1 sectionExtensionServices:(id)arg2 discoverFeedDataCoordinator:(id)arg3 friendStoriesDataCoordinator:(id)arg4 docObjectContext:(id)arg5 discoverFeedEndpointManager:(id)arg6;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak SCSearchNavigationCoordinator *navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
- (void)resultsForQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

