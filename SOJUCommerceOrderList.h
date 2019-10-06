//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUCommerceOrderList-Protocol.h"

@class NSArray, NSString;

@interface SOJUCommerceOrderList : NSObject <SOJUCommerceOrderList>
{
    NSArray *_orders;
    NSString *_prevUrl;
    NSString *_nextUrl;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithOrders:(id)arg1 prevUrl:(id)arg2 nextUrl:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *nextUrl; // @synthesize nextUrl=_nextUrl;
@property(readonly, copy, nonatomic) NSArray *orders; // @synthesize orders=_orders;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *prevUrl; // @synthesize prevUrl=_prevUrl;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

