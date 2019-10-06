//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUDiscoverModerationAudience-Protocol.h"

@class NSNumber, NSString;

@interface SOJUDiscoverModerationAudience : NSObject <SOJUDiscoverModerationAudience>
{
    NSNumber *_anyoneCanView;
    NSNumber *_nobodyUnder18CanView;
    NSNumber *_nobodyCanView;
    NSNumber *_nobodyInSensitiveCountryCanView;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *anyoneCanView; // @synthesize anyoneCanView=_anyoneCanView;
- (_Bool)anyoneCanViewValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithAnyoneCanView:(id)arg1 nobodyUnder18CanView:(id)arg2 nobodyCanView:(id)arg3 nobodyInSensitiveCountryCanView:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *nobodyCanView; // @synthesize nobodyCanView=_nobodyCanView;
- (_Bool)nobodyCanViewValue;
@property(readonly, copy, nonatomic) NSNumber *nobodyInSensitiveCountryCanView; // @synthesize nobodyInSensitiveCountryCanView=_nobodyInSensitiveCountryCanView;
- (_Bool)nobodyInSensitiveCountryCanViewValue;
@property(readonly, copy, nonatomic) NSNumber *nobodyUnder18CanView; // @synthesize nobodyUnder18CanView=_nobodyUnder18CanView;
- (_Bool)nobodyUnder18CanViewValue;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

