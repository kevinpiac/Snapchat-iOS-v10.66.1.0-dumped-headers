//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, SCExtendedHitButton, TTTAttributedLabel, UIColor, UITextField;
@protocol SCTextViewDelegate;

@interface SCTextView : UIView <UITextFieldDelegate, TTTAttributedLabelDelegate>
{
    _Bool _isHighlighted;
    _Bool _madeFirstChange;
    _Bool _showSeparator;
    _Bool _shouldPreventTextClearOnError;
    id <SCTextViewDelegate> _delegate;
    UITextField *_textField;
    SCExtendedHitButton *_xButton;
    UIView *_separator;
    TTTAttributedLabel *_errorLabel;
    UIColor *_nonerrorBackgroundColor;
}

- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (_Bool)becomeFirstResponder;
- (void)clearInput;
- (void)dealloc;
@property(nonatomic) __weak id <SCTextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TTTAttributedLabel *errorLabel; // @synthesize errorLabel=_errorLabel;
- (id)getTextFieldMASAttribute:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic) _Bool isHighlighted; // @synthesize isHighlighted=_isHighlighted;
- (_Bool)isInErrorState;
- (_Bool)isSecureTextEntry;
- (_Bool)isXButtonShown;
@property(nonatomic) _Bool madeFirstChange; // @synthesize madeFirstChange=_madeFirstChange;
@property(retain, nonatomic) UIColor *nonerrorBackgroundColor; // @synthesize nonerrorBackgroundColor=_nonerrorBackgroundColor;
- (void)preventTextClearOnError;
- (void)removeDelegate;
- (void)removeTextFieldInset;
- (_Bool)resignFirstResponder;
- (void)selectAll;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setAttributedPlaceholder:(id)arg1 color:(id)arg2;
- (void)setAutoCapitalizationType:(long long)arg1;
- (void)setAutocorrectionType:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setError:(id)arg1;
- (void)setError:(id)arg1 toggleBackground:(_Bool)arg2 toggleXButton:(_Bool)arg3;
- (void)setKeyboardType:(long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setPlaceholder:(id)arg1 color:(id)arg2;
- (void)setReturnKeyType:(long long)arg1;
- (void)setSecureTextEntry:(_Bool)arg1;
@property(nonatomic) _Bool shouldPreventTextClearOnError; // @synthesize shouldPreventTextClearOnError=_shouldPreventTextClearOnError;
@property(nonatomic) _Bool showSeparator; // @synthesize showSeparator=_showSeparator;
@property(copy, nonatomic) NSString *text;
- (void)setTextColor:(id)arg1;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void)setWarningWithText:(id)arg1;
@property(retain, nonatomic) SCExtendedHitButton *xButton; // @synthesize xButton=_xButton;
- (void)shouldShowSeparator:(_Bool)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidMakeFirstEdit:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textViewDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

