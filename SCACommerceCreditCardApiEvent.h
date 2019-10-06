//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCACommerceApiEventBase.h"

@class NSString;

@interface SCACommerceCreditCardApiEvent : SCACommerceApiEventBase
{
    long long cardType;
    NSString *paymentMethodId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getCardType;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getPaymentMethodId;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setCardType:(long long)arg1;
- (void)setPaymentMethodId:(id)arg1;

@end
