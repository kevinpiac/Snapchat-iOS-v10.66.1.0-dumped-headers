//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAlertViewActionController-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, UITextField, UIView;

@interface SCAlertViewActionStoryNameFieldController : NSObject <UITextFieldDelegate, SCAlertViewActionController>
{
    UIView *_textFieldContainer;
    CDUnknownBlockType _actionHandler;
    CDUnknownBlockType _textChangeHandler;
    UITextField *_textField;
}

- (void).cxx_destruct;
- (void)_textFieldDidChange:(id)arg1;
- (id)actionView;
- (struct CGSize)actionViewSize;
- (_Bool)adjustsSizeToMatchStandard;
- (unsigned long long)alertViewActionType;
- (void)becomeFirstResponder;
- (struct UIEdgeInsets)edgeInsets;
- (id)initWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2 textChangeHandler:(CDUnknownBlockType)arg3;
- (_Bool)requiresAdditionalPaddingIfLastItem;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
@property(readonly, nonatomic) NSString *trimmedText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

