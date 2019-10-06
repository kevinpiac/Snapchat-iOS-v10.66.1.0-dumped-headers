//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCLegacyUserServices, SCServicesExposer, SCUserSessionScope, SCUserStorageServices, SCUserUpdatesServices;

@interface SCBlizzardUserTokenEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCUserStorageServices *_userStorageServices;
    SCUserUpdatesServices *_userUpdatesServices;
    SCLegacyUserServices *_legacyUserServices;
    SCServicesExposer *_userTokenServicesExposer;
}

- (void).cxx_destruct;
- (id)_tokenProvider;
- (void)begin;
@property(nonatomic) __weak SCLegacyUserServices *legacyUserServices; // @synthesize legacyUserServices=_legacyUserServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
@property(retain, nonatomic) SCServicesExposer *userTokenServicesExposer; // @synthesize userTokenServicesExposer=_userTokenServicesExposer;
@property(nonatomic) __weak SCUserUpdatesServices *userUpdatesServices; // @synthesize userUpdatesServices=_userUpdatesServices;

@end

