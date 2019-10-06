//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAuthenticatedNetworkServices, SCCreatorSettingsService, SCDiscoverFeedBaseServices, SCDiscoverFeedDataServices, SCIdentityDataServices, SCLegacySnapchatterServices, SCNetworkImageServices, SCServicesExposer, SCStoriesServices, SCUserSessionScope, SCUserStorageServices;

@interface SCDiscoverFeedStoriesEntryPoint : SCEntryPoint
{
    SCIdentityDataServices *_identityDataServices;
    SCAuthenticatedNetworkServices *_authenticatedNetworkServices;
    SCUserStorageServices *_userStorageServices;
    SCStoriesServices *_storiesServices;
    SCUserSessionScope *_userSessionScope;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCNetworkImageServices *_networkImageServices;
    SCDiscoverFeedBaseServices *_discoverFeedBaseService;
    SCCreatorSettingsService *_creatorSettingService;
    SCDiscoverFeedDataServices *_discoverFeedDataServices;
    SCServicesExposer *_discoverFeedStoriesServicesExposer;
}

- (void).cxx_destruct;
- (id)_badgeTracker;
- (id)_sectionDataProviderWithFriendStoriesDataCoordinator:(id)arg1 replayManager:(id)arg2 badgeTracker:(id)arg3;
@property(nonatomic) __weak SCAuthenticatedNetworkServices *authenticatedNetworkServices; // @synthesize authenticatedNetworkServices=_authenticatedNetworkServices;
- (void)begin;
@property(nonatomic) __weak SCCreatorSettingsService *creatorSettingService; // @synthesize creatorSettingService=_creatorSettingService;
@property(nonatomic) __weak SCDiscoverFeedBaseServices *discoverFeedBaseService; // @synthesize discoverFeedBaseService=_discoverFeedBaseService;
@property(nonatomic) __weak SCDiscoverFeedDataServices *discoverFeedDataServices; // @synthesize discoverFeedDataServices=_discoverFeedDataServices;
@property(retain, nonatomic) SCServicesExposer *discoverFeedStoriesServicesExposer; // @synthesize discoverFeedStoriesServicesExposer=_discoverFeedStoriesServicesExposer;
@property(nonatomic) __weak SCIdentityDataServices *identityDataServices; // @synthesize identityDataServices=_identityDataServices;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCNetworkImageServices *networkImageServices; // @synthesize networkImageServices=_networkImageServices;
@property(nonatomic) __weak SCStoriesServices *storiesServices; // @synthesize storiesServices=_storiesServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;

@end
