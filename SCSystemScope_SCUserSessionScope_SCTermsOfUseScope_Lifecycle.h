//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCScopeLifecycle.h"

@class SCServicesContainer;

@interface SCSystemScope_SCUserSessionScope_SCTermsOfUseScope_Lifecycle : SCScopeLifecycle
{
    SCServicesContainer *_termsOfUseScopeContainer;
}

- (void).cxx_destruct;
- (void)createEntryPoints;
- (void)createLifecycleServicesContainers;
- (id)externallyAccessibleServices;
- (id)rootScopeContainer;
@property(readonly, nonatomic) SCServicesContainer *termsOfUseScopeContainer; // @synthesize termsOfUseScopeContainer=_termsOfUseScopeContainer;

@end

