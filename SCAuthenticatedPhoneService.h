//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAuthenticatedPhoneService-Protocol.h"

@class SCSessionRequestManager, SCUpdatePhoneNumberParser, SCVerifyPhoneNumberParser;

@interface SCAuthenticatedPhoneService : NSObject <SCAuthenticatedPhoneService>
{
    SCSessionRequestManager *_requestManager;
    SCUpdatePhoneNumberParser *_updatePhoneNumberParser;
    SCVerifyPhoneNumberParser *_verifyPhoneNumberParser;
}

- (void).cxx_destruct;
- (id)initWithRequestManager:(id)arg1;
- (id)phoneVerifyContextToString:(long long)arg1;
- (void)updatePhoneNumber:(id)arg1 countryCode:(id)arg2 phoneCall:(_Bool)arg3 reverified:(_Bool)arg4 isResetPassword:(_Bool)arg5 phoneVerifyContext:(long long)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)verifyPhoneWithCode:(id)arg1 shouldSkipConfirmation:(_Bool)arg2 resetPasswordInApp:(_Bool)arg3 phoneVerifyContext:(long long)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;

@end
