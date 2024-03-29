//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataUnavailableWorkflowDelegate-Protocol.h"
#import "SCUnauthenticatedWorkflowDelegate-Protocol.h"
#import "SCUserSessionWorkflowDelegate-Protocol.h"

@class NSString, SCLazy;
@protocol SCApplicationDataChecker, SCAuthenticationRouter, SCLegacyAuthFlowProxy, SCTransitionMomentLogger, SCUserSessionRepository;

@interface SCAuthenticationWorkflow : NSObject <SCDataUnavailableWorkflowDelegate, SCUnauthenticatedWorkflowDelegate, SCUserSessionWorkflowDelegate>
{
    id <SCApplicationDataChecker> _applicationDataChecker;
    id <SCUserSessionRepository> _userSessionRepository;
    id <SCLegacyAuthFlowProxy> _legacyAuthFlowProxy;
    id <SCAuthenticationRouter> _router;
    SCLazy *_deviceLevelABfetcher;
    id <SCTransitionMomentLogger> _transitionMomentLogger;
}

- (void).cxx_destruct;
- (void)_beginWorkflowWithUserSession:(id)arg1 context:(id)arg2;
- (void)_requestRegisterStudySettings;
- (void)_resumePreviousWorkflow;
- (void)beginWorkflow;
- (void)dataUnavailableWorkflowEndedWithDataAvailable;
- (id)initWithApplicationDataChecker:(id)arg1 userSessionRepository:(id)arg2 legacyAuthFlowProxy:(id)arg3 router:(id)arg4 deviceLevelABfetcher:(id)arg5 transitionMomentLogger:(id)arg6;
- (void)userCompletedLogInWithUserSession:(id)arg1 logInResponse:(id)arg2;
- (void)userCompletedRegistrationWithUserSession:(id)arg1 registrationResponse:(id)arg2;
- (void)userSessionEnded:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

