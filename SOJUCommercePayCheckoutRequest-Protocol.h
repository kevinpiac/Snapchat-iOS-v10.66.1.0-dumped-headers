//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SOJUCommercePayCheckoutRequest <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *checkoutId;
@property(readonly, copy, nonatomic) NSString *deviceId;
@property(readonly, copy, nonatomic) NSArray *paymentMethods;
@property(readonly, copy, nonatomic) NSString *requestId;
@end
