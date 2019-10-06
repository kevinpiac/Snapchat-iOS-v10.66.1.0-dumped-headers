//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAstSignal-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAstSignal : NSObject <SOJUAstSignal>
{
    NSString *_name;
    NSString *_descriptionValue;
    NSString *_type;
    NSString *_version;
    NSNumber *_value;
    NSNumber *_identifier;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *descriptionValue; // @synthesize descriptionValue=_descriptionValue;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
- (int)identifierValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithName:(id)arg1 descriptionValue:(id)arg2 type:(id)arg3 version:(id)arg4 value:(id)arg5 identifier:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (long long)typeEnum;
@property(readonly, copy, nonatomic) NSNumber *value; // @synthesize value=_value;
- (float)valueValue;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

