//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCLensActionHandling-Protocol.h"
#import "SCLensLiveLensPreviewCameraPresenterDelegate-Protocol.h"

@class NSString, SCDeeplinkShareController, SCLensExplorerLensItem, SCLensExplorerPresentationConfiguration, SCLensExplorerSnapProUnlock, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCLensLiveLensPreviewCameraPresenterProtocol, SCLensUnlockerProtocol;

@interface SCImpalaLensActionHandler : NSObject <SCLensLiveLensPreviewCameraPresenterDelegate, SCCLensActionHandling>
{
    SCDeeplinkShareController *_deeplinkShareController;
    id <SCLensLiveLensPreviewCameraPresenterProtocol> _liveLensPreviewCameraPresenter;
    id <SCLensUnlockerProtocol> _lensUnlocker;
    id <NavigationDelegate> _navigationDelegate;
    SCLensExplorerLensItem *_lensItem;
    SCLensExplorerSnapProUnlock *_lensExplorerSnapProUnlock;
    long long _roleType;
    SCLensExplorerPresentationConfiguration *_configuration;
    SCUserSession *_userSession;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
- (void)_sendLensWithLensItem:(id)arg1;
- (id)initWithUserSession:(id)arg1 viewController:(id)arg2 navigationDelegate:(id)arg3 roleType:(long long)arg4 presentationConfiguration:(id)arg5;
- (void)lensCameraPresenter:(id)arg1 didUseLens:(id)arg2;
- (void)lensCameraPresenterDidComplete:(id)arg1;
- (void)openLensExplorer;
- (void)presentLensWithLens:(id)arg1;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (void)sendLensWithLens:(id)arg1;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

