//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAuthenticatedNetworkServices, SCServicesExposer, SCUserSessionScope, SCUserStorageServices;

@interface SCFriendsFeedUFSServicesEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCAuthenticatedNetworkServices *_authenticatedNetworkServices;
    SCUserStorageServices *_userStorageServices;
    SCServicesExposer *_ufsServicesExposer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SCAuthenticatedNetworkServices *authenticatedNetworkServices; // @synthesize authenticatedNetworkServices=_authenticatedNetworkServices;
- (void)begin;
@property(retain, nonatomic) SCServicesExposer *ufsServicesExposer; // @synthesize ufsServicesExposer=_ufsServicesExposer;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;

@end
