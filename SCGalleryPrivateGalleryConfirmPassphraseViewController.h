//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGalleryPrivateGalleryFlowPageViewController.h"

@class NSString, SCGallerySelectableDotView, SCMemoriesRoundButton, UIView;
@protocol SCGalleryPrivateGalleryConfirmPassphraseViewControllerDelegate;

@interface SCGalleryPrivateGalleryConfirmPassphraseViewController : SCGalleryPrivateGalleryFlowPageViewController
{
    _Bool _forPasscode;
    _Bool _forPassphrase;
    NSString *_title;
    NSString *_passcode;
    NSString *_passphrase;
    UIView *_headerView;
    SCMemoriesRoundButton *_continueButton;
    SCGallerySelectableDotView *_acknowledgeDotView;
    id <SCGalleryPrivateGalleryConfirmPassphraseViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didPressBackButton;
- (void)_didPressContinueButton;
- (void)_didPressQuestionMarkButton;
- (void)_handleTapAcknowledgeView:(id)arg1;
@property(nonatomic) __weak id <SCGalleryPrivateGalleryConfirmPassphraseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initForPasscodeWithTitle:(id)arg1 passcode:(id)arg2;
- (id)initForPassphraseWithTitle:(id)arg1 passphrase:(id)arg2;
- (void)viewDidLoad;

@end
