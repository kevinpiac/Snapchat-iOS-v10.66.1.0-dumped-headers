//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventAnnouncing-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCQueuePerformer;

@interface SCCreatorSettingsDataTracker : NSObject <SCEventAnnouncing>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCQueuePerformer *_performer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceUpdateEvent:(id)arg1 extraData:(id)arg2;
- (void)addListener:(id)arg1;
- (void)creatorSettingsDataStoreDidRefresh;
- (void)creatorSettingsDidUpdate:(id)arg1 event:(id)arg2;
- (id)init;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
