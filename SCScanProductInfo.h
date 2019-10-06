//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, NSURL, SOJUCommerceCurrencyAmount, SOJUCommerceStoreInfo, SOJUScannableActionMarcoAction;

@interface SCScanProductInfo : NSObject
{
    NSString *_title;
    NSString *_storePolicyQueryLink;
    NSString *_storePolicyRefundLink;
    SOJUCommerceStoreInfo *_storeInfo;
    NSString *_storeId;
    NSString *_descriptionHTML;
    NSURL *_imageLink;
    SOJUCommerceCurrencyAmount *_priceBeforeTax;
    SOJUCommerceCurrencyAmount *_strikethroughPriceBeforeTax;
    NSArray *_productImages;
    NSDictionary *_productOptionMappings;
    NSArray *_optionsArray;
    SOJUScannableActionMarcoAction *_product;
    NSMutableArray *_optionsSelected;
    NSString *_priceLabel;
}

+ (id)createScanProductInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *descriptionHTML; // @synthesize descriptionHTML=_descriptionHTML;
@property(retain, nonatomic) NSURL *imageLink; // @synthesize imageLink=_imageLink;
@property(retain, nonatomic) NSArray *optionsArray; // @synthesize optionsArray=_optionsArray;
@property(retain, nonatomic) NSMutableArray *optionsSelected; // @synthesize optionsSelected=_optionsSelected;
@property(retain, nonatomic) SOJUCommerceCurrencyAmount *priceBeforeTax; // @synthesize priceBeforeTax=_priceBeforeTax;
@property(readonly, nonatomic) NSString *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) SOJUScannableActionMarcoAction *product; // @synthesize product=_product;
@property(retain, nonatomic) NSArray *productImages; // @synthesize productImages=_productImages;
@property(retain, nonatomic) NSDictionary *productOptionMappings; // @synthesize productOptionMappings=_productOptionMappings;
@property(retain, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
@property(retain, nonatomic) SOJUCommerceStoreInfo *storeInfo; // @synthesize storeInfo=_storeInfo;
@property(retain, nonatomic) NSString *storePolicyQueryLink; // @synthesize storePolicyQueryLink=_storePolicyQueryLink;
@property(retain, nonatomic) NSString *storePolicyRefundLink; // @synthesize storePolicyRefundLink=_storePolicyRefundLink;
@property(retain, nonatomic) SOJUCommerceCurrencyAmount *strikethroughPriceBeforeTax; // @synthesize strikethroughPriceBeforeTax=_strikethroughPriceBeforeTax;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

