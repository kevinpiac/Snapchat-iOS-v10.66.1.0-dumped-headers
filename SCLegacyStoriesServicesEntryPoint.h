//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAppUserLifecycleEventHandler, SCAuthenticatedNetworkServices, SCCustomStoriesServices, SCEntryPointCleanup, SCGroupServices, SCLegacySnapchatterServices, SCNetworkImageServices, SCPostableStoriesServices, SCServicesExposer, SCSnapchatterServices, SCStories, SCStoriesMetricServices, SCStoriesNetworkingServices, SCStoriesServices, SCStoriesSnapDeletionStatePrompter, SCStoriesUnarchiver, SCSystemScope, SCUserSessionScope, SCUserStorageServices;

@interface SCLegacyStoriesServicesEntryPoint : SCEntryPoint
{
    SCEntryPointCleanup *_cleanup;
    SCStories *_stories;
    SCStoriesUnarchiver *_storiesUnarchiver;
    SCAppUserLifecycleEventHandler *_appUserLifecycleEventHandler;
    SCStoriesSnapDeletionStatePrompter *_snapDeletionStatePrompt;
    SCSystemScope *_systemScope;
    SCAuthenticatedNetworkServices *_authenticatedNetworkServices;
    SCUserSessionScope *_userSessionScope;
    SCUserStorageServices *_userStorageServices;
    SCPostableStoriesServices *_postableStoriesServices;
    SCStoriesServices *_storiesServices;
    SCStoriesMetricServices *_storiesMetricServices;
    SCStoriesNetworkingServices *_storiesNetworkingServices;
    SCSnapchatterServices *_snapchatterServices;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCGroupServices *_groupServices;
    SCNetworkImageServices *_networkImageServices;
    SCCustomStoriesServices *_customStoriesServices;
    SCServicesExposer *_storiesServicesExposer;
}

- (void).cxx_destruct;
- (id)_createLegacyCustomStoriesDataFetcher;
- (id)_createLegacyMyStoriesDataCoordinatorWithStories:(id)arg1;
@property(nonatomic) __weak SCAuthenticatedNetworkServices *authenticatedNetworkServices; // @synthesize authenticatedNetworkServices=_authenticatedNetworkServices;
- (void)begin;
@property(nonatomic) __weak SCCustomStoriesServices *customStoriesServices; // @synthesize customStoriesServices=_customStoriesServices;
- (id)end;
@property(nonatomic) __weak SCGroupServices *groupServices; // @synthesize groupServices=_groupServices;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCNetworkImageServices *networkImageServices; // @synthesize networkImageServices=_networkImageServices;
@property(nonatomic) __weak SCPostableStoriesServices *postableStoriesServices; // @synthesize postableStoriesServices=_postableStoriesServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCStoriesMetricServices *storiesMetricServices; // @synthesize storiesMetricServices=_storiesMetricServices;
@property(nonatomic) __weak SCStoriesNetworkingServices *storiesNetworkingServices; // @synthesize storiesNetworkingServices=_storiesNetworkingServices;
@property(nonatomic) __weak SCStoriesServices *storiesServices; // @synthesize storiesServices=_storiesServices;
@property(retain, nonatomic) SCServicesExposer *storiesServicesExposer; // @synthesize storiesServicesExposer=_storiesServicesExposer;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;

@end
