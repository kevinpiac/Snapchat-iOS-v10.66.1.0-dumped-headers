//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverFeedStoryFetching-Protocol.h"

@class NSString, SCScopedAccess;
@protocol SCDiscoverFeedDataMutating;

@interface SCDiscoverFeedStoryDeltaFetcher : NSObject <SCDiscoverFeedStoryFetching>
{
    SCScopedAccess *_discoverFeedDataCoordinatorAccess;
    id <SCDiscoverFeedDataMutating> _discoverFeedDataMutating;
}

- (void).cxx_destruct;
- (void)_didFetchPlaybackSequence:(id)arg1 friendStories:(id)arg2 deltaFetchStartTime:(double)arg3;
- (void)fetchSnapsForFriendStories:(id)arg1 compositeStoryId:(id)arg2 numOfAvailableSnaps:(long long)arg3;
- (id)initWithDiscoverFeedDataMutating:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

