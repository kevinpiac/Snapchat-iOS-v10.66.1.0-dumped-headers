//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinating-Protocol.h"

@class NSString, SCDataCoordinatorListenerAnnouncer, SCEventListenerAnnouncer, SCUserSession;

@interface SCDiscoverFeedManagementFullScreenViewDataCoordinator : NSObject <SCDataCoordinating>
{
    SCDataCoordinatorListenerAnnouncer *_dataCoordinatorListenerAnnouncer;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCUserSession *_userSession;
}

+ (id)announcerIdentifier;
+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_announceUpdateWithDataRequest:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)handleDataRequest:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (void)removeDataUpdateListener:(id)arg1;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

