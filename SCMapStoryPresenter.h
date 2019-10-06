//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapFriendStoriesPresenterDelegate-Protocol.h"
#import "SCMapStoryPresenting-Protocol.h"

@class NSString, SCLazy, SCMapFriendStoriesPresenter, SCMapLoggerSession, SCUserSession;
@protocol NavigationDelegate, SCMapStoryPresenterDelegate;

@interface SCMapStoryPresenter : NSObject <SCMapFriendStoriesPresenterDelegate, SCMapStoryPresenting>
{
    SCUserSession *_userSession;
    SCMapLoggerSession *_mapLoggerSession;
    id <NavigationDelegate> _navigationDelegate;
    SCLazy *_storiesSummaryInfoProvider;
    SCLazy *_storiesPlaybackDataProvider;
    SCLazy *_storiesMediaCoordinator;
    SCMapFriendStoriesPresenter *_storiesPresenter;
    id <SCMapStoryPresenterDelegate> delegate;
}

- (void).cxx_destruct;
- (void)_presentFriendStories:(id)arg1 baseView:(id)arg2 renderLayer:(id)arg3 sourceType:(long long)arg4 viewController:(id)arg5;
- (void)_presentFriendStoriesWithSummaryInfo:(id)arg1 baseView:(id)arg2 renderLayer:(id)arg3 sourceType:(long long)arg4 viewController:(id)arg5;
- (void)clearTemporarilyCachedData;
@property(nonatomic) __weak id <SCMapStoryPresenterDelegate> delegate; // @synthesize delegate;
- (void)dismissStory;
- (void)friendStoryPresenterDidAppear:(id)arg1;
- (void)friendStoryPresenterDidDisappear:(id)arg1;
- (id)initWithUserSession:(id)arg1 mapLoggerSession:(id)arg2 navigationDelegate:(id)arg3 storiesSummaryInfoProvider:(id)arg4 storiesPlaybackDataProvider:(id)arg5 storiesMediaCoordinator:(id)arg6;
- (_Bool)isPresenting;
- (void)presentFriendStoryOnViewController:(id)arg1 baseView:(id)arg2 person:(id)arg3 renderLayer:(id)arg4 sourceType:(long long)arg5;
- (void)presentGroupStoryOnViewController:(id)arg1 baseView:(id)arg2 groupId:(id)arg3 renderLayer:(id)arg4 sourceType:(long long)arg5;
- (void)presentPoiStoryOnViewController:(id)arg1 baseView:(id)arg2 poiId:(id)arg3 renderLayer:(id)arg4 sourceType:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

