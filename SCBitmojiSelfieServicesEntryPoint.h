//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAuthenticatedNetworkServices, SCBitmojiFetchServices, SCLazy, SCLegacyUserServices, SCServicesExposer, SCUserSessionScope, SCUserStorageServices, SCUserUpdatesServices;

@interface SCBitmojiSelfieServicesEntryPoint : SCEntryPoint
{
    SCLazy *_lazySelfieProvider;
    SCLazy *_lazySelfieManager;
    SCAuthenticatedNetworkServices *_authenticatedNetworkServices;
    SCBitmojiFetchServices *_bitmojiFetchServices;
    SCUserSessionScope *_userSessionScope;
    SCUserStorageServices *_userStorageServices;
    SCUserUpdatesServices *_userUpdatesServices;
    SCLegacyUserServices *_legacyUserServices;
    SCServicesExposer *_bitmojiSelfieServicesExposer;
}

- (void).cxx_destruct;
- (id)_legacySelfieProvider;
- (id)_newSelfieProvider;
- (id)_selfieManager;
- (id)_selfieProvider;
@property(nonatomic) __weak SCAuthenticatedNetworkServices *authenticatedNetworkServices; // @synthesize authenticatedNetworkServices=_authenticatedNetworkServices;
- (void)begin;
@property(nonatomic) __weak SCBitmojiFetchServices *bitmojiFetchServices; // @synthesize bitmojiFetchServices=_bitmojiFetchServices;
@property(retain, nonatomic) SCServicesExposer *bitmojiSelfieServicesExposer; // @synthesize bitmojiSelfieServicesExposer=_bitmojiSelfieServicesExposer;
@property(nonatomic) __weak SCLegacyUserServices *legacyUserServices; // @synthesize legacyUserServices=_legacyUserServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
@property(nonatomic) __weak SCUserUpdatesServices *userUpdatesServices; // @synthesize userUpdatesServices=_userUpdatesServices;

@end
