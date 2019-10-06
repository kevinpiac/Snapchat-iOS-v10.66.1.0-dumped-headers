//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;
@protocol SCDiscoverFeedSectionExtension;

@interface SCDiscoverFeedStoriesServices : NSObject
{
    SCLazy *_discoverFeedFriendStoriesDataCoordinator;
    SCLazy *_publisherStoriesMetadataCoordinator;
    SCLazy *_discoverFeedDataCoordinator;
    SCLazy *_replayManager;
    id <SCDiscoverFeedSectionExtension> _sectionExtension;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCLazy *discoverFeedDataCoordinator; // @synthesize discoverFeedDataCoordinator=_discoverFeedDataCoordinator;
@property(readonly, nonatomic) SCLazy *discoverFeedFriendStoriesDataCoordinator; // @synthesize discoverFeedFriendStoriesDataCoordinator=_discoverFeedFriendStoriesDataCoordinator;
- (id)initWithDiscoverFeedFriendStoriesDataCoordinator:(id)arg1 publisherStoriesMetadataCoordinator:(id)arg2 replayManager:(id)arg3 sectionExtension:(id)arg4 discoverFeedDataCoordinator:(id)arg5;
@property(readonly, nonatomic) SCLazy *publisherStoriesMetadataCoordinator; // @synthesize publisherStoriesMetadataCoordinator=_publisherStoriesMetadataCoordinator;
@property(readonly, nonatomic) SCLazy *replayManager; // @synthesize replayManager=_replayManager;
@property(readonly, nonatomic) id <SCDiscoverFeedSectionExtension> sectionExtension; // @synthesize sectionExtension=_sectionExtension;

@end

