//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaPlaylistEventTrackerPlugin.h"

#import "SCOperaPlaylistItemExtraPropertiesProvider-Protocol.h"
#import "SCStoryManagementActionHandlerDelegate-Protocol.h"
#import "SCStoryManagementViewCoordinatorDelegate-Protocol.h"

@class FBKVOController, NSDate, NSString, SCMyStories, SCOperaViewController, SCStoryManagementActionHandler, SCStoryManagementDataSource, SCStoryManagementViewCoordinator, SCUserSession;
@protocol SCOperaPlaylistItemController, SCOperaViewProvider, SCStoriesPlaybackDataProviding, SCStoriesPlaybackSnapViewerProviding;

@interface SCStoryManagementOperaPlugin : SCOperaPlaylistEventTrackerPlugin <SCOperaPlaylistItemExtraPropertiesProvider, SCStoryManagementActionHandlerDelegate, SCStoryManagementViewCoordinatorDelegate>
{
    SCMyStories *_myStories;
    id <SCOperaViewProvider> _chromeAvatarProvider;
    SCStoryManagementDataSource *_dataSource;
    SCStoryManagementViewCoordinator *_storyManagementCoordinator;
    SCStoryManagementActionHandler *_actionHandler;
    FBKVOController *_kvoController;
    NSDate *_presentationTime;
    _Bool _isForSingleStorySnap;
    _Bool _showManagementOnOpen;
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCOperaViewController *_operaViewController;
    SCUserSession *_userSession;
    id <SCStoriesPlaybackDataProviding> _storiesPlaybackDataProvider;
    id <SCStoriesPlaybackSnapViewerProviding> _storiesPlaybackSnapViewerProvider;
}

- (void).cxx_destruct;
- (id)_currentFocusedStory;
- (void)_logStoryManagementView;
- (void)_myStoriesArrayDidChange:(id)arg1 myStories:(id)arg2;
- (void)_observeMyStories:(id)arg1;
- (void)_observeStory:(id)arg1;
- (void)_storyPostingStateDidChange:(id)arg1 story:(id)arg2;
- (void)dealloc;
- (void)extraPropertiesForDataModel:(id)arg1 item:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)extraPropertiesProvider;
- (id)initWithUserSession:(id)arg1 myStories:(id)arg2 storiesPlaybackDataProvider:(id)arg3 storiesMediaCoordinator:(id)arg4 customStoriesDataFetcher:(id)arg5 replyDelegate:(id)arg6 startChatDelegate:(id)arg7 navigationDelegate:(id)arg8 isForSingleStorySnap:(_Bool)arg9 showManagementOnOpen:(_Bool)arg10 storiesPlaybackSnapViewerProvider:(id)arg11;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (void)setOperaViewController:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (void)storyManagementActionHandler:(id)arg1 scrollToSnapDataModel:(id)arg2;
- (void)storyManagementActionHandler:(id)arg1 willDeleteStoryWithClientId:(id)arg2;
- (void)storyManagementActionHandlerDismissStoryManagementView:(id)arg1;
- (void)storyManagementActionHandlerPausePlayback:(id)arg1;
- (id)storyManagementActionHandlerViewControllerForPresentation:(id)arg1;
- (void)storyManagementActionHandlerViewerDidUpdateForCurrentStory:(id)arg1;
- (void)storyManagementActionHandlerWillPlayStories:(id)arg1;
- (void)storyManagementViewCoordinator:(id)arg1 didFinishWithTransitionType:(unsigned long long)arg2 success:(_Bool)arg3;
- (void)storyManagementViewCoordinator:(id)arg1 willBeginWithTransitionType:(unsigned long long)arg2;
- (void)updateOperaConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

