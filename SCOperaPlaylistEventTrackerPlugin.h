//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaPlaylistPlugin.h"

#import "SCOperaSession-Protocol.h"

@class NSString;

@interface SCOperaPlaylistEventTrackerPlugin : SCOperaPlaylistPlugin <SCOperaSession>
{
}

- (_Bool)isHighPriorityEventListener;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

