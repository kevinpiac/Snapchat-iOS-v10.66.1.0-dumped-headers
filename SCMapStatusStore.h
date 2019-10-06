//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapPeopleFriendsListener-Protocol.h"
#import "SCMapStatusFetcher-Protocol.h"
#import "SCMapStatusMutator-Protocol.h"
#import "SCMapStatusViewedStateMutator-Protocol.h"
#import "SCMapStatusViewedStateProvider-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSDate, NSDictionary, NSHashTable, NSMutableSet, NSOrderedSet, NSString, SCDisposableObserver, SCMapExploreItem, SCMapStatusFetcherListenerAnnouncer, SCMapStatusViewedStateListenerAnnouncer, SCMapUserPreferences, SCQueuePerformer;
@protocol SCLocationSharingPreferencesProvider, SCMapPeopleFriendsProvider, SCMapStatusRPCService, SCMapStatusStoriesFetcher, SCXBitmojiAvatarGeneratorProtocol;

@interface SCMapStatusStore : NSObject <SCMapPeopleFriendsListener, SCTraceEnabled, SCMapStatusFetcher, SCMapStatusMutator, SCMapStatusViewedStateProvider, SCMapStatusViewedStateMutator>
{
    NSString *_currentUserId;
    id <SCXBitmojiAvatarGeneratorProtocol> _mapBitmojiAvatarGenerator;
    id <SCMapStatusRPCService> _mapStatusRPCService;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    id <SCMapStatusStoriesFetcher> _mapStatusStoriesFetcher;
    SCMapUserPreferences *_mapUserPreferences;
    id <SCLocationSharingPreferencesProvider> _sharingPreferencesProvider;
    SCQueuePerformer *_performer;
    SCMapStatusFetcherListenerAnnouncer *_statusFetcherListenerAnnouncer;
    SCMapStatusViewedStateListenerAnnouncer *_viewedStateAnnouncer;
    SCDisposableObserver *_preferencesObserver;
    SCMapExploreItem *_mostRecentlyViewedItem;
    NSMutableSet *_pendingViewEvents;
    _Bool _hasScheduledPeriodicUpdateForStatuses;
    _Bool _hasScheduledPeriodicUpdateForMyStatuses;
    _Bool _isAppForegrounded;
    NSHashTable *_listenersRequiringPeriodicUpdates;
    _Bool _loadingExploreItems;
    _Bool _loadingMyStatuses;
    NSOrderedSet *_allExploreItems;
    NSOrderedSet *_allMyStatuses;
    NSDictionary *_exploreItemsByUserId;
    NSDictionary *_exploreItemsByItemId;
    NSDate *_lastSuccessfulExploreItemsLoadDate;
    NSDate *_lastSuccessfulMyStatusesLoadDate;
}

+ (_Bool)_isLoadDate:(id)arg1 olderThan:(double)arg2;
+ (_Bool)_statusGroup:(id)arg1 hasStoryMoreRecentThanTimestamp:(double)arg2;
- (void).cxx_destruct;
- (void)_checkForInitialApplicationState;
- (void)_clearViewedState;
- (void)_deleteMyStatus:(id)arg1;
- (void)_didDeleteMyStatus:(id)arg1 newMyStatuses:(id)arg2;
- (void)_didFetchExploreItems:(id)arg1 error:(id)arg2;
- (void)_didFetchMyStatuses:(id)arg1 error:(id)arg2;
- (id)_exploreItems:(id)arg1 filteredByViewed:(_Bool)arg2;
- (_Bool)_hasListenersRequiringPeriodicUpdates;
- (_Bool)_isViewedStatusId:(id)arg1 timestamp:(double)arg2;
- (void)_loadExploreItems;
- (void)_loadMyStatuses;
- (void)_onApplicationDidBecomeActive:(id)arg1;
- (void)_onApplicationDidEnterBackground:(id)arg1;
- (void)_onApplicationWillEnterForeground:(id)arg1;
- (void)_onLocationSharingPreferencesChanged:(id)arg1;
- (void)_prefetchStickersForStatusGroup:(id)arg1 dispatchGroup:(id)arg2;
- (void)_resetExploreSettingsTooltipState;
- (void)_resetStatusButtonTooltipState;
- (void)_scheduleInitialPeriodicUpdate;
- (void)_schedulePeriodicUpdateForExploreItemsIfNecessaryWithInterval:(double)arg1;
- (void)_schedulePeriodicUpdateForMyStatusesIfNecessaryWithInterval:(double)arg1;
- (void)_setIsAppForegrounded:(_Bool)arg1;
- (id)_sortedExploreItems:(id)arg1;
- (void)_updateExploreItemsWithPeopleProvider:(id)arg1;
- (void)_updateMyStatusesWithPeopleProvider:(id)arg1;
- (void)addStatusFetcherListener:(id)arg1;
@property(retain) NSOrderedSet *allExploreItems; // @synthesize allExploreItems=_allExploreItems;
@property(retain) NSOrderedSet *allMyStatuses; // @synthesize allMyStatuses=_allMyStatuses;
- (id)announcer;
- (void)deleteMyStatus:(id)arg1;
- (id)exploreItems;
@property(retain) NSDictionary *exploreItemsByItemId; // @synthesize exploreItemsByItemId=_exploreItemsByItemId;
@property(retain) NSDictionary *exploreItemsByUserId; // @synthesize exploreItemsByUserId=_exploreItemsByUserId;
- (id)filteredItemsForMapPersonLocationsProvider:(id)arg1;
- (void)flushStatusViewEvents;
- (_Bool)hasLoadedExploreItemsAtLeastOnce;
- (_Bool)hasLoadedMyStatusesAtLeastOnce;
- (id)initWithCurrentUserId:(id)arg1 mapBitmojiAvatarGenerator:(id)arg2 mapPeopleFriendsProvider:(id)arg3 mapStatusRPCService:(id)arg4 mapStatusStoriesFetcher:(id)arg5 mapUserPreferences:(id)arg6 sharingPreferencesProvider:(id)arg7;
@property(getter=isLoadingExploreItems) _Bool loadingExploreItems; // @synthesize loadingExploreItems=_loadingExploreItems;
@property(getter=isLoadingMyStatuses) _Bool loadingMyStatuses; // @synthesize loadingMyStatuses=_loadingMyStatuses;
- (_Bool)isViewedStatusId:(id)arg1;
@property(retain) NSDate *lastSuccessfulExploreItemsLoadDate; // @synthesize lastSuccessfulExploreItemsLoadDate=_lastSuccessfulExploreItemsLoadDate;
@property(retain) NSDate *lastSuccessfulMyStatusesLoadDate; // @synthesize lastSuccessfulMyStatusesLoadDate=_lastSuccessfulMyStatusesLoadDate;
- (void)markViewedStatusId:(id)arg1 userId:(id)arg2;
- (id)myStatuses;
- (void)peopleFriendsProviderDidUpdate:(id)arg1;
- (id)preferredInitialItem;
- (void)reload;
- (void)reloadExploreItems;
- (void)reloadExploreItemsIfOlderThan:(double)arg1;
- (void)reloadIfOlderThan:(double)arg1;
- (void)reloadMyStatuses;
- (void)reloadMyStatusesIfOlderThan:(double)arg1;
- (void)removeRequestedUpdatesForStatusFetcherListener:(id)arg1;
- (void)removeStatusFetcherListener:(id)arg1;
- (void)requestPeriodicUpdatesForStatusFetcherListener:(id)arg1;
- (id)statusGroupForUserId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

