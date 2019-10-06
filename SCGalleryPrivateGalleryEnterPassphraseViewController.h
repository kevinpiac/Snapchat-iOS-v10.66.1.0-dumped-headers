//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGalleryPrivateGalleryFlowPageViewController.h"

#import "SCAlertViewActionController-Protocol.h"
#import "SCGalleryLockedRateLimitControllerDelegate-Protocol.h"
#import "SCGalleryPassphraseViewDelegate-Protocol.h"

@class NSString, SCBaseAlertView, SCGalleryLockedRateLimitController, SCGalleryPassphraseView, SCGallerySelectableDotView, SCMemoriesRoundButton, UILabel, UIView;
@protocol SCGalleryPrivateGalleryEnterPassphraseViewControllerDelegate, SCKeyServicePassphrasePromptRequester;

@interface SCGalleryPrivateGalleryEnterPassphraseViewController : SCGalleryPrivateGalleryFlowPageViewController <SCGalleryPassphraseViewDelegate, SCGalleryLockedRateLimitControllerDelegate, SCAlertViewActionController>
{
    _Bool _forCreating;
    _Bool _forUnlocking;
    _Bool _forPrompt;
    id <SCKeyServicePassphrasePromptRequester> _passphrasePromptRequester;
    NSString *_title;
    NSString *_text;
    NSString *_passphrasePlaceholder;
    _Bool _showsPasscodeOption;
    double _keyboardHeight;
    UIView *_headerView;
    double _continueButtonBottomPadding;
    SCMemoriesRoundButton *_continueButton;
    SCGallerySelectableDotView *_dotView;
    UILabel *_usePasscodeLabel;
    SCGalleryPassphraseView *_passphraseView;
    SCGalleryLockedRateLimitController *_lockedRateLimitController;
    SCBaseAlertView *_passphraseAlertView;
    id <SCGalleryPrivateGalleryEnterPassphraseViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_createPassphraseAlertView;
- (void)_didPressBackButton;
- (void)_didPressContinueButton;
- (void)_didPressContinueButtonOrDoneKey;
- (void)_handleTapUsePasscodeView:(id)arg1;
- (_Bool)_isPassphraseValid;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_setContinueButtonAndDoneKeyEnabled:(_Bool)arg1;
- (void)_showLockedRateLimitViewIfNeeded:(id)arg1;
- (void)_showRateLimitAlert:(id)arg1;
- (id)actionView;
- (struct CGSize)actionViewSize;
- (_Bool)adjustsSizeToMatchStandard;
- (unsigned long long)alertViewActionType;
- (void)applicationDidEnterBackground;
- (void)becomeFirstResponder;
@property(nonatomic) __weak id <SCGalleryPrivateGalleryEnterPassphraseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct UIEdgeInsets)edgeInsets;
- (void)galleryPassphraseViewDidBeginEditingPassphrase:(id)arg1;
- (void)galleryPassphraseViewDidChangePassphrase:(id)arg1;
- (void)galleryPassphraseViewDidEndEditingPassphrase:(id)arg1;
- (void)galleryPassphraseViewDidPressDoneKey:(id)arg1;
- (_Bool)galleryPassphraseViewShouldLimitLength:(id)arg1;
- (id)initForCreatingWithTitle:(id)arg1 text:(id)arg2 passphrasePlaceholder:(id)arg3 showsPasscodeOption:(_Bool)arg4;
- (id)initForUnlockingWithPassphrasePromptRequester:(id)arg1 title:(id)arg2 text:(id)arg3 passphrasePlaceholder:(id)arg4;
- (void)lockedRateLimitControllerDidReachAllowedFutureDate:(id)arg1;
- (_Bool)requiresAdditionalPaddingIfLastItem;
- (void)reset;
- (void)setPopupView;
- (void)showPassphraseAlertView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

