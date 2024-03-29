//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNotification, NSString, SCTextView, UIColor;

@protocol NewPasswordView <NSObject>
@property(retain, nonatomic) SCTextView *confirmPwTextView;
- (void)inputKeyboardWillChangeFrame:(NSNotification *)arg1;
@property(retain, nonatomic) SCTextView *pwTextView;
- (void)setContinueEnabled:(_Bool)arg1;
- (void)setContinueIndicatorAnimating:(_Bool)arg1;
- (void)setIndicatorWithMessage:(NSString *)arg1 color:(UIColor *)arg2;
- (void)setPasswordConfirmError:(NSString *)arg1;
- (void)setPasswordError:(NSString *)arg1;
- (void)setStrengthIndicatorAnimating:(_Bool)arg1;
@end

