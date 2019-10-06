//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJULastChatActions-Protocol.h"

@class NSNumber, NSString;

@interface SOJULastChatActions : NSObject <SOJULastChatActions>
{
    NSString *_lastReader;
    NSNumber *_lastReadTimestamp;
    NSString *_lastWriter;
    NSNumber *_lastWriteTimestamp;
    NSString *_lastWriteType;
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
- (id)initWithLastReader:(id)arg1 lastReadTimestamp:(id)arg2 lastWriter:(id)arg3 lastWriteTimestamp:(id)arg4 lastWriteType:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *lastReadTimestamp; // @synthesize lastReadTimestamp=_lastReadTimestamp;
- (long long)lastReadTimestampValue;
@property(readonly, copy, nonatomic) NSString *lastReader; // @synthesize lastReader=_lastReader;
@property(readonly, copy, nonatomic) NSNumber *lastWriteTimestamp; // @synthesize lastWriteTimestamp=_lastWriteTimestamp;
- (long long)lastWriteTimestampValue;
@property(readonly, copy, nonatomic) NSString *lastWriteType; // @synthesize lastWriteType=_lastWriteType;
@property(readonly, copy, nonatomic) NSString *lastWriter; // @synthesize lastWriter=_lastWriter;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

