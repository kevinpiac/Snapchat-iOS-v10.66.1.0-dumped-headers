//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUStory-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUAdPlacementMetadata, SOJUAudioStitch, SOJUBroadcastAttribution, SOJUCaption, SOJUSnapConnectAttributes, SOJUSnapCreatorAttribution, SOJUSponsoredSlugPosAndText, SOJUSponsoredStoryMetadata, SOJUStoryFrame;

@interface SOJUStory : NSObject <SOJUStory>
{
    NSString *_idValue;
    NSString *_username;
    NSNumber *_matureContent;
    NSString *_clientId;
    NSNumber *_timestamp;
    SOJUStoryFrame *_framing;
    NSString *_mediaId;
    NSString *_mediaKey;
    NSString *_mediaUrl;
    NSString *_mediaIv;
    NSString *_thumbnailIv;
    NSString *_thumbnailUrl;
    NSNumber *_mediaType;
    NSNumber *_time;
    NSNumber *_timeLeft;
    NSString *_captionTextDisplay;
    SOJUCaption *_caption;
    NSNumber *_zipped;
    NSString *_filterId;
    NSArray *_unlockables;
    NSString *_storyFilterId;
    SOJUSponsoredStoryMetadata *_sponsoredStoryMetadata;
    NSNumber *_isShared;
    SOJUAdPlacementMetadata *_adPlacementMetadata;
    NSNumber *_needsAuth;
    NSNumber *_adCanFollow;
    NSNumber *_isSponsored;
    SOJUSponsoredSlugPosAndText *_sponsoredSlug;
    NSString *_submissionId;
    NSString *_encGeoData;
    NSArray *_unlockablesVendorTags;
    SOJUBroadcastAttribution *_attribution;
    NSNumber *_isOfficialStory;
    NSString *_snapAttachmentUrl;
    NSNumber *_isPublic;
    NSNumber *_isInfiniteDuration;
    NSString *_venueId;
    NSNumber *_brandFriendliness;
    SOJUAudioStitch *_audioStitch;
    NSString *_mediaD2sUrl;
    NSArray *_ruleFileParameters;
    NSString *_filterGeofilterId;
    NSString *_filterLensId;
    NSString *_contextHint;
    NSString *_animatedSnapType;
    NSString *_largeThumbnailUrl;
    NSString *_lensMetadata;
    NSString *_unlockablesSnapInfo;
    SOJUSnapConnectAttributes *_snapConnectAttributes;
    SOJUSnapCreatorAttribution *_repostAttribution;
    NSString *_comment;
    NSString *_contentObject;
    NSString *_captureSessionId;
    NSString *_legacyZippedCo;
    NSString *_mediaCo;
    NSString *_overlayCo;
    NSString *_thumbnailCo;
    NSString *_contextClientInfo;
    NSString *_videoContentUrl;
    NSString *_overlayContentUrl;
    NSString *_firstFrameVideoContentUrl;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *adCanFollow; // @synthesize adCanFollow=_adCanFollow;
- (_Bool)adCanFollowValue;
@property(readonly, copy, nonatomic) SOJUAdPlacementMetadata *adPlacementMetadata; // @synthesize adPlacementMetadata=_adPlacementMetadata;
@property(readonly, copy, nonatomic) NSString *animatedSnapType; // @synthesize animatedSnapType=_animatedSnapType;
- (long long)animatedSnapTypeEnum;
@property(readonly, copy, nonatomic) SOJUBroadcastAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, copy, nonatomic) SOJUAudioStitch *audioStitch; // @synthesize audioStitch=_audioStitch;
@property(readonly, copy, nonatomic) NSNumber *brandFriendliness; // @synthesize brandFriendliness=_brandFriendliness;
- (int)brandFriendlinessValue;
@property(readonly, copy, nonatomic) SOJUCaption *caption; // @synthesize caption=_caption;
@property(readonly, copy, nonatomic) NSString *captionTextDisplay; // @synthesize captionTextDisplay=_captionTextDisplay;
@property(readonly, copy, nonatomic) NSString *captureSessionId; // @synthesize captureSessionId=_captureSessionId;
@property(readonly, copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(readonly, copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, copy, nonatomic) NSString *contentObject; // @synthesize contentObject=_contentObject;
@property(readonly, copy, nonatomic) NSString *contextClientInfo; // @synthesize contextClientInfo=_contextClientInfo;
@property(readonly, copy, nonatomic) NSString *contextHint; // @synthesize contextHint=_contextHint;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *encGeoData; // @synthesize encGeoData=_encGeoData;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *filterGeofilterId; // @synthesize filterGeofilterId=_filterGeofilterId;
@property(readonly, copy, nonatomic) NSString *filterId; // @synthesize filterId=_filterId;
@property(readonly, copy, nonatomic) NSString *filterLensId; // @synthesize filterLensId=_filterLensId;
@property(readonly, copy, nonatomic) NSString *firstFrameVideoContentUrl; // @synthesize firstFrameVideoContentUrl=_firstFrameVideoContentUrl;
@property(readonly, copy, nonatomic) SOJUStoryFrame *framing; // @synthesize framing=_framing;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdValue:(id)arg1 username:(id)arg2 matureContent:(id)arg3 clientId:(id)arg4 timestamp:(id)arg5 framing:(id)arg6 mediaId:(id)arg7 mediaKey:(id)arg8 mediaUrl:(id)arg9 mediaIv:(id)arg10 thumbnailIv:(id)arg11 thumbnailUrl:(id)arg12 mediaType:(id)arg13 time:(id)arg14 timeLeft:(id)arg15 captionTextDisplay:(id)arg16 caption:(id)arg17 zipped:(id)arg18 filterId:(id)arg19 unlockables:(id)arg20 storyFilterId:(id)arg21 sponsoredStoryMetadata:(id)arg22 isShared:(id)arg23 adPlacementMetadata:(id)arg24 needsAuth:(id)arg25 adCanFollow:(id)arg26 isSponsored:(id)arg27 sponsoredSlug:(id)arg28 submissionId:(id)arg29 encGeoData:(id)arg30 unlockablesVendorTags:(id)arg31 attribution:(id)arg32 isOfficialStory:(id)arg33 snapAttachmentUrl:(id)arg34 isPublic:(id)arg35 isInfiniteDuration:(id)arg36 venueId:(id)arg37 brandFriendliness:(id)arg38 audioStitch:(id)arg39 mediaD2sUrl:(id)arg40 ruleFileParameters:(id)arg41 filterGeofilterId:(id)arg42 filterLensId:(id)arg43 contextHint:(id)arg44 animatedSnapType:(id)arg45 largeThumbnailUrl:(id)arg46 lensMetadata:(id)arg47 unlockablesSnapInfo:(id)arg48 snapConnectAttributes:(id)arg49 repostAttribution:(id)arg50 comment:(id)arg51 contentObject:(id)arg52 captureSessionId:(id)arg53 legacyZippedCo:(id)arg54 mediaCo:(id)arg55 overlayCo:(id)arg56 thumbnailCo:(id)arg57 contextClientInfo:(id)arg58 videoContentUrl:(id)arg59 overlayContentUrl:(id)arg60 firstFrameVideoContentUrl:(id)arg61;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isInfiniteDuration; // @synthesize isInfiniteDuration=_isInfiniteDuration;
- (_Bool)isInfiniteDurationValue;
@property(readonly, copy, nonatomic) NSNumber *isOfficialStory; // @synthesize isOfficialStory=_isOfficialStory;
- (_Bool)isOfficialStoryValue;
@property(readonly, copy, nonatomic) NSNumber *isPublic; // @synthesize isPublic=_isPublic;
- (_Bool)isPublicValue;
@property(readonly, copy, nonatomic) NSNumber *isShared; // @synthesize isShared=_isShared;
- (_Bool)isSharedValue;
@property(readonly, copy, nonatomic) NSNumber *isSponsored; // @synthesize isSponsored=_isSponsored;
- (_Bool)isSponsoredValue;
@property(readonly, copy, nonatomic) NSString *largeThumbnailUrl; // @synthesize largeThumbnailUrl=_largeThumbnailUrl;
@property(readonly, copy, nonatomic) NSString *legacyZippedCo; // @synthesize legacyZippedCo=_legacyZippedCo;
@property(readonly, copy, nonatomic) NSString *lensMetadata; // @synthesize lensMetadata=_lensMetadata;
@property(readonly, copy, nonatomic) NSNumber *matureContent; // @synthesize matureContent=_matureContent;
- (_Bool)matureContentValue;
@property(readonly, copy, nonatomic) NSString *mediaCo; // @synthesize mediaCo=_mediaCo;
@property(readonly, copy, nonatomic) NSString *mediaD2sUrl; // @synthesize mediaD2sUrl=_mediaD2sUrl;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, copy, nonatomic) NSString *mediaIv; // @synthesize mediaIv=_mediaIv;
@property(readonly, copy, nonatomic) NSString *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(readonly, copy, nonatomic) NSNumber *mediaType; // @synthesize mediaType=_mediaType;
- (int)mediaTypeValue;
@property(readonly, copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(readonly, copy, nonatomic) NSNumber *needsAuth; // @synthesize needsAuth=_needsAuth;
- (_Bool)needsAuthValue;
@property(readonly, copy, nonatomic) NSString *overlayCo; // @synthesize overlayCo=_overlayCo;
@property(readonly, copy, nonatomic) NSString *overlayContentUrl; // @synthesize overlayContentUrl=_overlayContentUrl;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) SOJUSnapCreatorAttribution *repostAttribution; // @synthesize repostAttribution=_repostAttribution;
@property(readonly, copy, nonatomic) NSArray *ruleFileParameters; // @synthesize ruleFileParameters=_ruleFileParameters;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *snapAttachmentUrl; // @synthesize snapAttachmentUrl=_snapAttachmentUrl;
@property(readonly, copy, nonatomic) SOJUSnapConnectAttributes *snapConnectAttributes; // @synthesize snapConnectAttributes=_snapConnectAttributes;
@property(readonly, copy, nonatomic) SOJUSponsoredSlugPosAndText *sponsoredSlug; // @synthesize sponsoredSlug=_sponsoredSlug;
@property(readonly, copy, nonatomic) SOJUSponsoredStoryMetadata *sponsoredStoryMetadata; // @synthesize sponsoredStoryMetadata=_sponsoredStoryMetadata;
@property(readonly, copy, nonatomic) NSString *storyFilterId; // @synthesize storyFilterId=_storyFilterId;
@property(readonly, copy, nonatomic) NSString *submissionId; // @synthesize submissionId=_submissionId;
@property(readonly, copy, nonatomic) NSString *thumbnailCo; // @synthesize thumbnailCo=_thumbnailCo;
@property(readonly, copy, nonatomic) NSString *thumbnailIv; // @synthesize thumbnailIv=_thumbnailIv;
@property(readonly, copy, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(readonly, copy, nonatomic) NSNumber *time; // @synthesize time=_time;
@property(readonly, copy, nonatomic) NSNumber *timeLeft; // @synthesize timeLeft=_timeLeft;
- (long long)timeLeftValue;
- (double)timeValue;
@property(readonly, copy, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
- (long long)timestampValue;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSArray *unlockables; // @synthesize unlockables=_unlockables;
@property(readonly, copy, nonatomic) NSString *unlockablesSnapInfo; // @synthesize unlockablesSnapInfo=_unlockablesSnapInfo;
@property(readonly, copy, nonatomic) NSArray *unlockablesVendorTags; // @synthesize unlockablesVendorTags=_unlockablesVendorTags;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;
@property(readonly, copy, nonatomic) NSString *videoContentUrl; // @synthesize videoContentUrl=_videoContentUrl;
@property(readonly, copy, nonatomic) NSNumber *zipped; // @synthesize zipped=_zipped;
- (_Bool)zippedValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

