//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCUserSession;
@protocol SCPrivacyPolicyService, SCTermsOfUseService, SCTermsOfUseWorkflowDelegate;

@interface SCTermsOfUseScope : NSObject
{
    SCUserSession *_userSession;
    id <SCTermsOfUseService> _termsOfUseService;
    id <SCPrivacyPolicyService> _privacyPolicyService;
    id <SCTermsOfUseWorkflowDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SCTermsOfUseWorkflowDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithUserSession:(id)arg1 termsOfUseService:(id)arg2 privacyPolicyService:(id)arg3 termsOfUseWorkflowDelegate:(id)arg4;
@property(readonly, nonatomic) __weak id <SCPrivacyPolicyService> privacyPolicyService; // @synthesize privacyPolicyService=_privacyPolicyService;
@property(readonly, nonatomic) __weak id <SCTermsOfUseService> termsOfUseService; // @synthesize termsOfUseService=_termsOfUseService;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;

@end

