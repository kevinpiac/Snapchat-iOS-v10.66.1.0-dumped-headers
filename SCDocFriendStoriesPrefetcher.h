//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFriendStoriesPrefetcher-Protocol.h"

@class NSString, SCExperimentManager, SCFriendStoriesPrefetchDecider, SCLazy, SCSessionRequestManager;

@interface SCDocFriendStoriesPrefetcher : NSObject <SCFriendStoriesPrefetcher>
{
    SCLazy *_storiesPlaybackDataProvider;
    SCLazy *_storiesMediaCoordinator;
    long long _numberOfPrefetchedStories;
    SCExperimentManager *_experimentManager;
    SCFriendStoriesPrefetchDecider *_prefetchDecider;
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (void)_prefetchFriendStoriesForSuspendedUIUpdate;
- (void)_prefetchFriendStoriesForVisibleStories:(id)arg1;
- (void)_prefetchFriendStoriesFromPlaybackInfos:(id)arg1 withOrderInFriendUsernames:(id)arg2;
- (void)_updateUILayoutOrderFromPlaybackInfos:(id)arg1 withOrderInFriendUsernames:(id)arg2;
- (void)clearPrefetchedCount;
- (void)handlePrefetchWithContext:(id)arg1 sectionType:(id)arg2;
- (id)initWithStoriesPlaybackDataProvider:(id)arg1 storiesMediaCoordinator:(id)arg2 prefetchDecider:(id)arg3 experimentManager:(id)arg4 requestManager:(id)arg5;
- (void)prefetchWithData:(id)arg1;
- (id)prefetchableDataFromViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

