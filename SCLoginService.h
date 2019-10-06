//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLoginService-Protocol.h"

@class NSString, SCLogger, SCSessionRequestManager;
@protocol SCDeviceCheckTokenFetching, SCTransitionMomentLogger;

@interface SCLoginService : NSObject <SCLoginService>
{
    SCSessionRequestManager *_requestManager;
    SCLogger *_logger;
    id <SCTransitionMomentLogger> _transitionMomentLogger;
    id <SCDeviceCheckTokenFetching> _deviceCheckManager;
}

- (void).cxx_destruct;
- (id)_formatLoginParameter:(id)arg1;
- (id)_makeLoginPayloadWithUsernameOrEmail:(id)arg1 password:(id)arg2 preAuthToken:(id)arg3 twoFAMethod:(int)arg4 odlvPreAuthToken:(id)arg5 otpType:(long long)arg6 confirmReactivation:(_Bool)arg7 fromDeepLink:(_Bool)arg8 rememberDevice:(id)arg9 fideliusClientInit:(id)arg10 deviceCheckToken:(id)arg11;
- (void)complete2FALogInWithUsernameOrEmail:(id)arg1 confirmationCode:(id)arg2 twoFAPreAuthToken:(id)arg3 rememberDevice:(_Bool)arg4 twoFAMethod:(int)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)initWithRequestManager:(id)arg1 logger:(id)arg2 deviceCheckManager:(id)arg3;
- (id)initWithRequestManager:(id)arg1 logger:(id)arg2 transitionMomentLogger:(id)arg3 deviceCheckManager:(id)arg4;
- (void)logInWithOdlvChallenge:(id)arg1 solution:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)logInWithUsername:(id)arg1 password:(id)arg2 confirmReactivation:(_Bool)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)loginWithUsernameOrEmail:(id)arg1 password:(id)arg2 preAuthToken:(id)arg3 twoFAMethod:(int)arg4 odlvPreAuthToken:(id)arg5 otpType:(long long)arg6 confirmReactivation:(_Bool)arg7 rememberDevice:(_Bool)arg8 fromDeepLink:(_Bool)arg9 fideliusClientInit:(id)arg10 successBlock:(CDUnknownBlockType)arg11 failureBlock:(CDUnknownBlockType)arg12;
- (void)warmUserPreLogin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
