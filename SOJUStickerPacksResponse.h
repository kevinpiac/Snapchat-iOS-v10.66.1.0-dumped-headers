//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUStickerPacksResponse-Protocol.h"

@class NSArray, NSString, SOJUBitmojiSmartReply, SOJUBloopsBloopsConfig, SOJUMegaStickerPackMetadata, SOJUStickerConfig, SOJUStickerPackGiphyStickerConfig, SOJUStickerSearchPack, SOJUWeatherResponse;

@interface SOJUStickerPacksResponse : NSObject <SOJUStickerPacksResponse>
{
    NSArray *_stickerPacks;
    SOJUStickerSearchPack *_searchPack;
    SOJUStickerConfig *_stickerConfig;
    NSArray *_stickerPacksV2;
    NSArray *_searchPacksV2;
    NSArray *_featuredStickers;
    SOJUMegaStickerPackMetadata *_megaStickerPack;
    SOJUBitmojiSmartReply *_bitmojiSmartReply;
    SOJUStickerPackGiphyStickerConfig *_giphyConfig;
    SOJUWeatherResponse *_weather;
    SOJUBloopsBloopsConfig *_bloops;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SOJUBitmojiSmartReply *bitmojiSmartReply; // @synthesize bitmojiSmartReply=_bitmojiSmartReply;
@property(readonly, copy, nonatomic) SOJUBloopsBloopsConfig *bloops; // @synthesize bloops=_bloops;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *featuredStickers; // @synthesize featuredStickers=_featuredStickers;
@property(readonly, copy, nonatomic) SOJUStickerPackGiphyStickerConfig *giphyConfig; // @synthesize giphyConfig=_giphyConfig;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithStickerPacks:(id)arg1 searchPack:(id)arg2 stickerConfig:(id)arg3 stickerPacksV2:(id)arg4 searchPacksV2:(id)arg5 featuredStickers:(id)arg6 megaStickerPack:(id)arg7 bitmojiSmartReply:(id)arg8 giphyConfig:(id)arg9 weather:(id)arg10 bloops:(id)arg11;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SOJUMegaStickerPackMetadata *megaStickerPack; // @synthesize megaStickerPack=_megaStickerPack;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) SOJUStickerSearchPack *searchPack; // @synthesize searchPack=_searchPack;
@property(readonly, copy, nonatomic) NSArray *searchPacksV2; // @synthesize searchPacksV2=_searchPacksV2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) SOJUStickerConfig *stickerConfig; // @synthesize stickerConfig=_stickerConfig;
@property(readonly, copy, nonatomic) NSArray *stickerPacks; // @synthesize stickerPacks=_stickerPacks;
@property(readonly, copy, nonatomic) NSArray *stickerPacksV2; // @synthesize stickerPacksV2=_stickerPacksV2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) SOJUWeatherResponse *weather; // @synthesize weather=_weather;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

