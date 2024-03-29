//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCommerceProductCheckoutLineItem-Protocol.h"

@class NSDecimalNumber, NSNumber, NSString, SOJUCommerceCurrencyAmount, SOJUCommerceProductInfo, SOJUCommerceProductVariant;

@interface SCCommerceProductCheckoutLineItem : NSObject <SCCommerceProductCheckoutLineItem>
{
    SOJUCommerceProductInfo *_product;
    SOJUCommerceProductVariant *_variant;
    NSDecimalNumber *_price;
    NSString *_productId;
    NSString *_variantId;
    NSString *_storeId;
    NSNumber *_requiresShipping;
    SOJUCommerceCurrencyAmount *_unitPrice;
    SOJUCommerceCurrencyAmount *_linePrice;
    SOJUCommerceCurrencyAmount *_strikethroughLinePrice;
    SOJUCommerceCurrencyAmount *_strikethroughUnitPrice;
    NSNumber *_taxable;
    long long _quantity;
    long long _type;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProduct:(id)arg1 variant:(id)arg2 price:(id)arg3 productId:(id)arg4 variantId:(id)arg5 storeId:(id)arg6 requiresShipping:(id)arg7 unitPrice:(id)arg8 linePrice:(id)arg9 strikethroughUnitPrice:(id)arg10 strikethroughLinePrice:(id)arg11 taxable:(id)arg12 quantity:(long long)arg13 type:(long long)arg14;
- (_Bool)isEqual:(id)arg1;
@property(readonly) SOJUCommerceCurrencyAmount *linePrice; // @synthesize linePrice=_linePrice;
@property(readonly) NSDecimalNumber *price; // @synthesize price=_price;
@property(readonly) SOJUCommerceProductInfo *product; // @synthesize product=_product;
@property(readonly) NSString *productId; // @synthesize productId=_productId;
@property(readonly) long long quantity; // @synthesize quantity=_quantity;
@property(readonly) NSNumber *requiresShipping; // @synthesize requiresShipping=_requiresShipping;
@property(readonly) NSString *storeId; // @synthesize storeId=_storeId;
@property(readonly) SOJUCommerceCurrencyAmount *strikethroughLinePrice; // @synthesize strikethroughLinePrice=_strikethroughLinePrice;
@property(readonly) SOJUCommerceCurrencyAmount *strikethroughUnitPrice; // @synthesize strikethroughUnitPrice=_strikethroughUnitPrice;
@property(readonly) NSNumber *taxable; // @synthesize taxable=_taxable;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly) SOJUCommerceCurrencyAmount *unitPrice; // @synthesize unitPrice=_unitPrice;
@property(readonly) SOJUCommerceProductVariant *variant; // @synthesize variant=_variant;
@property(readonly) NSString *variantId; // @synthesize variantId=_variantId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

