//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUSecurityRegisterKeyRequest-Protocol.h"

@class NSString;

@interface SOJUSecurityRegisterKeyRequest : NSObject <SOJUSecurityRegisterKeyRequest>
{
    NSString *_assertion;
    NSString *_auth;
    NSString *_key;
    NSString *_keyType;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *assertion; // @synthesize assertion=_assertion;
@property(readonly, copy, nonatomic) NSString *auth; // @synthesize auth=_auth;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithAssertion:(id)arg1 auth:(id)arg2 key:(id)arg3 keyType:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSString *keyType; // @synthesize keyType=_keyType;
- (long long)keyTypeEnum;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
