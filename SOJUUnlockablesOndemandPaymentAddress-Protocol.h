//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString;

@protocol SOJUUnlockablesOndemandPaymentAddress <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *addressLine1;
@property(readonly, copy, nonatomic) NSString *administrativeDistrictLevel1;
@property(readonly, copy, nonatomic) NSString *country;
@property(readonly, copy, nonatomic) NSString *locality;
@property(readonly, copy, nonatomic) NSString *postalCode;
@property(readonly, copy, nonatomic) NSString *taxId;
@property(readonly, copy, nonatomic) NSString *taxIdType;
@end

