//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCRegisterV2BaseView.h"

#import "SCInfoForRegisterPhoneView-Protocol.h"
#import "SCTextViewDelegate-Protocol.h"

@class NSString, SCLoadingIndicatorView, SCRegisterV2BackButton, SCRegisterV2EnterButton, SCTextView, TTTAttributedLabel, UIButton, UILabel, UIScrollView, UIView;

@interface SCRegisterUsernameV2View : SCRegisterV2BaseView <SCTextViewDelegate, SCInfoForRegisterPhoneView>
{
    struct UIEdgeInsets _horizontalInsets;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UILabel *_usernameLabel;
    UIView *_usernameFieldContainer;
    SCTextView *_usernameTextView;
    TTTAttributedLabel *_errorLabel;
    UIScrollView *_scrollView;
    UIButton *_refreshButton;
    SCLoadingIndicatorView *_indicator;
    _Bool _isInErrorState;
}

- (void).cxx_destruct;
- (_Bool)becomeFirstResponder;
- (id)getInput;
- (void)hideInput;
- (void)initErrorLabel;
- (void)initScrollView;
- (void)initUsernameDescription:(id)arg1;
- (void)initUsernameField;
- (void)initUsernameLabel;
- (void)initUsernameTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 title:(id)arg3 description:(id)arg4;
- (_Bool)isInputIncomplete;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)refreshContinueButtonEnabledState;
- (void)registerNumberDidFailValidation;
- (void)setContinueButtonEnabled:(_Bool)arg1;
- (void)setError:(id)arg1;
- (void)setIndicatorAnimating:(_Bool)arg1;
- (void)setInfo:(id)arg1;
- (void)setInput:(id)arg1;
- (void)setRefreshButtonHidden:(_Bool)arg1;
@property(retain, nonatomic) NSString *username;
- (void)shiftViewUpWithKeyboard:(double)arg1;
- (void)showInput;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textViewShouldReturn:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SCRegisterV2BackButton *backButton;
@property(retain, nonatomic) SCRegisterV2EnterButton *continueButton;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

