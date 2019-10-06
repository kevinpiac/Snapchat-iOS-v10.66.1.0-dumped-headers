//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUSecurityFideliusClientInit-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUSecurityFideliusClientInit : NSObject <SOJUSecurityFideliusClientInit>
{
    NSArray *_hashedOutBetas;
    NSString *_sojuNewOutBeta;
    NSString *_sojuNewHashedOutBeta;
    NSString *_sojuNewIwek;
    NSNumber *_sojuNewFideliusVersion;
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
@property(readonly, copy, nonatomic) NSArray *hashedOutBetas; // @synthesize hashedOutBetas=_hashedOutBetas;
- (id)initWithCoder:(id)arg1;
- (id)initWithHashedOutBetas:(id)arg1 sojuNewOutBeta:(id)arg2 sojuNewHashedOutBeta:(id)arg3 sojuNewIwek:(id)arg4 sojuNewFideliusVersion:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *sojuNewFideliusVersion; // @synthesize sojuNewFideliusVersion=_sojuNewFideliusVersion;
- (int)sojuNewFideliusVersionValue;
@property(readonly, copy, nonatomic) NSString *sojuNewHashedOutBeta; // @synthesize sojuNewHashedOutBeta=_sojuNewHashedOutBeta;
@property(readonly, copy, nonatomic) NSString *sojuNewIwek; // @synthesize sojuNewIwek=_sojuNewIwek;
@property(readonly, copy, nonatomic) NSString *sojuNewOutBeta; // @synthesize sojuNewOutBeta=_sojuNewOutBeta;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

