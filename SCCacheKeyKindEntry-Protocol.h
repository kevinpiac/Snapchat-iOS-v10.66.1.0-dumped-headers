//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDate, NSNumber, NSString;

@protocol SCCacheKeyKindEntry <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic) _Bool isUnwrappedData;
@property(readonly, copy, nonatomic) NSString *key;
@property(readonly, copy, nonatomic) NSString *kind;
@property(readonly, copy, nonatomic) NSNumber *referenceCount;
@end
