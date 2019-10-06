//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCACommerceApiEventBase.h"

@class NSNumber, NSString;

@interface SCACommerceShippingMethodApiEvent : SCACommerceApiEventBase
{
    NSNumber *shippingAmount;
    long long currencyType;
    NSString *shippingMethodId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getCurrencyType;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (double)getShippingAmount;
- (id)getShippingMethodId;
- (id)init;
- (void)setCurrencyType:(long long)arg1;
- (void)setShippingAmount:(double)arg1;
- (void)setShippingMethodId:(id)arg1;

@end

