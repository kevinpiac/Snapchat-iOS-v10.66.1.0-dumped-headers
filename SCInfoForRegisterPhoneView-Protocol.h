//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNotification, NSString, SCRegisterV2BackButton, SCRegisterV2EnterButton;

@protocol SCInfoForRegisterPhoneView <NSObject>
@property(retain, nonatomic) SCRegisterV2BackButton *backButton;
@property(retain, nonatomic) SCRegisterV2EnterButton *continueButton;
- (NSString *)getInput;
- (void)hideInput;
- (void)keyboardWillHide:(NSNotification *)arg1;
- (void)keyboardWillShow:(NSNotification *)arg1;
- (void)registerNumberDidFailValidation;
- (void)setActivityAnimating:(_Bool)arg1;
- (void)setContinueButtonEnabled:(_Bool)arg1;
- (void)setError:(NSString *)arg1;
- (void)setInput:(NSString *)arg1;
- (void)showInput;

@optional
- (void)hideSkipButton:(_Bool)arg1;
- (void)setEmailLinkHidden:(_Bool)arg1;
- (void)updateCountryCode:(NSString *)arg1;
@end
