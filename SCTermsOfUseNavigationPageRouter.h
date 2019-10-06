//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTermsOfUsePageRouter-Protocol.h"

@class NSString, SCLogger, SCPrivacyPolicyViewController, SCTermsOfUseViewController, SCUserSession, UINavigationController;
@protocol SCOnboardingResourceDownloader;

@interface SCTermsOfUseNavigationPageRouter : NSObject <SCTermsOfUsePageRouter>
{
    SCUserSession *_userSession;
    UINavigationController *_navigationController;
    SCLogger *_logger;
    id <SCOnboardingResourceDownloader> _resourceDownloader;
    SCTermsOfUseViewController *_termsOfUseViewController;
    SCPrivacyPolicyViewController *_privacyPolicyViewController;
}

- (void).cxx_destruct;
- (void)dismissPrivacyPolicyPage;
- (void)dismissTermsOfUsePage;
- (id)initWithUserSession:(id)arg1 navigationController:(id)arg2 logger:(id)arg3 resourceDownloader:(id)arg4;
- (void)showPrivacyPolicyWithUserActionDelegate:(id)arg1;
- (void)showTermsOfUseV7WithUserActionDelegate:(id)arg1;
- (void)showTermsOfUseV8WithUserActionDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
