//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, SCDeepLinkURL, SCLoadingIndicatorView, SCUserSession;

@interface SCBitmojiAuthViewController : UIViewController
{
    SCDeepLinkURL *_authDeepLink;
    SCUserSession *_userSession;
    NSString *_approvalToken;
    SCLoadingIndicatorView *_loadingIndicator;
}

- (void).cxx_destruct;
- (void)_didConfirmAuthorization;
- (void)_didDenyAuthorization;
- (void)_goToBitmojiApp;
- (void)_goToBitmojiAppWithRedirectUri:(id)arg1 authCode:(id)arg2 state:(id)arg3;
- (void)_sendApprovalRequest;
- (void)_sendDenialRequest;
- (void)_showConfirmAuthorizationAlert;
- (void)_showErrorMessage:(id)arg1;
- (void)_verifyAuthRequest;
- (id)initWithAuthDeepLink:(id)arg1 userSession:(id)arg2;
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;

@end
