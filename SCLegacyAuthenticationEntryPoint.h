//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCApplicationStorageServices, SCAuthenticationWorkflow, SCIdentityLoggerServices, SCScopeExposer, SCSystemScope;

@interface SCLegacyAuthenticationEntryPoint : SCEntryPoint <SCTraceEnabled>
{
    SCAuthenticationWorkflow *_authenticationWorkflow;
    SCSystemScope *_systemScope;
    SCApplicationStorageServices *_applicationStorageServices;
    SCIdentityLoggerServices *_identityLoggerServices;
    SCScopeExposer *_userSessionScopeExposer;
    SCScopeExposer *_unauthenticatedScopeExposer;
    SCScopeExposer *_dataUnavailableScopeExposer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SCApplicationStorageServices *applicationStorageServices; // @synthesize applicationStorageServices=_applicationStorageServices;
- (void)begin;
@property(retain, nonatomic) SCScopeExposer *dataUnavailableScopeExposer; // @synthesize dataUnavailableScopeExposer=_dataUnavailableScopeExposer;
@property(nonatomic) __weak SCIdentityLoggerServices *identityLoggerServices; // @synthesize identityLoggerServices=_identityLoggerServices;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
@property(retain, nonatomic) SCScopeExposer *unauthenticatedScopeExposer; // @synthesize unauthenticatedScopeExposer=_unauthenticatedScopeExposer;
@property(retain, nonatomic) SCScopeExposer *userSessionScopeExposer; // @synthesize userSessionScopeExposer=_userSessionScopeExposer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

