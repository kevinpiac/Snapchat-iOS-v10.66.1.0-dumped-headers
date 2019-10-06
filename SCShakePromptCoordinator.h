//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBTweakViewControllerDelegate-Protocol.h"
#import "SCBetaShakeReportViewControllerDelegate-Protocol.h"
#import "SCOperaShakeToReportOperator-Protocol.h"
#import "SCShakeReportDelegate-Protocol.h"

@class NSString, SCAlertView, SCEventListenerAnnouncer, SCLazy, SCOperaViewController, UIViewController, UIWindow;
@protocol SCShakeToReportExternalImageAttachmentProvider;

@interface SCShakePromptCoordinator : NSObject <FBTweakViewControllerDelegate, SCShakeReportDelegate, SCOperaShakeToReportOperator, SCBetaShakeReportViewControllerDelegate>
{
    _Bool _isOperaPresenterShowing;
    SCOperaViewController *_operaViewController;
    UIViewController *_topVC;
    UIWindow *_window;
    UIViewController *_presentingReportVC;
    SCAlertView *_alertView;
    SCLazy *_lazyEventAnnouncer;
    id <SCShakeToReportExternalImageAttachmentProvider> _externalImageAttachmentProvider;
}

+ (id)announcerIdentifier;
+ (id)sharedCoordinator;
- (void).cxx_destruct;
- (id)_betafeatureNames;
- (id)_defaultSubProjectName;
- (void)_displayExternalPrompt:(id)arg1 screenshot:(id)arg2 reportCreationTime:(long long)arg3;
- (void)_displayInternalPrompt:(id)arg1 shakeCaptureData:(id)arg2 reportCreationTime:(long long)arg3 configuration:(id)arg4;
- (void)_displayPrompt:(id)arg1 message:(id)arg2 actions:(id)arg3;
- (void)_exitShakePrompt;
- (id)_getDefaultProjectName;
- (id)_getJiraMetaInfo;
- (void)_handleBetaShakeWorkFlow;
- (void)_handleInternalShakeWorkFlow:(id)arg1;
- (void)_handleProdShakeWorkFlow;
- (_Bool)_isDisplayingReportView;
- (_Bool)_isDisplayingReportViewOrPrompt;
- (void)_launchBetaReportView:(id)arg1 screenshot:(id)arg2 time:(long long)arg3 mode:(long long)arg4;
- (void)_launchInternalReportView:(id)arg1 shakeCaptureData:(id)arg2 time:(long long)arg3 configuration:(id)arg4 mode:(long long)arg5;
- (void)_launchTweaks;
- (id)_prepareScreenshotObsecured:(_Bool)arg1;
- (long long)_prepareShakeStart:(id)arg1;
- (void)_setViewControllerNameAndFeature:(id)arg1;
- (_Bool)_shouldCensorScreenshot:(id)arg1;
- (_Bool)_shouldDisabledShakeOnCurrentPage;
- (_Bool)_shouldObsecureScreenshotOnCurrentPage;
- (id)_topViewController;
- (id)_topViewControllerForProjectConfig;
- (id)_topViewControllerForRootViewController:(id)arg1;
- (_Bool)_userSessionExist;
@property(readonly, nonatomic) NSString *announcerIdentifier;
@property(readonly, nonatomic) SCEventListenerAnnouncer *eventAnnouncer;
@property(readonly, nonatomic) NSString *eventName;
@property(nonatomic) __weak id <SCShakeToReportExternalImageAttachmentProvider> externalImageAttachmentProvider; // @synthesize externalImageAttachmentProvider=_externalImageAttachmentProvider;
- (id)init;
@property(readonly, nonatomic) SCLazy *lazyEventAnnouncer; // @synthesize lazyEventAnnouncer=_lazyEventAnnouncer;
- (void)operaDidAppear:(id)arg1;
- (void)operaDidDisappear;
- (void)reportSubmitted:(id)arg1 projectName:(id)arg2 subProjectName:(id)arg3;
- (void)resumeShakeReport:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shakeReportDidComplete:(id)arg1;
- (void)showShakePrompt:(id)arg1 configuration:(id)arg2;
- (void)tweakViewControllerPressedDone:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

