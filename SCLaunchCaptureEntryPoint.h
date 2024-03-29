//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCScopeExposer, SCServicesExposer;

@interface SCLaunchCaptureEntryPoint : SCEntryPoint
{
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCServicesExposer *_launchCaptureServicesExposer;
    SCScopeExposer *_captureScopeExposer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
- (void)begin;
@property(retain, nonatomic) SCScopeExposer *captureScopeExposer; // @synthesize captureScopeExposer=_captureScopeExposer;
@property(retain, nonatomic) SCServicesExposer *launchCaptureServicesExposer; // @synthesize launchCaptureServicesExposer=_launchCaptureServicesExposer;

@end

