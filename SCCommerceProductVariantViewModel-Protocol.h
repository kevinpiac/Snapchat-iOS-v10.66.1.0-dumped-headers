//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SOJUCommerceProductVariant;

@protocol SCCommerceProductVariantViewModel <NSCopying>
@property(readonly, copy) NSString *amount;
@property(readonly, copy) NSString *currency;
@property(readonly, copy) NSArray *imageDetails;
@property(readonly) _Bool isAvailable;
@property(readonly) _Bool isTaxable;
@property(readonly, copy) NSString *productId;
@property(readonly) _Bool requiresShipping;
@property(readonly, copy) SOJUCommerceProductVariant *soju;
@property(readonly, copy) NSString *strikethroughPrice;
@property(readonly, copy) NSString *title;
@end

