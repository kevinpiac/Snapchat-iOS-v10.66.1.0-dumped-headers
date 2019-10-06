//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCCircumstanceEngineServices, SCDiscoverFeedLegacyServices, SCNetworkImageServices, SCServicesExposer, SCUserSessionScope;

@interface SCDiscoverBackgroundPrefetcherEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCDiscoverFeedLegacyServices *_discoverFeedLegacyServices;
    SCCircumstanceEngineServices *_circumstanceEngineServices;
    SCNetworkImageServices *_networkImageServices;
    SCServicesExposer *_discoverBackgroundPrefetchServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
@property(nonatomic) __weak SCCircumstanceEngineServices *circumstanceEngineServices; // @synthesize circumstanceEngineServices=_circumstanceEngineServices;
@property(retain, nonatomic) SCServicesExposer *discoverBackgroundPrefetchServicesExposer; // @synthesize discoverBackgroundPrefetchServicesExposer=_discoverBackgroundPrefetchServicesExposer;
@property(nonatomic) __weak SCDiscoverFeedLegacyServices *discoverFeedLegacyServices; // @synthesize discoverFeedLegacyServices=_discoverFeedLegacyServices;
@property(nonatomic) __weak SCNetworkImageServices *networkImageServices; // @synthesize networkImageServices=_networkImageServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end

