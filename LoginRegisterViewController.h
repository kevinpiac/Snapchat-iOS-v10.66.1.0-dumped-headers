//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCPageNameLogging-Protocol.h"
#import "SCRegistrationUserActionDelegate-Protocol.h"

@class NSString, SCRegisterService, SCScopedAccess, SCUserSession, UIButton, UIImageView;
@protocol SCLoginRegisterUserActionDelegate;

@interface LoginRegisterViewController : UIViewController <SCRegistrationUserActionDelegate, SCPageNameLogging>
{
    SCRegisterService *_registerService;
    SCUserSession *_abandonedUserSession;
    UIImageView *_ghostImageView;
    UIButton *_snapchatterButton;
    id <SCLoginRegisterUserActionDelegate> _userActionDelegate;
    SCScopedAccess *_scopedPreferences;
    SCScopedAccess *_signupStateTransitionLogger;
    SCScopedAccess *_loginStateTransitionLogger;
}

- (void).cxx_destruct;
- (void)_beginQuickLoginIfPossible_INTERNAL_ONLY;
- (void)addObservers;
- (void)dealloc;
- (void)didDismissRegistration;
- (void)didTapSwitchToLoginButton;
- (void)handleRegistration;
- (id)initWithRegisterService:(id)arg1 userActionDelegate:(id)arg2 abandonedUserSession:(id)arg3;
- (void)keyboardDidShow:(id)arg1;
- (void)loadView;
- (void)newMemberButtonClicked;
- (id)pageViewName;
- (void)registrationViewDidDeallocate;
- (void)removeObservers;
- (void)snapchatterButtonClicked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willEnterForeground:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

