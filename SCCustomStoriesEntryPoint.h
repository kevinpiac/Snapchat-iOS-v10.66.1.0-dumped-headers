//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCCustomStoriesGroupsUpdateHandler, SCEntryPointCleanup, SCGroupServices, SCServicesExposer, SCStoriesMetricServices, SCStoriesNetworkingServices, SCUserSessionScope, SCUserStorageServices;

@interface SCCustomStoriesEntryPoint : SCEntryPoint
{
    SCEntryPointCleanup *_cleanup;
    SCCustomStoriesGroupsUpdateHandler *_groupsUpdateHandler;
    SCUserSessionScope *_userSessionScope;
    SCUserStorageServices *_userStorageServices;
    SCGroupServices *_groupServices;
    SCStoriesNetworkingServices *_storiesNetworkingServices;
    SCStoriesMetricServices *_storiesMetricServices;
    SCServicesExposer *_customStoriesServicesExposer;
}

- (void).cxx_destruct;
- (id)_createCustomStoriesDataFetcher;
- (id)_createCustomStoriesDataMutator;
- (void)begin;
@property(retain, nonatomic) SCServicesExposer *customStoriesServicesExposer; // @synthesize customStoriesServicesExposer=_customStoriesServicesExposer;
@property(nonatomic) __weak SCGroupServices *groupServices; // @synthesize groupServices=_groupServices;
@property(nonatomic) __weak SCStoriesMetricServices *storiesMetricServices; // @synthesize storiesMetricServices=_storiesMetricServices;
@property(nonatomic) __weak SCStoriesNetworkingServices *storiesNetworkingServices; // @synthesize storiesNetworkingServices=_storiesNetworkingServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;

@end

