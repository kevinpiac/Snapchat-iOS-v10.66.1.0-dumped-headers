//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCMediaOwnerProtocol-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SCCache, SCQueuePerformer;

@interface FriendStoriesCollection : NSObject <SCTraceEnabled, NSCoding, SCMediaOwnerProtocol>
{
    NSMutableArray *_locallyPersistedFriendStories;
    SCQueuePerformer *_performer;
    NSDictionary *_friendsStories;
    NSArray *_sharedUsernamesWithUnviewedStories;
    NSArray *_sharedUsernamesWithViewedStories;
    NSDictionary *_removedStories;
    NSDictionary *_storiesBeingViewedDictionary;
    NSDictionary *_viewedStoriesDictionary;
    NSArray *_storiesViewedButNotMarkedAsViewed;
    NSArray *_storiesViewedAndBeingMarkedAsViewed;
    NSMutableDictionary *_mergedFriendStoriesCache;
}

- (void).cxx_destruct;
- (id)_addAndReturnClientIdToStoriesDict:(id)arg1 entriesToAdd:(id)arg2;
- (id)_addAndReturnUsernames:(id)arg1 usernameToAdd:(id)arg2;
- (id)_getAndClearUnreportedViewedStories;
- (void)_logReadReceiptsForViewedStories:(id)arg1 success:(_Bool)arg2;
- (void)_markStoriesViewed:(id)arg1 withSuccess:(_Bool)arg2;
- (void)_markStoryViewedOnBackgroundQueue:(id)arg1;
- (void)_markStoryViewedOnBackgroundQueue:(id)arg1 forViewingType:(long long)arg2 inFriendStories:(id)arg3;
- (id)_mergedFriendStoriesForUsername:(id)arg1;
- (id)_newFriendStoriesForPrivateStoriesOfUsername:(id)arg1;
- (void)_performOnBackgroundQueueIfNecessary:(CDUnknownBlockType)arg1;
- (void)_reconstructTypeSafeFriendStoriesDict;
- (id)_removeAndReturnClientIdToStoriesDict:(id)arg1 keysToRemove:(id)arg2;
- (id)_removeAndReturnUsernames:(id)arg1 usernameToRemove:(id)arg2;
- (void)_removeNormalFriendStoriesFromNameListWithUsername:(id)arg1 storiesArray:(id)arg2;
- (void)_removeStoryFromDOC:(id)arg1;
- (void)_resetMergedFriendStoriesForUsername:(id)arg1;
- (void)_resetMergedFriendStoriesForUsernames:(id)arg1;
- (void)_sortGroupStoriesIntoCollection:(id)arg1 updateFriendFeedAutomatically:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_unmergedFriendStoriesForUsername:(id)arg1;
- (void)_updateFriendStoriesViewedStatus:(id)arg1 withPreLaunchViewedMap:(id)arg2;
- (void)_updateMergedNotificationSet:(id)arg1 withUsername:(id)arg2;
- (void)_updateOnBackgroundQueueWithFriendStoriesCollection:(id)arg1 clientMetadataOnly:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateOnBackgroundQueueWithFriendsStories:(id)arg1 deletedStorySnapIds:(id)arg2 isDelta:(_Bool)arg3 triggerType:(long long)arg4 notifyNewStories:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (CDUnknownBlockType)_usernameComparatorWithAllStoriesSectionFriendsStories:(id)arg1;
- (CDUnknownBlockType)_usernameComparatorWithFriendsStories:(id)arg1;
- (void)addObservers;
@property(readonly, nonatomic) SCCache *cache;
- (id)cacheMediaIds;
- (void)clearExpiredAndViewedStoriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)didDecodeObject;
- (void)encodeWithCoder:(id)arg1;
- (void)ensureNoStoriesBeingMarkedExists;
- (void)ensureNonNilObjects;
- (id)friendStoriesForUsername:(id)arg1;
- (id)friendStoriesForUsername:(id)arg1 mergedPrivateStories:(_Bool)arg2;
- (id)friendStoriesForUsername:(id)arg1 mergedPrivateStories:(_Bool)arg2 fromSearch:(_Bool)arg3;
@property(copy) NSDictionary *friendsStories; // @synthesize friendsStories=_friendsStories;
- (id)getUnreportedViewedStories;
- (id)initWithCoder:(id)arg1;
- (id)initWithPerformer:(id)arg1;
- (void)locallyPersistFriendStories:(id)arg1;
- (void)markAllViewingStoriesViewed;
- (void)markStoriesViewed:(_Bool)arg1;
- (void)markStoryViewed:(id)arg1;
- (void)markStoryViewed:(id)arg1 forViewingType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)markStoryViewedWithoutNetworkSyncWithStorySnapId:(id)arg1 username:(id)arg2 forViewingType:(long long)arg3;
@property(retain) NSMutableDictionary *mergedFriendStoriesCache; // @synthesize mergedFriendStoriesCache=_mergedFriendStoriesCache;
- (void)removeAllStoriesForUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeExpiredMedia;
- (void)removeObservers;
- (void)removeStory:(id)arg1;
- (void)removeViewingStory:(id)arg1;
@property(copy) NSDictionary *removedStories; // @synthesize removedStories=_removedStories;
- (void)reportCaptureIfNecessaryForStory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportViewIfNecessaryForStory:(id)arg1 previouslyViewed:(_Bool)arg2;
- (void)setPerformer:(id)arg1;
@property(copy) NSArray *sharedUsernamesWithUnviewedStories; // @synthesize sharedUsernamesWithUnviewedStories=_sharedUsernamesWithUnviewedStories;
@property(copy) NSArray *sharedUsernamesWithViewedStories; // @synthesize sharedUsernamesWithViewedStories=_sharedUsernamesWithViewedStories;
@property(copy) NSDictionary *storiesBeingViewedDictionary; // @synthesize storiesBeingViewedDictionary=_storiesBeingViewedDictionary;
@property(copy) NSArray *storiesViewedAndBeingMarkedAsViewed; // @synthesize storiesViewedAndBeingMarkedAsViewed=_storiesViewedAndBeingMarkedAsViewed;
@property(copy) NSArray *storiesViewedButNotMarkedAsViewed; // @synthesize storiesViewedButNotMarkedAsViewed=_storiesViewedButNotMarkedAsViewed;
@property(copy) NSDictionary *viewedStoriesDictionary; // @synthesize viewedStoriesDictionary=_viewedStoriesDictionary;
- (_Bool)shouldStoryBeViewed:(id)arg1;
- (void)sortGroupStoriesIntoCollection:(id)arg1 updateFriendFeedAutomatically:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)storiesBeingViewed;
- (void)updateCreatedMischiefIdsFromGroupStoryCollection:(id)arg1;
- (void)updateWithFriendStoriesCollection:(id)arg1 clientMetadataOnly:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateWithFriendsStories:(id)arg1 deletedStorySnapIds:(id)arg2 isDelta:(_Bool)arg3 triggerType:(long long)arg4 completion:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

