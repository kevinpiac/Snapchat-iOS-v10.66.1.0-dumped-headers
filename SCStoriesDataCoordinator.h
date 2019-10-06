//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCStoriesMetadataCoordinating-Protocol.h"

@class NSString, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCExperimentManager, SCLazy, SCQueuePerformer, SCSessionRequestManager, SCStoriesCustomStoriesMetadataFetcher;
@protocol SCStoriesGrapheneMetricsEmitting;

@interface SCStoriesDataCoordinator : NSObject <SCDataCoordinatorListener, SCStoriesMetadataCoordinating>
{
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCDocObjectContext *_docObjectContext;
    SCLazy *_playbackSequenceProvider;
    SCSessionRequestManager *_sessionRequestManager;
    SCQueuePerformer *_docObjectPerformer;
    SCQueuePerformer *_utilityPerformer;
    SCStoriesCustomStoriesMetadataFetcher *_customStoriesMetadataFetcher;
    SCLazy *_mixerRequester;
    SCLazy *_snapchatterFetcher;
    id <SCStoriesGrapheneMetricsEmitting> _grapheneMetricsEmitter;
    SCExperimentManager *_experimentManager;
    NSString *_currentUserId;
    NSString *_currentUsername;
    SCLazy *_snapReadReceiptsDataCoordinator;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)DEPRECATED_applyStoriesResponse:(id)arg1 fetchTriggerIdentifier:(id)arg2 shouldFullyFetchMobstoriesMetadata:(_Bool)arg3 myStoriesMigrationOn:(_Bool)arg4 fetchUnidirectionalFriendsSeparately:(_Bool)arg5 completionQueue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)DEPRECATED_fetchPublications:(id)arg1 requestSource:(id)arg2;
- (void)_DEPRECATED_applyStoriesResponse:(id)arg1 fetchTriggerIdentifier:(id)arg2 pendingOrFollowingFriendUsernames:(id)arg3 shouldFullyFetchMobstoriesMetadata:(_Bool)arg4 myStoriesMigrationOn:(_Bool)arg5 completionQueue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_announceDataCoordinatorUpdateWithDataRequest:(id)arg1;
- (void)_handleBatchStoryLookupResponse:(id)arg1 fetchedUserIds:(id)arg2;
- (CDUnknownBlockType)_resultHandlerForDataRequest:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)deleteCustomStorySnapsWithPublicationId:(id)arg1 clientIds:(id)arg2;
- (void)deleteExpiredMetadata;
- (void)deleteFriendStorySnapsWithUsername:(id)arg1 clientIds:(id)arg2;
- (void)deleteStorySnapsWithSnapComponentId:(id)arg1;
- (void)fetchFriendStoriesDeltaCursor:(CDUnknownBlockType)arg1;
- (void)fetchFriendStoriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchStoriesWithUserIds:(id)arg1;
- (void)fetchUnwipedLegacyViewStatuses:(CDUnknownBlockType)arg1;
- (void)handleDataRequest:(id)arg1;
- (id)initWithSessionRequestManager:(id)arg1 docObjectContext:(id)arg2 mixerRequester:(id)arg3 playbackSequenceProvider:(id)arg4 snapchatterFetcher:(id)arg5 snapReadReceiptDataCoordinator:(id)arg6 grapheneMetricsEmitter:(id)arg7 experimentManager:(id)arg8 currentUserId:(id)arg9 currentUsername:(id)arg10;
- (void)removeDataUpdateListener:(id)arg1;
- (void)storySnapsInfoForStoryIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)wipeLegacyViewStatuses;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

