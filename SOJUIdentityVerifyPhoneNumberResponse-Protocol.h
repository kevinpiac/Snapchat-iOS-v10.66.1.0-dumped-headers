//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUIdentityDeepLinkResponse, SOJUIdentityVerificationNeeded;

@protocol SOJUIdentityVerifyPhoneNumberResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *allowedToUseCash;
@property(readonly, copy, nonatomic) SOJUIdentityDeepLinkResponse *deepLinkResponse;
@property(readonly, copy, nonatomic) NSNumber *isTwoFaEnabled;
@property(readonly, copy, nonatomic) NSNumber *logged;
@property(readonly, copy, nonatomic) NSString *message;
@property(readonly, copy, nonatomic) NSNumber *noTentativePhoneNumber;
@property(readonly, copy, nonatomic) NSNumber *reauthRequired;
@property(readonly, copy, nonatomic) NSString *twoFaRecoveryCode;
@property(readonly, copy, nonatomic) NSArray *twoFaVerifiedDevices;
@property(readonly, copy, nonatomic) SOJUIdentityVerificationNeeded *verificationNeeded;
@end
