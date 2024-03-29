//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAddFriendsScope, SCLegacySnapchatterServices, SCNetworkImageServices, SCServicesExposer, SCSnapchatterServices, SCUserSessionScope;

@interface SCAddFriendsSectionGeneratorServicesEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCSnapchatterServices *_snapchatterServices;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCNetworkImageServices *_networkImageServices;
    SCAddFriendsScope *_addFriendsScope;
    SCServicesExposer *_addFriendsSectionGeneratorServicesExposer;
}

- (void).cxx_destruct;
- (id)_contactSnapchatterSection;
- (id)_inviteToSnapchatSection;
- (id)_shareMySnapcodeSection;
@property(nonatomic) __weak SCAddFriendsScope *addFriendsScope; // @synthesize addFriendsScope=_addFriendsScope;
@property(retain, nonatomic) SCServicesExposer *addFriendsSectionGeneratorServicesExposer; // @synthesize addFriendsSectionGeneratorServicesExposer=_addFriendsSectionGeneratorServicesExposer;
- (void)begin;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCNetworkImageServices *networkImageServices; // @synthesize networkImageServices=_networkImageServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end

