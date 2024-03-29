//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy, SCStories, SCStoriesLegacyNetworkRequestManager, SCStoriesUnarchiver;
@protocol SCPrivateStoriesSelectionPresenting, SCStoriesPlaybackDataProviding;

@interface SCLegacyStoriesServices : NSObject
{
    SCStories *_stories;
    SCStoriesUnarchiver *_storiesUnarchiver;
    id <SCStoriesPlaybackDataProviding> _playbackDataProvider;
    SCLazy *_myStoriesDataCoordinator;
    SCStoriesLegacyNetworkRequestManager *_legacyNetworkRequestManager;
    SCLazy *_customStoriesDataFetcher;
    id <SCPrivateStoriesSelectionPresenting> _privateStoriesSelectionPresenter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCLazy *customStoriesDataFetcher; // @synthesize customStoriesDataFetcher=_customStoriesDataFetcher;
- (id)initWithStories:(id)arg1 storiesUnarchiver:(id)arg2 playbackDataProvider:(id)arg3 myStoriesDataCoordinator:(id)arg4 legacyNetworkRequestManager:(id)arg5 customStoriesDataFetcher:(id)arg6 privateStoriesSelectionPresenter:(id)arg7;
@property(readonly, nonatomic) SCStoriesLegacyNetworkRequestManager *legacyNetworkRequestManager; // @synthesize legacyNetworkRequestManager=_legacyNetworkRequestManager;
@property(readonly, nonatomic) SCLazy *myStoriesDataCoordinator; // @synthesize myStoriesDataCoordinator=_myStoriesDataCoordinator;
@property(readonly, nonatomic) id <SCStoriesPlaybackDataProviding> playbackDataProvider; // @synthesize playbackDataProvider=_playbackDataProvider;
@property(readonly, nonatomic) id <SCPrivateStoriesSelectionPresenting> privateStoriesSelectionPresenter; // @synthesize privateStoriesSelectionPresenter=_privateStoriesSelectionPresenter;
@property(readonly, nonatomic) SCStories *stories; // @synthesize stories=_stories;
@property(readonly, nonatomic) SCStoriesUnarchiver *storiesUnarchiver; // @synthesize storiesUnarchiver=_storiesUnarchiver;

@end

