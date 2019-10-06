//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFloatLabeledTextField.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString;
@protocol SCPaymentsCardExpiryDateTextViewV2Delegate;

@interface SCPaymentsCardExpiryDateTextViewV2 : SCFloatLabeledTextField <UITextFieldDelegate>
{
    _Bool _isInserting;
    _Bool _shouldResignFirstResponderWhenComplete;
    id <SCPaymentsCardExpiryDateTextViewV2Delegate> _textFieldDelegate;
}

- (void).cxx_destruct;
- (id)expirationMonth;
- (id)expirationYear;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isComplete;
- (_Bool)isValidDate;
- (_Bool)setExpiryWithMonth:(unsigned long long)arg1 Year:(unsigned long long)arg2;
@property(nonatomic) _Bool shouldResignFirstResponderWhenComplete; // @synthesize shouldResignFirstResponderWhenComplete=_shouldResignFirstResponderWhenComplete;
@property(nonatomic) __weak id <SCPaymentsCardExpiryDateTextViewV2Delegate> textFieldDelegate; // @synthesize textFieldDelegate=_textFieldDelegate;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

