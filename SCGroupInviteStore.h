//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet;

@interface SCGroupInviteStore : NSObject
{
    NSDictionary *_groupInvitesById;
    NSArray *_recentAndUpcomingInviteIds;
}

- (void).cxx_destruct;
- (void)_postInviteIDsChangedNotification;
- (void)didLeaveInvite:(id)arg1;
- (void)didLeaveInviteWithId:(id)arg1;
@property(readonly, nonatomic) NSSet *eventGroupIds;
- (id)init;
- (id)inviteByGroupId:(id)arg1;
- (id)inviteById:(id)arg1;
- (void)storeInviteWithFullDetails:(id)arg1 isJoinedOrCreated:(_Bool)arg2;
- (void)storeUpcomingAndRecentInvitesResponse:(id)arg1;
@property(readonly, nonatomic) NSArray *upcomingAndRecentGroupInvites;

@end

