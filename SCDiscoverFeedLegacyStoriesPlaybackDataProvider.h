//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoriesPlaybackDataProviding-Protocol.h"

@class NSDictionary, NSString;

@interface SCDiscoverFeedLegacyStoriesPlaybackDataProvider : NSObject <SCStoriesPlaybackDataProviding>
{
    NSDictionary *_playbackInfoMap;
    NSDictionary *_friendStoriesMap;
}

- (void).cxx_destruct;
- (id)customStoriesPlaybackSequenceByMischiefId:(id)arg1;
- (id)customStoriesPlaybackSequenceByPublicationId:(id)arg1;
- (id)initWithFriendStories:(id)arg1;
- (id)mergedFriendStoryPlaybackSequenceByUsername:(id)arg1;
- (id)ourStoriesPlaybackSequenceByOurStoryId:(id)arg1;
- (void)storiesPlaybackMetadataForStoryIds:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

