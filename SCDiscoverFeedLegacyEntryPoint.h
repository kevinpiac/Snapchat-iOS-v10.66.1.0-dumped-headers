//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCDiscoverFeedBaseServices, SCDiscoverFeedExtensionServices, SCDiscoverFeedFriendsSectionLegacyServices, SCDiscoverFeedNetworkingServices, SCDiscoverFeedStoriesServices, SCServicesExposer, SCUserSessionScope, SCUserStorageServices;

@interface SCDiscoverFeedLegacyEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCUserStorageServices *_userStorageService;
    SCDiscoverFeedStoriesServices *_storiesServices;
    SCDiscoverFeedBaseServices *_discoverFeedBaseService;
    SCDiscoverFeedExtensionServices *_extensionServices;
    SCDiscoverFeedNetworkingServices *_discoverFeedNetworkingServices;
    SCDiscoverFeedFriendsSectionLegacyServices *_friendsSectionLegacyServices;
    SCServicesExposer *_discoverFeedLegacyServices;
}

- (void).cxx_destruct;
- (id)_createDFRanker;
- (id)_createDataStore;
- (id)_createEventController;
- (id)_createPrefetchHandlerWithEndpointManager:(id)arg1 lazyDynamicLayoutQueryCoordinator:(id)arg2;
- (id)_createQueryCoordinatorWithEndpointManager:(id)arg1;
- (void)begin;
@property(nonatomic) __weak SCDiscoverFeedBaseServices *discoverFeedBaseService; // @synthesize discoverFeedBaseService=_discoverFeedBaseService;
@property(retain, nonatomic) SCServicesExposer *discoverFeedLegacyServices; // @synthesize discoverFeedLegacyServices=_discoverFeedLegacyServices;
@property(nonatomic) __weak SCDiscoverFeedNetworkingServices *discoverFeedNetworkingServices; // @synthesize discoverFeedNetworkingServices=_discoverFeedNetworkingServices;
@property(nonatomic) __weak SCDiscoverFeedExtensionServices *extensionServices; // @synthesize extensionServices=_extensionServices;
@property(nonatomic) __weak SCDiscoverFeedFriendsSectionLegacyServices *friendsSectionLegacyServices; // @synthesize friendsSectionLegacyServices=_friendsSectionLegacyServices;
@property(nonatomic) __weak SCDiscoverFeedStoriesServices *storiesServices; // @synthesize storiesServices=_storiesServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageService; // @synthesize userStorageService=_userStorageService;

@end

