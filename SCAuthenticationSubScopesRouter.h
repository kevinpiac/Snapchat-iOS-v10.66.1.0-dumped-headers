//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAuthenticationRouter-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCScopeExposer;

@interface SCAuthenticationSubScopesRouter : NSObject <SCTraceEnabled, SCAuthenticationRouter>
{
    SCScopeExposer *_userSessionScopeExposer;
    SCScopeExposer *_unauthenticatedScopeExposer;
    SCScopeExposer *_dataUnavailableScopeExposer;
}

- (void).cxx_destruct;
- (void)beginDataUnavailableWorkflowWithApplicationDataChecker:(id)arg1 delegate:(id)arg2;
- (void)beginUnauthenticatedWorkflowWithDelegate:(id)arg1;
- (void)beginUserSessionWorkflowWithUserSession:(id)arg1 userSessionContext:(id)arg2 delegate:(id)arg3;
- (void)endDataUnavailableWorkflow;
- (void)endUnauthenticatedWorkflow;
- (void)endUserSessionWorkflow:(id)arg1;
- (id)initWithUserSessionScopeExposer:(id)arg1 unauthenticatedScopeExposer:(id)arg2 dataUnavailableScopeExposer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

