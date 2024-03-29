//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAddFriendsScope, SCServicesExposer, SCSnapchatterServices, SCUserSessionScope;

@interface SCPostRegAddFriendsServicesEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCAddFriendsScope *_addFriendsScope;
    SCSnapchatterServices *_snapchatterServices;
    SCServicesExposer *_postRegAddFriendsServicesExposer;
}

- (void).cxx_destruct;
- (id)_createAddFriendsMutator;
- (id)_createAddFriendsTracker;
@property(nonatomic) __weak SCAddFriendsScope *addFriendsScope; // @synthesize addFriendsScope=_addFriendsScope;
- (void)begin;
@property(retain, nonatomic) SCServicesExposer *postRegAddFriendsServicesExposer; // @synthesize postRegAddFriendsServicesExposer=_postRegAddFriendsServicesExposer;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end

