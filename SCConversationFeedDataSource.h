//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCFeedDataSource-Protocol.h"
#import "SCMapStatusFetcherListener-Protocol.h"
#import "SCMapStatusViewedStateListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSArray, NSDictionary, NSString, SCCheetahFeedDebugManager, SCFeedItemStateUpdater, SCFriendsFeedHapticsFeedbackRuleEvaluator, SCFriendsFeedSnapReplayAnimationStateManager, SCFriendsFeedSubstituteAnimationStateManager, SCFriendsFeedViewModelCoordinator, SCScopedAccess, SCStoriesReplayManager, SCUserSession;
@protocol NSCopying, SCFeedDataSourceDelegate, SCPerforming;

@interface SCConversationFeedDataSource : NSObject <SCDataCoordinatorListener, SCMapStatusFetcherListener, SCMapStatusViewedStateListener, SCFeedDataSource, SCTraceEnabled, SCEventListener>
{
    id <SCPerforming> _performer;
    SCUserSession *_userSession;
    NSArray *_viewModels;
    long long _currentSourceType;
    NSDictionary *_internalViewModelMap;
    NSDictionary *_viewModelIndexes;
    SCFeedItemStateUpdater *_feedItemStateUpdater;
    SCScopedAccess *_scopedLazyFriendsFeedDataCoordinator;
    SCScopedAccess *_scopedLazyFriendsFeedReadyLogger;
    SCScopedAccess *_scopedLazyGhostToFeedLogger;
    SCScopedAccess *_scopedLazyFriendsFeedFirstRenderLatencyLogger;
    SCStoriesReplayManager *_storiesReplayMananger;
    SCFriendsFeedSubstituteAnimationStateManager *_substitueAnimationStateHandler;
    NSString *_lastPlayedSnapIdentifier;
    SCFriendsFeedSnapReplayAnimationStateManager *_snapReplayAnimationStateManager;
    SCFriendsFeedHapticsFeedbackRuleEvaluator *_hapticsFeedbackRuleEvaluator;
    _Bool _hasUpdatedViewModels;
    NSObject<NSCopying> *_pendingDataRequest;
    SCFriendsFeedViewModelCoordinator *_viewModelCoordinator;
    NSArray *_currentFriendsFeedItems;
    long long _unreadConversationCount;
    id <SCFeedDataSourceDelegate> _delegate;
    SCCheetahFeedDebugManager *_debugManager;
}

- (void).cxx_destruct;
- (void)_fetchFriendsFeedItemsAndUpdateWithDataRequest:(id)arg1 viewHasAppeared:(_Bool)arg2;
- (void)_idsForEventGroupsDidChange:(id)arg1;
- (void)_logSyncLatencyIfNecessaryForDataRequest:(id)arg1;
- (void)_performUpdateFriendsFeedViewModelsWithDataRequest:(id)arg1;
- (id)_recentViewModelMap;
- (void)_resumeFetchFriendsFeedItemsIfNeeded;
- (void)_setRecentViewModelMap:(id)arg1;
- (void)_triggerHapticsIfNeededAndUpdateWithFeedItems:(id)arg1 dataRequest:(id)arg2 renderContent:(id)arg3 viewHasAppeared:(_Bool)arg4;
- (void)_updateViewModelsAndReload:(id)arg1 dataRequest:(id)arg2 renderContent:(id)arg3 viewHasAppeared:(_Bool)arg4 hasFeedItemsChanged:(_Bool)arg5;
- (void)_warmUpViewModelsWithDataRequest:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)dealloc;
@property(readonly, nonatomic) SCCheetahFeedDebugManager *debugManager; // @synthesize debugManager=_debugManager;
@property(nonatomic) __weak id <SCFeedDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (_Bool)hasUpdatedViewModels;
- (long long)indexForFeedId:(id)arg1;
- (id)initWithUserSession:(id)arg1 friendsFeedDataCoordinator:(id)arg2 friendsFeedReadyLogger:(id)arg3 ghostToFeedLogger:(id)arg4 friendsFeedFirstRenderLatencyLogger:(id)arg5 delegate:(id)arg6 storiesReplayManager:(id)arg7 substituteAnimationStateHandler:(id)arg8 snapReplayAnimationStateManager:(id)arg9 arroyoConversationIdsManager:(id)arg10 tooltipManager:(id)arg11;
- (void)mapStatusFetcherDidLoadStatuses:(id)arg1;
- (void)mapStatusViewedStateProvider:(id)arg1 didUpdateStatusIds:(id)arg2;
- (void)resetFeedConversationsState;
- (void)resetFeedConversationsStateExcludingConversationId:(id)arg1;
- (void)resetPaidToReplayStatesExcludingConversations:(id)arg1;
- (void)resumeViewModelUpdates;
@property(nonatomic) long long unreadConversationCount; // @synthesize unreadConversationCount=_unreadConversationCount;
@property(nonatomic) long long type;
- (void)updateDataSourceType:(long long)arg1;
- (void)updateForViewDidFullyDisappear;
- (id)viewModels;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool searching;
@property(readonly) Class superclass;

@end

