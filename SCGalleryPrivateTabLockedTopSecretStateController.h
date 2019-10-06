//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryLockedRateLimitControllerDelegate-Protocol.h"
#import "SCGalleryPassphraseViewDelegate-Protocol.h"
#import "SCGalleryPrivateGalleryChangePassphraseFlowDelegate-Protocol.h"
#import "SCGalleryPrivateGalleryForgotPassphraseFlowDelegate-Protocol.h"
#import "SCGalleryPrivateGalleryReauthenticateFlowDelegate-Protocol.h"
#import "SCGalleryPrivateTabStateController-Protocol.h"
#import "SCKeyServiceListener-Protocol.h"

@class NSString, SCGalleryLockedRateLimitController, SCGalleryPassphraseView, SCGalleryPrivateGalleryChangePassphraseFlow, SCGalleryPrivateGalleryForgotPassphraseFlow, SCGalleryPrivateGalleryReauthenticateFlow, SCUserSession, UIButton, UIView, UIViewController;
@protocol SCGalleryPrivateTabLockedTopSecretStateControllerDelegate;

@interface SCGalleryPrivateTabLockedTopSecretStateController : NSObject <SCGalleryPassphraseViewDelegate, SCGalleryLockedRateLimitControllerDelegate, SCKeyServiceListener, SCGalleryPrivateGalleryReauthenticateFlowDelegate, SCGalleryPrivateGalleryChangePassphraseFlowDelegate, SCGalleryPrivateGalleryForgotPassphraseFlowDelegate, SCGalleryPrivateTabStateController>
{
    SCUserSession *_userSession;
    UIViewController *_containerViewController;
    _Bool _hasPassphraseOptions;
    double _keyboardHeight;
    UIView *_view;
    UIView *_contentView;
    SCGalleryPassphraseView *_passphraseView;
    UIButton *_passphraseOptionsButton;
    SCGalleryLockedRateLimitController *_lockedRateLimitController;
    SCGalleryPrivateGalleryReauthenticateFlow *_reauthenticateFlow;
    SCGalleryPrivateGalleryChangePassphraseFlow *_changePassphraseFlow;
    SCGalleryPrivateGalleryForgotPassphraseFlow *_forgotPassphraseFlow;
    id <SCGalleryPrivateTabLockedTopSecretStateControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_applicationWillEnterBackground:(id)arg1;
- (void)_didPressPassphraseOptionsButton;
- (void)_dismissRateLimitViewAnimated;
- (_Bool)_isChangeOrForgotPassphraseFlowPresented;
- (void)_keyboardWillChangeFrame:(id)arg1;
@property(nonatomic) __weak id <SCGalleryPrivateTabLockedTopSecretStateControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)galleryPassphraseViewDidBeginEditingPassphrase:(id)arg1;
- (void)galleryPassphraseViewDidChangePassphrase:(id)arg1;
- (void)galleryPassphraseViewDidEndEditingPassphrase:(id)arg1;
- (void)galleryPassphraseViewDidPressDoneKey:(id)arg1;
- (_Bool)galleryPassphraseViewShouldLimitLength:(id)arg1;
- (id)initWithUserSession:(id)arg1 containerViewController:(id)arg2 hasPassphraseOptions:(_Bool)arg3;
- (_Bool)isEditingPassphrase;
- (void)keyService:(id)arg1 didChangeAllowedFutureAuthorizationDate:(id)arg2 errorCode:(long long)arg3;
- (void)lockedRateLimitControllerDidReachAllowedFutureDate:(id)arg1;
- (void)privateGalleryChangePassphraseFlowDidCancel:(id)arg1;
- (void)privateGalleryChangePassphraseFlowDidFinish:(id)arg1;
- (void)privateGalleryForgotPassphraseFlowDidCancel:(id)arg1;
- (void)privateGalleryForgotPassphraseFlowDidFinish:(id)arg1;
- (void)privateGalleryReauthenticateFlowDidCancel:(id)arg1;
- (void)privateGalleryReauthenticateFlowDidSucceed:(id)arg1;
- (void)reset;
- (void)startEditingPassphrase;
- (void)stopEditingPassphrase;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

