//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaPlaylistEventTrackerPlugin.h"

#import "SCEventAnnouncing-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCOperaViewController, SCOperaViewInteraction;
@protocol SCOperaPlaylistItemController;

@interface SCSearchStoryLoggingOperaPlugin : SCOperaPlaylistEventTrackerPlugin <SCEventAnnouncing>
{
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCOperaViewController *_operaViewController;
    SCEventListenerAnnouncer *_eventAnnouncer;
    long long _entryPoint;
    SCOperaViewInteraction *_interactionAtDismissal;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (id)initWithEntryPoint:(long long)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (void)removeListener:(id)arg1;
- (void)setOperaViewController:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (void)teardown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

