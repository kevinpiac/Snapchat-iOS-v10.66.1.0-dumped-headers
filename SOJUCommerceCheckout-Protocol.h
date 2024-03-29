//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUCommerceContactDetails, SOJUCommerceCurrencyAmount, SOJUCommerceDiscountInfo, SOJUCommerceShippingAddress;

@protocol SOJUCommerceCheckout <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUCommerceContactDetails *contactDetails;
@property(readonly, copy, nonatomic) NSString *discountCode;
@property(readonly, copy, nonatomic) SOJUCommerceDiscountInfo *discountInfo;
@property(readonly, copy, nonatomic) NSString *emailDeprecated;
@property(readonly, copy, nonatomic) NSString *idValue;
@property(readonly, copy, nonatomic) NSArray *lineItems;
@property(readonly, copy, nonatomic) NSString *partner;
@property(readonly, copy, nonatomic) SOJUCommerceShippingAddress *shippingAddress;
@property(readonly, copy, nonatomic) NSString *shippingOptionId;
@property(readonly, copy, nonatomic) NSArray *shippingOptions;
@property(readonly, copy, nonatomic) NSNumber *shouldUseWebview;
@property(readonly, copy, nonatomic) NSString *storeId;
@property(readonly, copy, nonatomic) NSArray *taxItems;
@property(readonly, copy, nonatomic) SOJUCommerceCurrencyAmount *totalPrice;
@property(readonly, copy, nonatomic) NSNumber *userHasPaymentMethod;
@property(readonly, copy, nonatomic) NSString *webUrl;
@end

