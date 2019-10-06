//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCIdentityLoggerServices, SCLegacyLogInScope, SCLegacyLogInWorkflow, SCLogInServices, SCScopeExposer;

@interface SCLegacyLogInEntryPoint : SCEntryPoint
{
    SCLegacyLogInWorkflow *_loginWorkflow;
    SCLegacyLogInScope *_loginScope;
    SCIdentityLoggerServices *_identifyLoggerServices;
    SCLogInServices *_logInServices;
    SCScopeExposer *_abuseWarningScopeExposer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCScopeExposer *abuseWarningScopeExposer; // @synthesize abuseWarningScopeExposer=_abuseWarningScopeExposer;
- (void)begin;
@property(nonatomic) __weak SCIdentityLoggerServices *identifyLoggerServices; // @synthesize identifyLoggerServices=_identifyLoggerServices;
@property(nonatomic) __weak SCLogInServices *logInServices; // @synthesize logInServices=_logInServices;
@property(nonatomic) __weak SCLegacyLogInScope *loginScope; // @synthesize loginScope=_loginScope;

@end

