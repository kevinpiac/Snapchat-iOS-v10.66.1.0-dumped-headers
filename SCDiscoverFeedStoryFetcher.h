//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverFeedStoryFetching-Protocol.h"

@class NSString, SCUserSession;

@interface SCDiscoverFeedStoryFetcher : NSObject <SCDiscoverFeedStoryFetching>
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_didFetchSnapsForFriendStories:(id)arg1 compositeStoryId:(id)arg2 numOfAvailableSnaps:(unsigned long long)arg3 request:(id)arg4 response:(id)arg5 data:(id)arg6;
- (void)fetchSnapsForFriendStories:(id)arg1 compositeStoryId:(id)arg2 numOfAvailableSnaps:(long long)arg3;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

