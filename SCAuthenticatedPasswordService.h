//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCChangePasswordResponseParser, SCPasswordStrengthResponseParser, SCSessionRequestManager;

@interface SCAuthenticatedPasswordService : NSObject
{
    SCSessionRequestManager *_requestManager;
    SCChangePasswordResponseParser *_changePasswordResponseParser;
    SCPasswordStrengthResponseParser *_passwordStrengthResponseParser;
}

- (void).cxx_destruct;
- (void)_changePassword:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_changePasswordWithEndpoint:(id)arg1 parameters:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)_getpasswordStrengthWithEndpoint:(id)arg1 parameters:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)changePassword:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)getPasswordStrength:(id)arg1 quickCheck:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)initWithDefaultsAndRequestManager:(id)arg1;
- (id)initWithRequestManager:(id)arg1 changePasswordResponseParser:(id)arg2 passwordStrengthResponseParser:(id)arg3;

@end

