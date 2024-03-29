//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCFilterableProtocol-Protocol.h"
#import "SCMediaOwnerProtocol-Protocol.h"
#import "SCStoriesViewDataModel-Protocol.h"
#import "SCStoryMediaStateListener-Protocol.h"

@class NSArray, NSDate, NSString, NSURL, SCDiscoverFeedStory, SCMapStoriesInfo, SCSearchDynamicStoriesInfo, SCStoryActionsConfiguration, SCStoryAdStreamInfo;

@interface FriendStories : NSObject <SCStoryMediaStateListener, NSCoding, SCStoriesViewDataModel, SCMediaOwnerProtocol, SCFilterableProtocol>
{
    _Bool _local;
    _Bool _shared;
    _Bool _hasCustomDescriptionForLiveStory;
    _Bool _isSearchDynamicStories;
    _Bool _isBusinessStories;
    _Bool _isHighlightStories;
    _Bool _isPromotedStories;
    _Bool _isOfficialStories;
    _Bool _hasFetchedMoreStories;
    _Bool _showViewingJIT;
    _Bool _hasUserStartedViewingUnviewedStories;
    _Bool _hasUserStartedViewingStories;
    long long _unviewedSingleIconMediaState;
    SCStoryAdStreamInfo *_adStreamInfo;
    long long _batchState;
    long long _unviewedBatchState;
    NSString *_sharedId;
    long long _storiesType;
    NSString *_mostRecentStoryId;
    NSDate *_mostRecentStoryTimestamp;
    NSString *_mostRecentUnviewedStoryId;
    NSDate *_mostRecentUnviewedStoryTimestamp;
    NSArray *_stories;
    NSString *_displayName;
    long long _loadContext;
    long long _unviewedLoadContext;
    SCMapStoriesInfo *_mapViewingInfo;
    NSString *_officialTrackingId;
    SCSearchDynamicStoriesInfo *_searchDynamicStoriesInfo;
    SCDiscoverFeedStory *_cheetahStory;
    unsigned long long _discoverFeedItemPos;
    NSString *_trackingId;
    unsigned long long _numSnapsOnTapToLoad;
    NSString *_profileDescription;
    NSString *_deepLinkURL;
    SCStoryActionsConfiguration *_actionsConfiguration;
    NSString *_atomicUsername;
    NSURL *_unviewedSingleIconURL;
    unsigned long long _numSnapsToLoadBeforeAllowViewing;
    unsigned long long _tapToLoadCount;
}

+ (id)displayNameForSCAStoryTypeSpecificEnum:(long long)arg1;
+ (id)friendStoriesCollection;
+ (id)friendStoriesForUsername:(id)arg1;
+ (id)friendStoriesForUsername:(id)arg1 mergedPrivateStories:(_Bool)arg2;
+ (id)friendStoriesForUsername:(id)arg1 mergedPrivateStories:(_Bool)arg2 fromSearch:(_Bool)arg3;
+ (id)friendStoriesFromSoju:(id)arg1;
+ (_Bool)hasStoriesWithStories:(id)arg1;
+ (_Bool)hasUnviewedStoriesWithStories:(id)arg1;
+ (_Bool)isFullyViewedWithStories:(id)arg1;
+ (id)storiesFromManifest:(id)arg1 username:(id)arg2 viewingInfo:(id)arg3 reportedIds:(id)arg4 enableStreaming:(_Bool)arg5 elementsType:(unsigned long long)arg6;
+ (id)storiesFromStoryDoc:(id)arg1;
+ (long long)uniqueCellDataIdForUsername:(id)arg1;
+ (long long)uniqueCellDataIdForUsername:(id)arg1 section:(long long)arg2;
- (void).cxx_destruct;
- (void)_addIndividualStoriesObservers:(id)arg1;
- (_Bool)_adjustedUserInitiatedWithCurrentUserInitiated:(_Bool)arg1 loadStartIndex:(long long)arg2 loadCurrentIndex:(long long)arg3 loadContext:(long long)arg4;
- (void)_handleChangetoStories:(id)arg1;
- (long long)_indexOfFirstUnviewedStory;
- (long long)_indexOfViewingStory;
- (void)_mergeSiblingsFromFriendStories:(id)arg1 intoDictionary:(id)arg2;
- (id)_mostRecentUnexpiredStory;
- (id)_mostRecentUnexpiredUnviewedStory;
- (id)_mostRecentUnviewedStory;
- (void)_removeIndividualStoriesObservers:(id)arg1;
- (_Bool)_shouldDisableSwipeUpToChatOnStory:(id)arg1;
- (void)_updateWithStories:(id)arg1 isDelta:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain) SCStoryActionsConfiguration *actionsConfiguration; // @synthesize actionsConfiguration=_actionsConfiguration;
@property(retain) SCStoryAdStreamInfo *adStreamInfo; // @synthesize adStreamInfo=_adStreamInfo;
- (void)addPlaceholderLoadingStoryWithTotalDuration:(double)arg1;
- (void)addStoriesObservers;
- (void)addStoryToStoriesArrayWithStory:(id)arg1 index:(unsigned long long)arg2;
@property(copy) NSString *atomicUsername; // @synthesize atomicUsername=_atomicUsername;
@property long long batchState; // @synthesize batchState=_batchState;
- (id)buildPlaceholderLoadingStory;
- (id)cacheKey;
- (id)cacheMediaIds;
- (_Bool)canDeleteStorySnaps;
- (id)cellId;
@property(copy) SCDiscoverFeedStory *cheetahStory; // @synthesize cheetahStory=_cheetahStory;
- (void)clearExpiredStorySnapsWithResultHandler:(CDUnknownBlockType)arg1;
- (long long)compare:(id)arg1;
- (_Bool)containsSharedStory;
- (_Bool)containsStory:(id)arg1;
- (void)dealloc;
@property(copy) NSString *deepLinkURL; // @synthesize deepLinkURL=_deepLinkURL;
@property(readonly, copy) NSString *description;
- (void)didDecodeObject;
@property unsigned long long discoverFeedItemPos; // @synthesize discoverFeedItemPos=_discoverFeedItemPos;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
- (_Bool)enableCriticalModeWhenLoading;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchMediaForBatch:(unsigned long long)arg1 viewingType:(long long)arg2 loadContext:(long long)arg3 userInitiated:(_Bool)arg4 offset:(long long)arg5 viewLocation:(long long)arg6;
- (void)fetchMediaForBatch:(unsigned long long)arg1 viewingType:(long long)arg2 startAtIndex:(long long)arg3 loadContext:(long long)arg4 userInitiated:(_Bool)arg5 viewLocation:(long long)arg6;
- (void)fetchSingleIconMediaIfNecessaryUserInitiated:(_Bool)arg1;
- (void)fetchSingleIconMediaIfNecessaryUserInitiated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchStory:(id)arg1 userInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)firstStoryToPlayForViewingType:(long long)arg1;
- (id)firstStoryWithThumbnailToDisplayWithViewingType:(long long)arg1;
- (id)friendsFeedId;
@property _Bool hasCustomDescriptionForLiveStory; // @synthesize hasCustomDescriptionForLiveStory=_hasCustomDescriptionForLiveStory;
@property _Bool hasFetchedMoreStories; // @synthesize hasFetchedMoreStories=_hasFetchedMoreStories;
- (_Bool)hasStories;
- (_Bool)hasUnviewedStories;
@property(nonatomic) _Bool hasUserStartedViewingStories; // @synthesize hasUserStartedViewingStories=_hasUserStartedViewingStories;
@property(nonatomic) _Bool hasUserStartedViewingUnviewedStories; // @synthesize hasUserStartedViewingUnviewedStories=_hasUserStartedViewingUnviewedStories;
@property(readonly) unsigned long long hash;
- (void)iconWithCompletion:(CDUnknownBlockType)arg1;
- (void)incorporateFullManifest:(id)arg1 intoPreviewManifest:(id)arg2 reportedIds:(id)arg3 enableStreaming:(_Bool)arg4 elementsType:(unsigned long long)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFriendStories:(id)arg1;
- (id)initWithSoju:(id)arg1 displayName:(id)arg2;
- (id)initWithStoriesArray:(id)arg1;
- (id)initWithStoriesArray:(id)arg1 shared:(_Bool)arg2;
- (id)initWithoutObservers;
@property _Bool isBusinessStories; // @synthesize isBusinessStories=_isBusinessStories;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToFriendStories:(id)arg1;
- (_Bool)isFullyViewed;
@property _Bool isHighlightStories; // @synthesize isHighlightStories=_isHighlightStories;
@property(getter=isLocal) _Bool local; // @synthesize local=_local;
@property(readonly) _Bool isMapStories;
- (_Bool)isNormalFriendStories;
@property _Bool isOfficialStories; // @synthesize isOfficialStories=_isOfficialStories;
@property _Bool isPromotedStories; // @synthesize isPromotedStories=_isPromotedStories;
- (_Bool)isSaveable;
@property _Bool isSearchDynamicStories; // @synthesize isSearchDynamicStories=_isSearchDynamicStories;
- (_Bool)isShareable;
@property(getter=isShared) _Bool shared; // @synthesize shared=_shared;
- (_Bool)isViewingLastUnviewedSnap;
@property long long loadContext; // @synthesize loadContext=_loadContext;
@property(retain) SCMapStoriesInfo *mapViewingInfo; // @synthesize mapViewingInfo=_mapViewingInfo;
- (_Bool)matches:(id)arg1;
- (_Bool)matchesByDisplayName:(id)arg1;
- (id)mediaFileNames;
- (void)mergeMissingStoriesFromStoriesArray:(id)arg1;
- (id)mergedFriendStoriesWithGroupStories:(id)arg1;
@property(readonly) NSString *mergedUsername;
- (id)mostRecentStory;
@property(copy) NSString *mostRecentStoryId; // @synthesize mostRecentStoryId=_mostRecentStoryId;
@property(retain) NSDate *mostRecentStoryTimestamp; // @synthesize mostRecentStoryTimestamp=_mostRecentStoryTimestamp;
@property(copy) NSString *mostRecentUnviewedStoryId; // @synthesize mostRecentUnviewedStoryId=_mostRecentUnviewedStoryId;
@property(retain) NSDate *mostRecentUnviewedStoryTimestamp; // @synthesize mostRecentUnviewedStoryTimestamp=_mostRecentUnviewedStoryTimestamp;
- (unsigned long long)numLoadedSnapsInThreshold:(unsigned long long)arg1;
@property unsigned long long numSnapsOnTapToLoad; // @synthesize numSnapsOnTapToLoad=_numSnapsOnTapToLoad;
@property unsigned long long numSnapsToLoadBeforeAllowViewing; // @synthesize numSnapsToLoadBeforeAllowViewing=_numSnapsToLoadBeforeAllowViewing;
- (unsigned long long)numberOfLoadedSnapsNeededBeforeViewingForViewingType:(long long)arg1 useLatestConfig:(_Bool)arg2;
- (unsigned long long)numberOfLoadedStoryMediaNeededForLoadedStateUseLatestConfig:(_Bool)arg1;
- (unsigned long long)numberOfLoadedStoryMediaNeededForUnviewedLoadedStateUseLatestConfig:(_Bool)arg1;
- (unsigned long long)numberOfSnapsRemainingForViewingType:(long long)arg1;
- (unsigned long long)numberOfSnapsToLoadInStoryBeforeViewingForViewingType:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(copy) NSString *officialTrackingId; // @synthesize officialTrackingId=_officialTrackingId;
- (id)oldestStoryToView;
- (_Bool)onlyContainsUnviewedStories;
@property(copy) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;
- (_Bool)readyToPlayForViewingType:(long long)arg1;
- (void)removePlaceholderLoadingStory;
- (void)removeStoriesFromStoriesArrayWithStories:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)removeStoriesWithClientIds:(id)arg1;
- (void)removeStoriesWithIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeStoryFromStoriesArrayWithStory:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (_Bool)replyEnabledForStory:(id)arg1;
- (void)resetDiskLoadingState;
- (void)resetFriendsStoryState;
- (void)resetFriendsStoryStateUseLatestConfig:(_Bool)arg1;
- (void)resetMostRecentStoryInfo;
- (void)resetUserStartedViewingStoriesStateUseLatestConfig:(_Bool)arg1;
@property(copy) SCSearchDynamicStoriesInfo *searchDynamicStoriesInfo; // @synthesize searchDynamicStoriesInfo=_searchDynamicStoriesInfo;
- (void)setHasUserStartedViewingStories:(_Bool)arg1 forViewingType:(long long)arg2;
- (void)setIconMediaState:(long long)arg1;
@property(copy) NSString *sharedId; // @synthesize sharedId=_sharedId;
@property _Bool showViewingJIT; // @synthesize showViewingJIT=_showViewingJIT;
@property(copy, nonatomic) NSArray *stories; // @synthesize stories=_stories;
@property long long storiesType; // @synthesize storiesType=_storiesType;
@property unsigned long long tapToLoadCount; // @synthesize tapToLoadCount=_tapToLoadCount;
@property long long unviewedBatchState; // @synthesize unviewedBatchState=_unviewedBatchState;
@property long long unviewedLoadContext; // @synthesize unviewedLoadContext=_unviewedLoadContext;
@property long long unviewedSingleIconMediaState; // @synthesize unviewedSingleIconMediaState=_unviewedSingleIconMediaState;
@property(retain) NSURL *unviewedSingleIconURL; // @synthesize unviewedSingleIconURL=_unviewedSingleIconURL;
@property(copy) NSString *username;
- (void)story:(id)arg1 didChangeMediaState:(long long)arg2;
- (id)storyForStorySnapId:(id)arg1;
- (long long)storyType;
- (long long)storyTypeSpecific;
- (id)storyWithThumbnailToDisplayWithViewingType:(long long)arg1;
- (double)totalTimeForViewingType:(long long)arg1;
- (double)totalTimeLeftForViewingType:(long long)arg1;
@property(readonly, copy) NSString *trackingId; // @synthesize trackingId=_trackingId;
- (long long)uniqueCellDataId;
- (long long)uniqueCellDataIdWithSection:(long long)arg1;
- (id)unviewedStories;
- (void)updateWithFriendStories:(id)arg1 isDelta:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)userDisplayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

