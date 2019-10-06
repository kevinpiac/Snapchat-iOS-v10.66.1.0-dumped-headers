//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCAuthenticatedPhoneManager, SCLoginRegisterFlowContext, SCUserSession, SOJULoginResponse;
@protocol SCAbuseWarningWorkflowDelegate, SCLegacyLogInOdlvLandingPage, SCLegacyLogInOdlvLandingUserActionDelegate, SCLegacyLogInOdlvVerifyingPage, SCLegacyLogInOdlvVerifyingUserActionDelegate, SCLegacyLogInPage, SCLegacyLogInReactivationUserActionDelegate, SCLegacyLogInTwoFAPage, SCLegacyLogInTwoFAUserActionDelegate, SCLegacyLogInUserActionDelegate, SCMemoriesSyncAlertUserActionDelegate, SCUnauthenticatedTwoFAService;

@protocol SCLegacyLogInPageRouter <NSObject>
- (void)dimissToLoginPage;
- (void)dismissAbuseWarning;
- (void)dismissLoginPage;
- (void)presentRegisterEmailViewController:(SCUserSession *)arg1;
- (void)presentRegisterPhoneViewController:(SCUserSession *)arg1 authenticatedPhoneManager:(SCAuthenticatedPhoneManager *)arg2;
- (void)showAbuseWarningWithId:(NSString *)arg1 message:(NSString *)arg2 delegate:(id <SCAbuseWarningWorkflowDelegate>)arg3;
- (id <SCLegacyLogInPage>)showLoginPageWithUserActionDelegate:(id <SCLegacyLogInUserActionDelegate>)arg1 flowContext:(SCLoginRegisterFlowContext *)arg2;
- (void)showLoginReactivationConfirmationMessage:(NSString *)arg1 uerActionDelegate:(id <SCLegacyLogInReactivationUserActionDelegate>)arg2;
- (void)showLoginReactivationMessage:(NSString *)arg1;
- (void)showMemoriesPendingSyncAlertWithUserActionDelegate:(id <SCMemoriesSyncAlertUserActionDelegate>)arg1 usernameOrEmail:(NSString *)arg2 lastMatchingUserData:(NSString *)arg3;
- (id <SCLegacyLogInOdlvLandingPage>)showOdlvLandingWithLoginResponse:(SOJULoginResponse *)arg1 userActionDelegate:(id <SCLegacyLogInOdlvLandingUserActionDelegate>)arg2;
- (id <SCLegacyLogInOdlvVerifyingPage>)showOdlvVerifyingWithOtpTypeSelected:(long long)arg1 ObfuscatedContact:(NSString *)arg2 userActionDelegate:(id <SCLegacyLogInOdlvVerifyingUserActionDelegate>)arg3;
- (id <SCLegacyLogInTwoFAPage>)showTwoFAWithLoginResponse:(SOJULoginResponse *)arg1 userActionDelegate:(id <SCLegacyLogInTwoFAUserActionDelegate>)arg2 unauthenticatedTwoFAService:(id <SCUnauthenticatedTwoFAService>)arg3;
@end

