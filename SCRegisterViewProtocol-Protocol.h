//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNotification;

@protocol SCRegisterViewProtocol <NSObject>
- (_Bool)becomeFirstResponder;
- (_Bool)isInputIncomplete;

@optional
- (void)hideInput;
- (void)keyboardWillHide:(NSNotification *)arg1;
- (void)keyboardWillShow:(NSNotification *)arg1;
- (void)refreshContinueButtonEnabledState;
- (void)shiftViewUpWithKeyboard:(double)arg1;
- (void)showOrHideEnterButton;
@end
