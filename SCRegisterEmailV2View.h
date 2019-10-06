//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCRegisterV2BaseView.h"

#import "SCTextViewDelegate-Protocol.h"

@class NSString, SCTextView, UIButton, UILabel, UIScrollView;
@protocol SCRegisterEmailV2ViewDelegate;

@interface SCRegisterEmailV2View : SCRegisterV2BaseView <SCTextViewDelegate>
{
    struct UIEdgeInsets _horizontalInsets;
    UILabel *_titleLabel;
    UIButton *_phoneInsteadButton;
    UILabel *_emailLabel;
    SCTextView *_emailTextView;
    UILabel *_errorLabel;
    UILabel *_emailSuggestionLabel;
    UIButton *_emailSuggestionPill;
    UIButton *_skipButton;
    UIScrollView *_scrollView;
    id <SCRegisterEmailV2ViewDelegate> _emailViewDelegate;
    NSString *_email;
}

- (void).cxx_destruct;
- (void)_changeContinueHighlightState;
- (_Bool)becomeFirstResponder;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) __weak id <SCRegisterEmailV2ViewDelegate> emailViewDelegate; // @synthesize emailViewDelegate=_emailViewDelegate;
- (void)hideSkipButton:(_Bool)arg1;
- (void)initEmailField;
- (void)initEmailLabel;
- (void)initEmailSuggestion;
- (void)initEmailTitle;
- (void)initErrorLabel;
- (void)initPhoneAlternativeButton;
- (void)initScrollView;
- (void)initSkipButton;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (_Bool)isInputComplete;
- (void)keyboardWillShow:(id)arg1;
- (void)setEmailSuggestion:(id)arg1;
- (void)setEmailSuggestionHidden:(_Bool)arg1;
- (void)setError:(id)arg1;
- (void)setFieldsEnabled:(_Bool)arg1;
- (void)setPhoneLinkHidden:(_Bool)arg1;
- (void)shiftViewUpWithKeyboard:(double)arg1;
- (void)suggestedEmailClicked;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textViewShouldReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

