//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString, SOJUCommerceCurrencyAmount;

@protocol SOJUCommerceDiscountInfo <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUCommerceCurrencyAmount *amount;
@property(readonly, copy, nonatomic) NSNumber *applicable;
@property(readonly, copy, nonatomic) NSNumber *automatic;
@property(readonly, copy, nonatomic) NSString *value;
@property(readonly, copy, nonatomic) NSString *valueType;
@end
