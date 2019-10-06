//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, SOJUPaymentsBillingAddress;

@interface SOJUPaymentsCreditCardBuilder : NSObject
{
    NSString *_idValue;
    NSString *_adAccountId;
    NSString *_cardType;
    NSString *_last4;
    NSString *_expirationYear;
    NSString *_expirationMonth;
    SOJUPaymentsBillingAddress *_billingAddress;
    NSNumber *_isDeviceAuthorized;
}

+ (id)withJUPaymentsCreditCard:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAdAccountId:(id)arg1;
- (id)setBillingAddress:(id)arg1;
- (id)setCardType:(id)arg1;
- (id)setCardTypeEnum:(long long)arg1;
- (id)setExpirationMonth:(id)arg1;
- (id)setExpirationYear:(id)arg1;
- (id)setIdValue:(id)arg1;
- (id)setIsDeviceAuthorized:(id)arg1;
- (id)setIsDeviceAuthorizedValue:(_Bool)arg1;
- (id)setLast4:(id)arg1;

@end
