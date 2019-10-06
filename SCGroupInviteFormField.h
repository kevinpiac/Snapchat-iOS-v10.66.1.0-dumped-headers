//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIImageView, UITextField;
@protocol SCGroupInviteFormFieldDelegate;

@interface SCGroupInviteFormField : UIView <UITextFieldDelegate>
{
    UITextField *_field;
    UIImageView *_icon;
    UIView *_bottomBorderView;
    UIView *_chevron;
    _Bool _editingEnabled;
    _Bool _chevronVisible;
    id <SCGroupInviteFormFieldDelegate> _delegate;
    UIView *_inputView;
}

+ (double)height;
- (void).cxx_destruct;
- (void)_tapped;
- (_Bool)canBecomeFirstResponder;
@property(nonatomic) _Bool chevronVisible; // @synthesize chevronVisible=_chevronVisible;
@property(nonatomic) __weak id <SCGroupInviteFormFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool editingEnabled; // @synthesize editingEnabled=_editingEnabled;
- (void)focusTextField;
- (id)initWithIcon:(id)arg1 placeholder:(id)arg2;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
- (void)layoutSubviews;
- (void)resignTextField;
@property(nonatomic) _Bool showsBottomDivider;
@property(copy, nonatomic) NSString *text;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

