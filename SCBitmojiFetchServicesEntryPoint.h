//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAuthenticatedNetworkServices, SCLazy, SCLegacyUserServices, SCServicesExposer, SCUserSessionScope, SCUserStorageServices, SCUserUpdatesServices;

@interface SCBitmojiFetchServicesEntryPoint : SCEntryPoint
{
    SCLazy *_lazyAvatarProvider;
    SCLazy *_lazyBitmojiManager;
    SCAuthenticatedNetworkServices *_authenticatedNetworkServices;
    SCUserSessionScope *_userSessionScope;
    SCUserStorageServices *_userStorageServices;
    SCUserUpdatesServices *_userUpdatesServices;
    SCLegacyUserServices *_legacyUserServices;
    SCServicesExposer *_bitmojiFetchServicesExposer;
}

- (void).cxx_destruct;
- (id)_avatarProvider;
- (id)_bitmojiManager;
- (id)_legacyAvatarProvider;
- (id)_newAvatarProvider;
- (id)_selfBitmojiCache;
@property(nonatomic) __weak SCAuthenticatedNetworkServices *authenticatedNetworkServices; // @synthesize authenticatedNetworkServices=_authenticatedNetworkServices;
- (void)begin;
@property(retain, nonatomic) SCServicesExposer *bitmojiFetchServicesExposer; // @synthesize bitmojiFetchServicesExposer=_bitmojiFetchServicesExposer;
- (id)end;
@property(nonatomic) __weak SCLegacyUserServices *legacyUserServices; // @synthesize legacyUserServices=_legacyUserServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
@property(nonatomic) __weak SCUserUpdatesServices *userUpdatesServices; // @synthesize userUpdatesServices=_userUpdatesServices;

@end

