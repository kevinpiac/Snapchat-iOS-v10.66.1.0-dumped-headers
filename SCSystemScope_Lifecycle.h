//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCScopeLifecycle.h"

@class SCServicesContainer;

@interface SCSystemScope_Lifecycle : SCScopeLifecycle
{
    SCServicesContainer *_systemScopeContainer;
    SCServicesContainer *_attributionServicesContainer;
    SCServicesContainer *_retrySignalAnnouncerServicesContainer;
    SCServicesContainer *_autoRetryBackgroundPrefetchServicesContainer;
    SCServicesContainer *_oneTapLoginServicesContainer;
    SCServicesContainer *_crashAttributionServicesContainer;
    SCServicesContainer *_audioServicesContainer;
    SCServicesContainer *_identityLoggerServicesContainer;
    SCServicesContainer *_applicationStorageServicesContainer;
    SCServicesContainer *_systemNetworkServicesContainer;
    SCServicesContainer *_registrationDeviceInfoServicesContainer;
    SCServicesContainer *_internalQuickLoginServicesContainer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCServicesContainer *applicationStorageServicesContainer; // @synthesize applicationStorageServicesContainer=_applicationStorageServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *attributionServicesContainer; // @synthesize attributionServicesContainer=_attributionServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *audioServicesContainer; // @synthesize audioServicesContainer=_audioServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *autoRetryBackgroundPrefetchServicesContainer; // @synthesize autoRetryBackgroundPrefetchServicesContainer=_autoRetryBackgroundPrefetchServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *crashAttributionServicesContainer; // @synthesize crashAttributionServicesContainer=_crashAttributionServicesContainer;
- (void)createEntryPoints;
- (void)createLifecycleServicesContainers;
- (id)externallyAccessibleServices;
@property(readonly, nonatomic) SCServicesContainer *identityLoggerServicesContainer; // @synthesize identityLoggerServicesContainer=_identityLoggerServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *internalQuickLoginServicesContainer; // @synthesize internalQuickLoginServicesContainer=_internalQuickLoginServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *oneTapLoginServicesContainer; // @synthesize oneTapLoginServicesContainer=_oneTapLoginServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *registrationDeviceInfoServicesContainer; // @synthesize registrationDeviceInfoServicesContainer=_registrationDeviceInfoServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *retrySignalAnnouncerServicesContainer; // @synthesize retrySignalAnnouncerServicesContainer=_retrySignalAnnouncerServicesContainer;
- (id)rootScopeContainer;
@property(readonly, nonatomic) SCServicesContainer *systemNetworkServicesContainer; // @synthesize systemNetworkServicesContainer=_systemNetworkServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *systemScopeContainer; // @synthesize systemScopeContainer=_systemScopeContainer;

@end

