//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUSecurityRetrieveKeyResponse-Protocol.h"

@class NSNumber, NSString;

@interface SOJUSecurityRetrieveKeyResponse : NSObject <SOJUSecurityRetrieveKeyResponse>
{
    NSString *_key;
    NSNumber *_rateLimitExpiration;
    NSNumber *_currentTimestamp;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSNumber *currentTimestamp; // @synthesize currentTimestamp=_currentTimestamp;
- (long long)currentTimestampValue;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithKey:(id)arg1 rateLimitExpiration:(id)arg2 currentTimestamp:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *rateLimitExpiration; // @synthesize rateLimitExpiration=_rateLimitExpiration;
- (long long)rateLimitExpirationValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

