//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCLogout, SCUserSession, SCUserVerificationResult, SOJULoginResponse;

@protocol SCLegacyAuthFlowProxy
- (void)authenticatedWithActiveUserSession:(SCUserSession *)arg1 isNewRegistration:(_Bool)arg2;
- (void)loginDidSucceedWithResponse:(SOJULoginResponse *)arg1 directUserSession:(SCUserSession *)arg2;
- (void)loginDidSucceedWithVerificationNeeded:(SOJULoginResponse *)arg1;
- (void)logout:(SCLogout *)arg1;
- (void)registerDidSucceedWithResponse:(SOJULoginResponse *)arg1 directUserSession:(SCUserSession *)arg2;
- (void)userVerificationDidSucceedWithResult:(SCUserVerificationResult *)arg1 directUserSession:(SCUserSession *)arg2;
@end

