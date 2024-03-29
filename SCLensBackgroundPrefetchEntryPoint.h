//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCCircumstanceEngineServices, SCServicesExposer, SCUserSessionScope;

@interface SCLensBackgroundPrefetchEntryPoint : SCEntryPoint <SCTraceEnabled>
{
    SCUserSessionScope *_userSessionScope;
    SCCircumstanceEngineServices *_circumstanceEngineServices;
    SCServicesExposer *_lensBackgroundPrefetchServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
@property(nonatomic) __weak SCCircumstanceEngineServices *circumstanceEngineServices; // @synthesize circumstanceEngineServices=_circumstanceEngineServices;
@property(retain, nonatomic) SCServicesExposer *lensBackgroundPrefetchServicesExposer; // @synthesize lensBackgroundPrefetchServicesExposer=_lensBackgroundPrefetchServicesExposer;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

