//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSpectaclesBaseAnnouncer.h"

#import "SCLagunaFirmwareUpdateEventListener-Protocol.h"

@class NSString;

@interface SCLagunaFirmwareUpdateEventListenerAnnouncer : SCSpectaclesBaseAnnouncer <SCLagunaFirmwareUpdateEventListener>
{
}

- (void)lagunaOnFirmwareUpdateEvent:(unsigned long long)arg1 device:(id)arg2;
- (void)lagunaOnFirmwareUpdateForDevice:(id)arg1 changedState:(unsigned long long)arg2 progress:(float)arg3;
- (void)lagunaOnFirmwareUpdateForDevice:(id)arg1 failedFromState:(unsigned long long)arg2;
- (void)lagunaOnNewFirmwareVersionFetched;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
