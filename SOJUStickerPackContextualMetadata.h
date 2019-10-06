//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUStickerPackContextualMetadata-Protocol.h"

@class NSNumber, NSString;

@interface SOJUStickerPackContextualMetadata : NSObject <SOJUStickerPackContextualMetadata>
{
    NSString *_placement;
    NSNumber *_priority;
    NSNumber *_displayCount;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSNumber *displayCount; // @synthesize displayCount=_displayCount;
- (int)displayCountValue;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithPlacement:(id)arg1 priority:(id)arg2 displayCount:(id)arg3;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *placement; // @synthesize placement=_placement;
- (long long)placementEnum;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *priority; // @synthesize priority=_priority;
- (int)priorityValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

