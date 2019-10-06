//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCRegisterV2BaseView.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UIScrollView, UITextField, UIView;
@protocol SCRegisterPhoneVerificationV2ViewDelegate;

@interface SCRegisterPhoneVerificationV2View : SCRegisterV2BaseView <UITextFieldDelegate>
{
    struct UIEdgeInsets _horizontalInsets;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UILabel *_codeLabel;
    UITextField *_codeField;
    UILabel *_errorLabel;
    UIScrollView *_scrollView;
    UIView *_keyboardSeparator;
    UIButton *_sendCodeByCallButton;
    UIButton *_sendCodeBySmsButton;
    double _underlineWidth;
    double _underlineHorizontalInset;
    id <SCRegisterPhoneVerificationV2ViewDelegate> _phoneVerificationViewDelegate;
}

- (void).cxx_destruct;
- (void)_clearError;
- (void)_configureSharedSendCodeByAltButton:(id)arg1;
- (double)_getKerning;
- (double)_getSingleNumberWidth;
- (_Bool)_textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3 isDeepLink:(_Bool)arg4;
- (_Bool)becomeFirstResponder;
- (void)clearConfirmationCode:(_Bool)arg1;
- (double)getAppropriateButtonWidth;
- (id)getConfirmationCode;
- (void)initCodeInputField;
- (void)initCodeLabel;
- (void)initDescriptionWithPhoneNumber:(id)arg1;
- (void)initErrorLabel;
- (void)initKeyboardSeparator;
- (void)initNextButton;
- (void)initScrollView;
- (void)initSendCodeByCallAltButton;
- (void)initSendCodeBySmsAltButton;
- (void)initTitle;
- (id)initWithFrame:(struct CGRect)arg1 phoneNumber:(id)arg2 delegate:(id)arg3 altButtonIsCallMeInstead:(_Bool)arg4 baseColorPalette:(unsigned long long)arg5;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
@property(nonatomic) __weak id <SCRegisterPhoneVerificationV2ViewDelegate> phoneVerificationViewDelegate; // @synthesize phoneVerificationViewDelegate=_phoneVerificationViewDelegate;
- (void)setAltButtonState:(_Bool)arg1;
- (void)setConfirmationCode:(id)arg1;
- (void)setError:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateButtonTitle:(id)arg1 enabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

