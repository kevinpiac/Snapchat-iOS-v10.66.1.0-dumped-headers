//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfigPerSection-Protocol.h"

@class NSString, SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig;

@interface SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfigPerSection : NSObject <SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfigPerSection>
{
    NSString *_sectionId;
    SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig *_lookaheadPrecache;
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
- (id)initWithSectionId:(id)arg1 lookaheadPrecache:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig *lookaheadPrecache; // @synthesize lookaheadPrecache=_lookaheadPrecache;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *sectionId; // @synthesize sectionId=_sectionId;
- (long long)sectionIdEnum;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

