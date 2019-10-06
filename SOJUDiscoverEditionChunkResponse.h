//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUDiscoverEditionChunkResponse-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUAdPlacementMetadata, SOJUBroadcastArticleMetadata, SOJUDiscoverModerationSnapModeration;

@interface SOJUDiscoverEditionChunkResponse : NSObject <SOJUDiscoverEditionChunkResponse>
{
    NSString *_url;
    NSNumber *_dsnapId;
    NSString *_dsnapType;
    NSString *_hashValue;
    NSString *_color;
    NSNumber *_adType;
    SOJUAdPlacementMetadata *_adPlacementMetadata;
    SOJUBroadcastArticleMetadata *_tile;
    NSArray *_tiles;
    NSDictionary *_tags;
    SOJUDiscoverModerationSnapModeration *_moderation;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SOJUAdPlacementMetadata *adPlacementMetadata; // @synthesize adPlacementMetadata=_adPlacementMetadata;
@property(readonly, copy, nonatomic) NSNumber *adType; // @synthesize adType=_adType;
- (int)adTypeValue;
@property(readonly, copy, nonatomic) NSString *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSNumber *dsnapId; // @synthesize dsnapId=_dsnapId;
- (long long)dsnapIdValue;
@property(readonly, copy, nonatomic) NSString *dsnapType; // @synthesize dsnapType=_dsnapType;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *hashValue; // @synthesize hashValue=_hashValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithUrl:(id)arg1 dsnapId:(id)arg2 dsnapType:(id)arg3 hashValue:(id)arg4 color:(id)arg5 adType:(id)arg6 adPlacementMetadata:(id)arg7 tile:(id)arg8 tiles:(id)arg9 tags:(id)arg10 moderation:(id)arg11;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SOJUDiscoverModerationSnapModeration *moderation; // @synthesize moderation=_moderation;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSDictionary *tags; // @synthesize tags=_tags;
@property(readonly, copy, nonatomic) SOJUBroadcastArticleMetadata *tile; // @synthesize tile=_tile;
@property(readonly, copy, nonatomic) NSArray *tiles; // @synthesize tiles=_tiles;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
