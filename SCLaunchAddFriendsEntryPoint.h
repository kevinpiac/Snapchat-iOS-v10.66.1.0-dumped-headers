//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCScopeExposer, SCServicesExposer;

@interface SCLaunchAddFriendsEntryPoint : SCEntryPoint
{
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCServicesExposer *_launchAddFriendsServicesExposer;
    SCScopeExposer *_addFriendsScopeExposer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
@property(retain, nonatomic) SCScopeExposer *addFriendsScopeExposer; // @synthesize addFriendsScopeExposer=_addFriendsScopeExposer;
- (void)begin;
@property(retain, nonatomic) SCServicesExposer *launchAddFriendsServicesExposer; // @synthesize launchAddFriendsServicesExposer=_launchAddFriendsServicesExposer;

@end
