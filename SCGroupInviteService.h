//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SCExperimentManager, SCGroupInviteStore, SCMapSnapTokenService, SCQueuePerformer;

@interface SCGroupInviteService : NSObject
{
    SCMapSnapTokenService *_snapTokenService;
    SCExperimentManager *_experimentManager;
    NSString *_currentUserId;
    SCQueuePerformer *_fetchQueue;
    NSMutableArray *_fetchCompletions;
    double _upcomingAndRecentInvitesLastFetchTime;
    _Bool _upcomingAndRecentInvitesFetchInProgress;
    _Bool _needsFetchAfterPendingFetchCompletes;
    SCGroupInviteStore *_store;
}

+ (id)DEMO_unauthenticatedService;
- (void).cxx_destruct;
- (void)_postGroupInviteToServer:(id)arg1 chatIntegration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateRSVPStatus:(unsigned long long)arg1 groupInviteId:(id)arg2 leave:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)contextBaseURL;
- (void)createGroupInvite:(id)arg1 chatIntegration:(id)arg2 forUsernames:(id)arg3 forGroups:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)didCreateGroupInviteViaProfile:(id)arg1 chatIntegration:(id)arg2 invitedUsernames:(id)arg3 invitedGroupIds:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchGroupInviteInfoForId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithMapSnapTokenService:(id)arg1 experimentManager:(id)arg2 currentUserId:(id)arg3;
- (void)leaveEvent:(id)arg1 chatIntegration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)legacy_joinGroupWithGroupInviteId:(id)arg1 mischiefInviteId:(id)arg2 groupId:(id)arg3 chatIntegration:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)refreshUpcomingAndRecentInvitesIfStaleWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshUpcomingAndRecentInvitesImmediatelyWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) SCGroupInviteStore *store; // @synthesize store=_store;
- (void)updateEventDetails:(id)arg1 currentUser:(id)arg2 chatIntegration:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateRSVPStatus:(unsigned long long)arg1 forGroupInviteId:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

