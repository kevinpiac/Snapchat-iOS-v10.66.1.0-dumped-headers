//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAddFriendsScope, SCLegacySnapchatterServices, SCServicesExposer, SCUserSessionScope;

@interface SCLegacyAddFriendsShareMySnapcodeEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCAddFriendsScope *_addFriendsScope;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCServicesExposer *_shareMySnapcodeServicesExposer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SCAddFriendsScope *addFriendsScope; // @synthesize addFriendsScope=_addFriendsScope;
- (void)begin;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(retain, nonatomic) SCServicesExposer *shareMySnapcodeServicesExposer; // @synthesize shareMySnapcodeServicesExposer=_shareMySnapcodeServicesExposer;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end

