//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCACommerceEventBase.h"

@class NSNumber, NSString;

@interface SCACommerceProductCheckoutEvent : SCACommerceEventBase
{
    NSNumber *subTotal;
    NSNumber *taxAmount;
    NSNumber *shippingAmount;
    NSNumber *totalAmount;
    NSNumber *totalProductCount;
    NSNumber *totalProductTypeCount;
    NSNumber *retryCount;
    NSNumber *strikethroughSubTotal;
    long long currencyType;
    long long cardType;
    long long status;
    NSString *checkoutId;
    NSString *orderId;
    NSString *items;
    NSString *shippingMethodId;
    NSString *failureReason;
    NSString *unlocks;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getCardType;
- (id)getCheckoutId;
- (long long)getCurrencyType;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFailureReason;
- (id)getItems;
- (id)getOrderId;
- (double)getPerUserSamplingRate;
- (long long)getRetryCount;
- (double)getShippingAmount;
- (id)getShippingMethodId;
- (long long)getStatus;
- (double)getStrikethroughSubTotal;
- (double)getSubTotal;
- (double)getTaxAmount;
- (double)getTotalAmount;
- (long long)getTotalProductCount;
- (long long)getTotalProductTypeCount;
- (id)getUnlocks;
- (id)init;
- (void)setCardType:(long long)arg1;
- (void)setCheckoutId:(id)arg1;
- (void)setCurrencyType:(long long)arg1;
- (void)setFailureReason:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setOrderId:(id)arg1;
- (void)setRetryCount:(long long)arg1;
- (void)setShippingAmount:(double)arg1;
- (void)setShippingMethodId:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setStrikethroughSubTotal:(double)arg1;
- (void)setSubTotal:(double)arg1;
- (void)setTaxAmount:(double)arg1;
- (void)setTotalAmount:(double)arg1;
- (void)setTotalProductCount:(long long)arg1;
- (void)setTotalProductTypeCount:(long long)arg1;
- (void)setUnlocks:(id)arg1;

@end
