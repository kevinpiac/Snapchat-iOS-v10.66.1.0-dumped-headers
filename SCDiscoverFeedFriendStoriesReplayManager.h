//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinating-Protocol.h"

@class NSMutableSet, NSString, SCDataCoordinatorListenerAnnouncer, SCQueuePerformer;

@interface SCDiscoverFeedFriendStoriesReplayManager : NSObject <SCDataCoordinating>
{
    NSMutableSet *_storyIdSetPlayedAsUnviewed;
    SCQueuePerformer *_dataUpdatePerformer;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    NSString *_justPlayedFriendStoryId;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_announceEventDataWithRequest:(id)arg1;
- (void)_handleAddStory:(id)arg1 hasUnviewedSnaps:(_Bool)arg2;
- (void)_handleClearAllWithDataRequest:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;
- (id)friendStoryIdsWhitelistedForReplayState;
- (void)handleDataRequest:(id)arg1;
- (id)init;
- (id)justPlayedFriendStoryId;
- (void)removeDataUpdateListener:(id)arg1;
- (void)startToPlayStory:(id)arg1 hasUnviewedSnaps:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

