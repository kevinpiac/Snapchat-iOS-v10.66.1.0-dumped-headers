//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUCommerceOrderProduct-Protocol.h"

@class NSString, SOJUCommerceVariantImages;

@protocol SOJUCommerceOrderProductsCommerceOrderProduct <NSObject, NSCoding, NSCopying, SOJUCommerceOrderProduct>
@property(readonly, copy, nonatomic) SOJUCommerceVariantImages *imageList;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *platform;
@property(readonly, copy, nonatomic) NSString *productId;
@property(readonly, copy, nonatomic) NSString *productImageUrl;
@property(readonly, copy, nonatomic) NSString *productType;
@property(readonly, copy, nonatomic) NSString *storeId;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSString *variantDescription;
@property(readonly, copy, nonatomic) NSString *variantId;
@end

