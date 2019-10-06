//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextField.h>

@class UIButton, UILabel;
@protocol SCVerificationCodeTextFieldDelegate;

@interface SCVerificationCodeTextField : UITextField
{
    _Bool _inErrorState;
    id <SCVerificationCodeTextFieldDelegate> _verificationCodeTextFieldDelegate;
    UILabel *_invalidLabel;
    UIButton *_xButton;
}

- (void).cxx_destruct;
- (void)clearInput;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
@property(nonatomic) _Bool inErrorState; // @synthesize inErrorState=_inErrorState;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
@property(retain, nonatomic) UILabel *invalidLabel; // @synthesize invalidLabel=_invalidLabel;
- (_Bool)isInErrorState;
- (void)setError:(_Bool)arg1;
- (void)setInput:(id)arg1;
@property(nonatomic) __weak id <SCVerificationCodeTextFieldDelegate> verificationCodeTextFieldDelegate; // @synthesize verificationCodeTextFieldDelegate=_verificationCodeTextFieldDelegate;
@property(retain, nonatomic) UIButton *xButton; // @synthesize xButton=_xButton;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;

@end
