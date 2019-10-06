//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCContentDeliveryServices, SCLegacySnapchatterServices, SCServicesExposer, SCUserSessionScope, SCUserStorageServices;

@interface SCBloopsServicesEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCUserStorageServices *_userStorageServices;
    SCContentDeliveryServices *_contentDeliveryServices;
    SCServicesExposer *_bloopsServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
@property(retain, nonatomic) SCServicesExposer *bloopsServicesExposer; // @synthesize bloopsServicesExposer=_bloopsServicesExposer;
@property(nonatomic) __weak SCContentDeliveryServices *contentDeliveryServices; // @synthesize contentDeliveryServices=_contentDeliveryServices;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;

@end
