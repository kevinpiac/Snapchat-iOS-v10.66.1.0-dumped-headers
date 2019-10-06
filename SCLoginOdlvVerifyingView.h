//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCRegisterV2BaseView.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UIScrollView, UITextField, UIView;
@protocol SCLoginOdlvVerifyingViewDelegate, SCRegisterV2ViewDelegate;

@interface SCLoginOdlvVerifyingView : SCRegisterV2BaseView <UITextFieldDelegate>
{
    UIScrollView *_scrollView;
    UIView *_keyboardSeparator;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_errorMessageLabel;
    UIButton *_havingTroubleButton;
    UILabel *_codeLabel;
    UITextField *_codeField;
    id <SCRegisterV2ViewDelegate> _registerDelegate;
    id <SCLoginOdlvVerifyingViewDelegate> _verifyingViewDelegate;
    struct UIEdgeInsets _horizontalInsets;
}

- (void).cxx_destruct;
- (double)_getAppropriateButtonWidth;
- (void)_initCodeField;
- (void)_initCodeLabel;
- (void)_initContinueButton;
- (void)_initDescription:(id)arg1;
- (void)_initErrorMessageLabel;
- (void)_initHavingTroubleButton;
- (void)_initKeyboardSeparator;
- (void)_initScrollView;
- (void)_initTitle;
- (void)clearConfirmationCode;
@property(readonly, nonatomic) UITextField *codeField; // @synthesize codeField=_codeField;
@property(readonly, nonatomic) UILabel *codeLabel; // @synthesize codeLabel=_codeLabel;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *errorMessageLabel; // @synthesize errorMessageLabel=_errorMessageLabel;
- (id)getConfirmationCode;
@property(readonly, nonatomic) UIButton *havingTroubleButton; // @synthesize havingTroubleButton=_havingTroubleButton;
@property(readonly, nonatomic) struct UIEdgeInsets horizontalInsets; // @synthesize horizontalInsets=_horizontalInsets;
- (id)initWithFrame:(struct CGRect)arg1 obfuscatedContact:(id)arg2 registerDelegate:(id)arg3 verifyingViewDelegate:(id)arg4;
@property(readonly, nonatomic) UIView *keyboardSeparator; // @synthesize keyboardSeparator=_keyboardSeparator;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
@property(readonly, nonatomic) __weak id <SCRegisterV2ViewDelegate> registerDelegate; // @synthesize registerDelegate=_registerDelegate;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)setError:(id)arg1;
- (void)shiftViewUpWithKeyboard:(double)arg1;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateButtonTitle:(id)arg1 enabled:(_Bool)arg2;
@property(readonly, nonatomic) __weak id <SCLoginOdlvVerifyingViewDelegate> verifyingViewDelegate; // @synthesize verifyingViewDelegate=_verifyingViewDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
