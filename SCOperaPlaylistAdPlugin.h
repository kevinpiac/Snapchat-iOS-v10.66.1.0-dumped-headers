//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaPlaylistFeaturePlugin.h"

#import "SCOperaPlaylistItemExtraPropertiesProvider-Protocol.h"

@class NSString, SCAdViewingSession, SCCompositeAdDataSource, SCExperimentManager;
@protocol NavigationDelegate;

@interface SCOperaPlaylistAdPlugin : SCOperaPlaylistFeaturePlugin <SCOperaPlaylistItemExtraPropertiesProvider>
{
    SCAdViewingSession *_adSession;
    SCCompositeAdDataSource *_adDataSource;
    long long _viewLocation;
    SCExperimentManager *_experimentManager;
    id <NavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
- (void)addEventListenersWithEventAnnouncer:(id)arg1;
- (void)extraPropertiesForDataModel:(id)arg1 item:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)extraPropertiesProvider;
- (id)initWithUserSession:(id)arg1 viewLocation:(long long)arg2 groupAdDataSource:(id)arg3;
- (id)initWithUserSession:(id)arg1 viewLocation:(long long)arg2 storySessionId:(id)arg3;
- (id)initWithUserSession:(id)arg1 viewLocation:(long long)arg2 storySessionId:(id)arg3 cognacSessionId:(id)arg4 navigationDelegate:(id)arg5 deepLinkId:(id)arg6 appInfoLogParams:(id)arg7;
- (id)initWithUserSession:(id)arg1 viewLocation:(long long)arg2 storySessionId:(id)arg3 cognacSessionId:(id)arg4 navigationDelegate:(id)arg5 deepLinkId:(id)arg6 appInfoLogParams:(id)arg7 groupAdDataSource:(id)arg8;
- (id)initWithUserSession:(id)arg1 viewLocation:(long long)arg2 storySessionId:(id)arg3 navigationDelegate:(id)arg4 deepLinkId:(id)arg5;
- (id)playlistDataSource;
- (void)setOperaViewController:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (_Bool)shouldUseExtendedResetToCamera;
- (void)teardown;
- (id)type;
- (void)updateOperaConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

