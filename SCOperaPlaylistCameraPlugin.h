//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaPlaylistFeaturePlugin.h"

#import "SCOperaEventListener-Protocol.h"

@class NSString, SCUserSession;

@interface SCOperaPlaylistCameraPlugin : SCOperaPlaylistFeaturePlugin <SCOperaEventListener>
{
    SCUserSession *_userSession;
    long long _viewLocation;
}

- (void).cxx_destruct;
- (void)addEventListenersWithEventAnnouncer:(id)arg1;
- (id)initWithUserSession:(id)arg1 viewLocation:(long long)arg2;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)playlistDataSource;
- (void)setPlaylistItemController:(id)arg1;
- (id)type;
- (void)updateOperaConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

