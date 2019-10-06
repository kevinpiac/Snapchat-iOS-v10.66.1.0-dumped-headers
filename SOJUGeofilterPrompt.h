//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGeofilterPrompt-Protocol.h"

@class NSNumber, NSString;

@interface SOJUGeofilterPrompt : NSObject <SOJUGeofilterPrompt>
{
    NSString *_text;
    NSString *_position;
    NSNumber *_fadeInTimeMs;
    NSNumber *_onScreenTimeMs;
    NSNumber *_fadeOutTimeMs;
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
@property(readonly, copy, nonatomic) NSNumber *fadeInTimeMs; // @synthesize fadeInTimeMs=_fadeInTimeMs;
- (long long)fadeInTimeMsValue;
@property(readonly, copy, nonatomic) NSNumber *fadeOutTimeMs; // @synthesize fadeOutTimeMs=_fadeOutTimeMs;
- (long long)fadeOutTimeMsValue;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithText:(id)arg1 position:(id)arg2 fadeInTimeMs:(id)arg3 onScreenTimeMs:(id)arg4 fadeOutTimeMs:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *onScreenTimeMs; // @synthesize onScreenTimeMs=_onScreenTimeMs;
- (long long)onScreenTimeMsValue;
@property(readonly, copy, nonatomic) NSString *position; // @synthesize position=_position;
- (long long)positionEnum;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

