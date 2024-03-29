//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TwoFAGenericCodeVerificationView;

@protocol TwoFAGenericCodeVerificationDelegate <NSObject>
- (void)leftButtonPressed:(TwoFAGenericCodeVerificationView *)arg1;
- (void)verifyPressed:(TwoFAGenericCodeVerificationView *)arg1 successBlock:(void (^)(NSString *))arg2 failureBlock:(void (^)(NSString *))arg3;
- (void)verifySucceed:(TwoFAGenericCodeVerificationView *)arg1 recoveryCode:(NSString *)arg2;

@optional
- (void)resendPressed:(TwoFAGenericCodeVerificationView *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSString *))arg3;
@end

