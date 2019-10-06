//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCommerceProductVariantViewModel-Protocol.h"

@class NSArray, NSString, SOJUCommerceProductVariant;

@interface SCCommerceProductVariantViewModel : NSObject <SCCommerceProductVariantViewModel>
{
    _Bool _isTaxable;
    _Bool _requiresShipping;
    _Bool _isAvailable;
    SOJUCommerceProductVariant *_soju;
    NSString *_title;
    NSString *_productId;
    NSString *_amount;
    NSString *_strikethroughPrice;
    NSString *_currency;
    NSArray *_imageDetails;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *amount; // @synthesize amount=_amount;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *currency; // @synthesize currency=_currency;
@property(readonly, copy) NSArray *imageDetails; // @synthesize imageDetails=_imageDetails;
- (id)initWithSOJU:(id)arg1 title:(id)arg2 productId:(id)arg3 isTaxable:(_Bool)arg4 amount:(id)arg5 strikethroughPrice:(id)arg6 currency:(id)arg7 requiresShipping:(_Bool)arg8 imageDetails:(id)arg9 isAvailable:(_Bool)arg10;
@property(readonly) _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
@property(readonly) _Bool isTaxable; // @synthesize isTaxable=_isTaxable;
@property(readonly, copy) NSString *productId; // @synthesize productId=_productId;
@property(readonly) _Bool requiresShipping; // @synthesize requiresShipping=_requiresShipping;
@property(readonly, copy) SOJUCommerceProductVariant *soju; // @synthesize soju=_soju;
@property(readonly, copy) NSString *strikethroughPrice; // @synthesize strikethroughPrice=_strikethroughPrice;
@property(readonly, copy) NSString *title; // @synthesize title=_title;

@end

