//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUPaymentsPaymentMethod-Protocol.h"

@class NSNumber, NSString, SOJUPaymentsCreditCard, SOJUPaymentsVaultedCreditAccount;

@interface SOJUPaymentsPaymentMethod : NSObject <SOJUPaymentsPaymentMethod>
{
    NSString *_idValue;
    NSString *_type;
    NSNumber *_isDefault;
    SOJUPaymentsCreditCard *_creditCard;
    SOJUPaymentsVaultedCreditAccount *_vaultedCreditAccount;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SOJUPaymentsCreditCard *creditCard; // @synthesize creditCard=_creditCard;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdValue:(id)arg1 type:(id)arg2 isDefault:(id)arg3 creditCard:(id)arg4 vaultedCreditAccount:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isDefault; // @synthesize isDefault=_isDefault;
- (_Bool)isDefaultValue;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (long long)typeEnum;
@property(readonly, copy, nonatomic) SOJUPaymentsVaultedCreditAccount *vaultedCreditAccount; // @synthesize vaultedCreditAccount=_vaultedCreditAccount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

