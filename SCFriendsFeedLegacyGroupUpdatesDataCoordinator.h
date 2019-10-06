//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinating-Protocol.h"
#import "SCGroupsDataRequestListener-Protocol.h"

@class NSString, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCLazy;
@protocol SCGroupsDataTracking;

@interface SCFriendsFeedLegacyGroupUpdatesDataCoordinator : NSObject <SCGroupsDataRequestListener, SCDataCoordinating>
{
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCDocObjectContext *_docObjectContext;
    SCLazy *_processorsLazy;
    SCLazy *_groupsDataFetcher;
    id <SCGroupsDataTracking> _groupsDataTracker;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_announceLegacyGroupUpdatesWithDataRequest:(id)arg1;
- (void)_didBeginLeavingGroupWithId:(id)arg1;
- (void)_didChangeInfoForGroupWithId:(id)arg1;
- (void)_didFinishLoadingGroups;
- (void)_processChangeGroupInfoWithGroupId:(id)arg1 transactionContext:(id)arg2;
- (void)_processChangeInfoWithGroup:(id)arg1 transactionContext:(id)arg2;
- (void)_processLeaveGroupWithId:(id)arg1 transactionContext:(id)arg2;
- (void)addDataUpdateListener:(id)arg1;
- (void)didUpdateGroupsDataRequest:(long long)arg1 groupId:(id)arg2;
- (void)handleDataRequest:(id)arg1;
- (id)initWithDocObjectContext:(id)arg1 groupsDataFetcher:(id)arg2 groupsDataTracker:(id)arg3;
- (void)removeDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
