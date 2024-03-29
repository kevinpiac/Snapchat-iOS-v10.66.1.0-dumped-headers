//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAuthenticatedNetworkServices, SCContentDeliveryServices, SCEntryPointCleanup, SCLazy, SCServicesExposer, SCSnapchatterServices, SCStoriesAppLifecycleResponder, SCStoriesMediaStateUpdateMonitor, SCStoriesMetricServices, SCStoriesNetworkingServices, SCStoriesSnapReadReceiptService, SCUserSessionScope, SCUserStorageServices;

@interface SCStoriesServicesEntryPoint : SCEntryPoint
{
    SCStoriesAppLifecycleResponder *_storiesApplifecycleResponder;
    SCStoriesMediaStateUpdateMonitor *_storiesMediaAndMetadataSynchronizer;
    SCEntryPointCleanup *_cleanup;
    SCLazy *_storiesMediaDocumentStore;
    SCUserSessionScope *_userSessionScope;
    SCAuthenticatedNetworkServices *_authenticatedNetworkServices;
    SCUserStorageServices *_userStorageServices;
    SCContentDeliveryServices *_contentDeliveryServices;
    SCSnapchatterServices *_snapchatterServices;
    SCStoriesMetricServices *_storiesMetricServices;
    SCStoriesNetworkingServices *_storiesNetworkingServices;
    SCStoriesSnapReadReceiptService *_storiesSnapReadReceiptService;
    SCServicesExposer *_storiesDataServicesExposer;
}

- (void).cxx_destruct;
- (id)_createDocumentStore;
- (id)_createMediaStore;
- (id)_createMyStoriesDataCoordinatorWithStoriesViewerListCoordinator:(id)arg1;
- (id)_createMyStoriesMediaCoordinatorWithMediaStore:(id)arg1 thumbnailCoordinator:(id)arg2;
- (id)_createPlaybackSequenceProvider;
- (id)_createStoriesMediaCoordinatorWithMediaStore:(id)arg1 thumbnailCoordinator:(id)arg2 lazyDataCoordinator:(id)arg3;
- (id)_createStoriesPlaybackDataProviderWithDataCoordinator:(id)arg1;
- (id)_createStoriesPlaybackFetcherWithDataCoordinator:(id)arg1 summaryInfoProvider:(id)arg2;
- (id)_createStoriesPlaybackSummaryInfoProviderWithSummaryInfoProvider:(id)arg1;
- (id)_createStoriesSummaryInfoDataProvider;
- (id)_createStoriesViewerListDataCoordinator;
- (id)_createThumbnailCoordinator;
@property(nonatomic) __weak SCAuthenticatedNetworkServices *authenticatedNetworkServices; // @synthesize authenticatedNetworkServices=_authenticatedNetworkServices;
- (void)begin;
@property(nonatomic) __weak SCContentDeliveryServices *contentDeliveryServices; // @synthesize contentDeliveryServices=_contentDeliveryServices;
- (id)end;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(retain, nonatomic) SCServicesExposer *storiesDataServicesExposer; // @synthesize storiesDataServicesExposer=_storiesDataServicesExposer;
@property(nonatomic) __weak SCStoriesMetricServices *storiesMetricServices; // @synthesize storiesMetricServices=_storiesMetricServices;
@property(nonatomic) __weak SCStoriesNetworkingServices *storiesNetworkingServices; // @synthesize storiesNetworkingServices=_storiesNetworkingServices;
@property(nonatomic) __weak SCStoriesSnapReadReceiptService *storiesSnapReadReceiptService; // @synthesize storiesSnapReadReceiptService=_storiesSnapReadReceiptService;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;

@end

