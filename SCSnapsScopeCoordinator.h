//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCServicesExposer, SCUserStorageServices;

@interface SCSnapsScopeCoordinator : SCEntryPoint
{
    SCUserStorageServices *_userStorageServices;
    SCServicesExposer *_snapServicesExposer;
}

- (void).cxx_destruct;
- (id)_snapViewCache;
- (void)begin;
@property(retain, nonatomic) SCServicesExposer *snapServicesExposer; // @synthesize snapServicesExposer=_snapServicesExposer;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;

@end

