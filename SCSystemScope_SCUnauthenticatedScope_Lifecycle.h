//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCScopeLifecycle.h"

@class SCServicesContainer;

@interface SCSystemScope_SCUnauthenticatedScope_Lifecycle : SCScopeLifecycle
{
    SCServicesContainer *_unauthenticatedScopeContainer;
    SCServicesContainer *_deviceCheckServicesContainer;
    SCServicesContainer *_logInServicesContainer;
    SCServicesContainer *_contactSyncPrePromptServiceContainer;
    SCServicesContainer *_unauthenticatedStorageServicesContainer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCServicesContainer *contactSyncPrePromptServiceContainer; // @synthesize contactSyncPrePromptServiceContainer=_contactSyncPrePromptServiceContainer;
- (void)createEntryPoints;
- (void)createLifecycleServicesContainers;
@property(readonly, nonatomic) SCServicesContainer *deviceCheckServicesContainer; // @synthesize deviceCheckServicesContainer=_deviceCheckServicesContainer;
- (id)externallyAccessibleServices;
@property(readonly, nonatomic) SCServicesContainer *logInServicesContainer; // @synthesize logInServicesContainer=_logInServicesContainer;
- (id)rootScopeContainer;
@property(readonly, nonatomic) SCServicesContainer *unauthenticatedScopeContainer; // @synthesize unauthenticatedScopeContainer=_unauthenticatedScopeContainer;
@property(readonly, nonatomic) SCServicesContainer *unauthenticatedStorageServicesContainer; // @synthesize unauthenticatedStorageServicesContainer=_unauthenticatedStorageServicesContainer;

@end

