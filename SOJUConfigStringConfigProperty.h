//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUConfigStringConfigProperty-Protocol.h"

@class NSNumber, NSString;

@interface SOJUConfigStringConfigProperty : NSObject <SOJUConfigStringConfigProperty>
{
    NSString *_name;
    NSNumber *_reloadAppOnChange;
    NSString *_value;
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
- (id)initWithName:(id)arg1 reloadAppOnChange:(id)arg2 value:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *reloadAppOnChange; // @synthesize reloadAppOnChange=_reloadAppOnChange;
- (_Bool)reloadAppOnChangeValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

