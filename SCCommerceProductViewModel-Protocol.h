//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, SOJUCommerceProductInfo;

@protocol SCCommerceProductViewModel <NSObject, NSCopying>
@property(readonly, copy) NSString *amount;
@property(readonly, copy) NSDictionary *availableVariants;
@property(readonly, copy) NSDictionary *defaultVariantOptions;
@property(readonly) _Bool doesShipToUserLocation;
@property(readonly, copy) NSArray *imageDetails;
@property(readonly, copy) NSArray *images;
@property(readonly, copy) NSString *productDetailsHtml;
@property(readonly) _Bool shouldUseWebview;
@property(readonly, copy) SOJUCommerceProductInfo *soju;
@property(readonly, copy) NSString *soldBy;
@property(readonly, copy) NSString *storeId;
@property(readonly, copy) NSString *strikethroughPrice;
@property(readonly, copy) NSString *title;
@property(readonly, copy) NSArray *variantOptionCategories;
@property(readonly, copy) NSArray *visibleVariantOptionCategories;
@end
