//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinating-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSString, SCDataCoordinatorListenerAnnouncer, SCLazy;

@interface SCFriendsFeedSnapchatterUpdatesDataCoordinator : NSObject <SCDataCoordinating, SCSnapchattersDataRequestListener>
{
    SCLazy *_docObjectContext;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_announceSnapchatterUpdate;
- (void)_didRemoveOrBlockUserId:(id)arg1 username:(id)arg2;
- (void)addDataUpdateListener:(id)arg1;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)handleDataRequest:(id)arg1;
- (id)initWithDocObjectContext:(id)arg1;
- (void)removeDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

