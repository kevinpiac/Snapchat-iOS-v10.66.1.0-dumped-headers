//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString, SOJUPaymentsCreditCard, SOJUPaymentsVaultedCreditAccount;

@protocol SOJUPaymentsPaymentMethod <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUPaymentsCreditCard *creditCard;
@property(readonly, copy, nonatomic) NSString *idValue;
@property(readonly, copy, nonatomic) NSNumber *isDefault;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) SOJUPaymentsVaultedCreditAccount *vaultedCreditAccount;
@end

