//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaPlaylistFeaturePlugin.h"

#import "SCOperaPlaylistFeaturePluginShouldUseExtendedResetToCamera-Protocol.h"
#import "SCOperaPlaylistFriendStoryPluginBase-Protocol.h"
#import "SCOperaPlaylistItemExtraPropertiesProvider-Protocol.h"

@class NSString, SCBehaviorSubject, SCFriendStoryOperaDataSource, SCFriendStoryViewingSession, SCOperaFriendStoryPageProviderPlaylistAdapter, SCOperaViewController, SCUserSession;
@protocol NavigationDelegate;

@interface SCOperaPlaylistFriendStoryPlugin : SCOperaPlaylistFeaturePlugin <SCOperaPlaylistItemExtraPropertiesProvider, SCOperaPlaylistFeaturePluginShouldUseExtendedResetToCamera, SCOperaPlaylistFriendStoryPluginBase>
{
    SCFriendStoryOperaDataSource *_friendStoryOperaDataSource;
    SCOperaFriendStoryPageProviderPlaylistAdapter *_friendStoryPageProviderPlaylistAdapter;
    id <NavigationDelegate> _navigationDelegate;
    SCUserSession *_userSession;
    SCOperaViewController *_operaVC;
    _Bool _resetMuteOverrideOnDismiss;
    long long _viewingType;
    long long _storyPlayMode;
    long long _viewLocation;
    SCBehaviorSubject *_operaPageProviderSubject;
    SCFriendStoryViewingSession *_friendStoryViewingSession;
}

- (void).cxx_destruct;
- (void)addEventListenersWithEventAnnouncer:(id)arg1;
- (void)extraPropertiesForDataModel:(id)arg1 item:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)extraPropertiesProvider;
@property(readonly, nonatomic) SCFriendStoryViewingSession *friendStoryViewingSession; // @synthesize friendStoryViewingSession=_friendStoryViewingSession;
- (id)initWithUserSession:(id)arg1 storiesPlaybackDataProvider:(id)arg2 storiesMediaCoordinator:(id)arg3 replyDelegate:(id)arg4 startChatDelegate:(id)arg5 navigationDelegate:(id)arg6 loggingInfo:(id)arg7 playbackConfig:(id)arg8 operaPageProviderSubject:(id)arg9;
- (_Bool)isViewingLongform;
- (id)playlistDataSource;
- (id)prefetchRequestHandler;
- (void)setFriendProvider:(id)arg1;
- (void)setOperaViewController:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (_Bool)shouldUseExtendedResetToCamera;
- (void)stopLoggingEventIfNecessary;
- (long long)storyPlayMode;
- (void)teardown;
- (id)type;
- (void)updateFriendsList:(id)arg1;
- (void)updateOperaConfiguration:(id)arg1;
- (long long)viewLocation;
- (long long)viewingType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

