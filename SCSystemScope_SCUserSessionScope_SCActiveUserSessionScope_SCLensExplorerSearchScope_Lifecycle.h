//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCScopeLifecycle.h"

@class SCServicesContainer;

@interface SCSystemScope_SCUserSessionScope_SCActiveUserSessionScope_SCLensExplorerSearchScope_Lifecycle : SCScopeLifecycle
{
    SCServicesContainer *_lensExplorerSearchScopeContainer;
}

- (void).cxx_destruct;
- (void)createEntryPoints;
- (void)createLifecycleServicesContainers;
- (id)externallyAccessibleServices;
@property(readonly, nonatomic) SCServicesContainer *lensExplorerSearchScopeContainer; // @synthesize lensExplorerSearchScopeContainer=_lensExplorerSearchScopeContainer;
- (id)rootScopeContainer;

@end
