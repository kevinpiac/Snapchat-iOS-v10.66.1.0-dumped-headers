//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaPlaylistAdInsertionProtocol-Protocol.h"
#import "SCOperaPlaylistAdTrackProtocol-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SCOperaViewController, SCSnapAdsAdLifecycleWatermarkEventsTracker, SCUserSession;
@protocol SCOperaPlaylistItemController;

@interface SCPublisherAdTrackHandler : NSObject <SCOperaPlaylistAdTrackProtocol, SCOperaPlaylistAdInsertionProtocol>
{
    NSMutableArray *_currentGroupAdChunks;
    NSMutableDictionary *_skippedItemIdToAdChunkMap;
    NSString *_currentGroupId;
    SCOperaViewController *_operaViewController;
    id <SCOperaPlaylistItemController> _playlistItemController;
    long long _viewLocation;
    NSString *_deepLinkId;
    SCUserSession *_userSession;
    NSMutableDictionary *_groupIdToEntrySnapIndexMap;
    SCSnapAdsAdLifecycleWatermarkEventsTracker *_lifecycleTracker;
    NSMutableSet *_trackedAdRequestClientIds;
}

- (void).cxx_destruct;
- (id)_chunkFromOperaItem:(id)arg1;
- (id)_commonViewContextForChunk:(id)arg1;
- (_Bool)_isPublisherAdItem:(id)arg1;
- (void)_populateAdChunksWithItemGroup:(id)arg1 item:(id)arg2;
- (long long)adPositionForItem:(id)arg1;
- (unsigned long long)adProductTypeForItem:(id)arg1;
- (id)adRequestClientIdForGroup:(id)arg1;
- (id)adRequestClientIdForItem:(id)arg1;
- (id)adResponseForGroup:(id)arg1;
- (id)adResponseForItem:(id)arg1;
- (id)adSessionId;
- (long long)adSnapIndexForItem:(id)arg1;
- (id)adViewContextForItem:(id)arg1;
- (id)adViewContextForSkippedGroup:(id)arg1;
- (id)adViewContextForSkippedItem:(id)arg1 aroundItem:(id)arg2 pageLeft:(_Bool)arg3;
- (long long)editionEntrySnapIndexForItem:(id)arg1;
- (id)initWithViewLocation:(long long)arg1 deepLinkId:(id)arg2 userSession:(id)arg3;
- (_Bool)isNofillAdGroup:(id)arg1;
- (_Bool)isNofillAdItem:(id)arg1;
- (_Bool)isNofillUnskippableAdItem:(id)arg1;
- (void)logAdSkipWithAdGroup:(id)arg1;
- (void)logAdSkipWithAdItem:(id)arg1 aroundItem:(id)arg2 pageLeft:(_Bool)arg3;
- (void)setOperaViewController:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (id)skippedAdGroupAroundGroup:(id)arg1 pagedLeft:(_Bool)arg2;
- (id)skippedItemAroundItem:(id)arg1 pageLeft:(_Bool)arg2;
- (void)startViewingPlaylistItem:(id)arg1 context:(id)arg2;
- (void)startViewingPlaylistItemGroup:(id)arg1 previousItemGroup:(id)arg2 currentItem:(id)arg3;
- (void)stopViewingOptOutInterstitialForPlaylistItemGroup:(id)arg1;
- (void)stopViewingPlaylistItem:(id)arg1 isViewingLongform:(_Bool)arg2;
- (void)stopViewingPlaylistItemGroup:(id)arg1;
- (unsigned long long)topSnapBackgroundTypeForAdItem:(id)arg1;
- (long long)totalAdCountForItem:(id)arg1;
- (double)totalTopSnapsMediaDurationInSecForAdGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

