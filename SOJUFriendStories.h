//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUFriendStories-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUAdsStoryAdMetadata, SOJUBroadcastOfficialStoriesMetadata, SOJUBroadcastTileMetadata, SOJUStoryThumbnails;

@interface SOJUFriendStories : NSObject <SOJUFriendStories>
{
    NSString *_username;
    NSArray *_stories;
    NSString *_displayName;
    NSNumber *_isLocal;
    NSString *_profileDescription;
    NSString *_deepLinkUrl;
    NSString *_sharedId;
    NSNumber *_matureContent;
    SOJUAdsStoryAdMetadata *_adPlacementMetadata;
    SOJUStoryThumbnails *_thumbnails;
    NSNumber *_allowStoryExplorer;
    NSNumber *_hasCustomDescription;
    NSNumber *_showViewingJit;
    SOJUBroadcastTileMetadata *_featuredStory;
    NSNumber *_isManifestStory;
    NSString *_type;
    NSString *_publisherId;
    SOJUBroadcastOfficialStoriesMetadata *_officialStoriesMetadata;
    NSNumber *_sojuNewStoryCount;
    NSString *_userId;
    NSString *_mobType;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SOJUAdsStoryAdMetadata *adPlacementMetadata; // @synthesize adPlacementMetadata=_adPlacementMetadata;
@property(readonly, copy, nonatomic) NSNumber *allowStoryExplorer; // @synthesize allowStoryExplorer=_allowStoryExplorer;
- (_Bool)allowStoryExplorerValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *deepLinkUrl; // @synthesize deepLinkUrl=_deepLinkUrl;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) SOJUBroadcastTileMetadata *featuredStory; // @synthesize featuredStory=_featuredStory;
@property(readonly, copy, nonatomic) NSNumber *hasCustomDescription; // @synthesize hasCustomDescription=_hasCustomDescription;
- (_Bool)hasCustomDescriptionValue;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithUsername:(id)arg1 stories:(id)arg2 displayName:(id)arg3 isLocal:(id)arg4 profileDescription:(id)arg5 deepLinkUrl:(id)arg6 sharedId:(id)arg7 matureContent:(id)arg8 adPlacementMetadata:(id)arg9 thumbnails:(id)arg10 allowStoryExplorer:(id)arg11 hasCustomDescription:(id)arg12 showViewingJit:(id)arg13 featuredStory:(id)arg14 isManifestStory:(id)arg15 type:(id)arg16 publisherId:(id)arg17 officialStoriesMetadata:(id)arg18 sojuNewStoryCount:(id)arg19 userId:(id)arg20 mobType:(id)arg21;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isLocal; // @synthesize isLocal=_isLocal;
- (_Bool)isLocalValue;
@property(readonly, copy, nonatomic) NSNumber *isManifestStory; // @synthesize isManifestStory=_isManifestStory;
- (_Bool)isManifestStoryValue;
@property(readonly, copy, nonatomic) NSNumber *matureContent; // @synthesize matureContent=_matureContent;
- (_Bool)matureContentValue;
@property(readonly, copy, nonatomic) NSString *mobType; // @synthesize mobType=_mobType;
- (long long)mobTypeEnum;
@property(readonly, copy, nonatomic) SOJUBroadcastOfficialStoriesMetadata *officialStoriesMetadata; // @synthesize officialStoriesMetadata=_officialStoriesMetadata;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;
@property(readonly, copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *sharedId; // @synthesize sharedId=_sharedId;
@property(readonly, copy, nonatomic) NSNumber *showViewingJit; // @synthesize showViewingJit=_showViewingJit;
- (_Bool)showViewingJitValue;
@property(readonly, copy, nonatomic) NSNumber *sojuNewStoryCount; // @synthesize sojuNewStoryCount=_sojuNewStoryCount;
- (int)sojuNewStoryCountValue;
@property(readonly, copy, nonatomic) NSArray *stories; // @synthesize stories=_stories;
@property(readonly, copy, nonatomic) SOJUStoryThumbnails *thumbnails; // @synthesize thumbnails=_thumbnails;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (long long)typeEnum;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
