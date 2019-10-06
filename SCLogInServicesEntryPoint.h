//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCDeviceCheckServices, SCEntryPointCleanup, SCIdentityLoggerServices, SCLazy, SCServicesExposer, SCUnauthenticatedScope;

@interface SCLogInServicesEntryPoint : SCEntryPoint
{
    SCEntryPointCleanup *_cleanup;
    SCLazy *_lazyLoginService;
    SCLazy *_lazyOdlvService;
    SCLazy *_lazyTwoFAService;
    SCUnauthenticatedScope *_unauthenticatedScope;
    SCIdentityLoggerServices *_identityLoggerServices;
    SCDeviceCheckServices *_deviceCheckServices;
    SCServicesExposer *_logInServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
@property(nonatomic) __weak SCDeviceCheckServices *deviceCheckServices; // @synthesize deviceCheckServices=_deviceCheckServices;
@property(nonatomic) __weak SCIdentityLoggerServices *identityLoggerServices; // @synthesize identityLoggerServices=_identityLoggerServices;
@property(retain, nonatomic) SCServicesExposer *logInServicesExposer; // @synthesize logInServicesExposer=_logInServicesExposer;
@property(nonatomic) __weak SCUnauthenticatedScope *unauthenticatedScope; // @synthesize unauthenticatedScope=_unauthenticatedScope;

@end
