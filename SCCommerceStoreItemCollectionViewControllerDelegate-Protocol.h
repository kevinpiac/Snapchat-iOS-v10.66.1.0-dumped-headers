//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCCommerceStoreItemCollectionViewController, SOJUCommerceProductInfo;

@protocol SCCommerceStoreItemCollectionViewControllerDelegate <NSObject>
- (void)commerceStoreItemCollectionViewController:(SCCommerceStoreItemCollectionViewController *)arg1 didSelectCategoryWithId:(NSString *)arg2;
- (void)commerceStoreItemCollectionViewController:(SCCommerceStoreItemCollectionViewController *)arg1 didSelectProduct:(SOJUCommerceProductInfo *)arg2;
- (void)commerceStoreItemCollectionViewController:(SCCommerceStoreItemCollectionViewController *)arg1 loadedCategoryWithPartner:(NSString *)arg2;
@end

