//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCServicesExposer, SCUserSessionScope, SCUserStorageServices;

@interface SCCircumstanceEngineServicesEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCUserStorageServices *_userStorageServices;
    SCServicesExposer *_circumstanceEngineServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
@property(retain, nonatomic) SCServicesExposer *circumstanceEngineServicesExposer; // @synthesize circumstanceEngineServicesExposer=_circumstanceEngineServicesExposer;
- (id)end;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;

@end

