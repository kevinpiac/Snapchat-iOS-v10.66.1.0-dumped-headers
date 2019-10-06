//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaPlaylistFeaturePlugin.h"

#import "SCOperaPlaylistItemExtraPropertiesProvider-Protocol.h"

@class NSString, SCNotificationOptInDataProvider;

@interface SCOperaOptInDoorbellPlugin : SCOperaPlaylistFeaturePlugin <SCOperaPlaylistItemExtraPropertiesProvider>
{
    SCNotificationOptInDataProvider *_friendsOptInDataProvider;
}

- (void).cxx_destruct;
- (id)_doorbellPropertyWithUserName:(id)arg1;
- (void)addEventListenersWithEventAnnouncer:(id)arg1;
- (void)extraPropertiesForDataModel:(id)arg1 item:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)extraPropertiesProvider;
- (id)initWithFriendsOptInDataProvider:(id)arg1;
- (id)playlistDataSource;
- (void)setExtraInfo:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (id)type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
