//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUVideoChatParams-Protocol.h"

@class NSString;

@interface SOJUVideoChatParams : NSObject <SOJUVideoChatParams>
{
    NSString *_mac;
    NSString *_token;
    NSString *_scopeId;
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
- (id)initWithMac:(id)arg1 token:(id)arg2 scopeId:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *mac; // @synthesize mac=_mac;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *scopeId; // @synthesize scopeId=_scopeId;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

