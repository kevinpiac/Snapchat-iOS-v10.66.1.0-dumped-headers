//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdFilterImpressionTrack-Protocol.h"

@class NSNumber, NSString, SOJUAdUnlockableAttachmentImpression;

@interface SOJUAdFilterImpressionTrack : NSObject <SOJUAdFilterImpressionTrack>
{
    NSString *_geofilterId;
    NSNumber *_totalSwipedViewMillis;
    NSString *_encGeoData;
    NSNumber *_swipedOverCount;
    NSNumber *_withSnapSend;
    NSNumber *_withStoryPost;
    NSNumber *_withMemoriesSave;
    NSNumber *_filterIndexPos;
    NSString *_geofilterType;
    NSString *_rawAdData;
    NSNumber *_filterGeofilterIndexPos;
    NSNumber *_firstSeenTimestamp;
    NSString *_encryptedSponsoredUnlockableTargetingInfoData;
    NSString *_rankingId;
    NSString *_rankingData;
    NSNumber *_snapSendRecipientCount;
    NSNumber *_snapSendCount;
    NSNumber *_storyPostCount;
    NSNumber *_memoriesSaveCount;
    NSNumber *_captureTimeMillis;
    NSNumber *_postCaptureTimeMillis;
    NSNumber *_maxSwipeTimeMillis;
    NSNumber *_maxContinuousTimeMillis;
    NSNumber *_totalTimeMillis;
    NSNumber *_reactionTimestamp;
    NSNumber *_shareTimestamp;
    NSNumber *_swipeUpTimestamp;
    NSNumber *_saveTimestamp;
    NSNumber *_screenshotTimestamp;
    SOJUAdUnlockableAttachmentImpression *_attachmentImpression;
    NSNumber *_withAttachmentOpen;
    NSString *_attachmentType;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SOJUAdUnlockableAttachmentImpression *attachmentImpression; // @synthesize attachmentImpression=_attachmentImpression;
@property(readonly, copy, nonatomic) NSString *attachmentType; // @synthesize attachmentType=_attachmentType;
- (long long)attachmentTypeEnum;
@property(readonly, copy, nonatomic) NSNumber *captureTimeMillis; // @synthesize captureTimeMillis=_captureTimeMillis;
- (long long)captureTimeMillisValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *encGeoData; // @synthesize encGeoData=_encGeoData;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *encryptedSponsoredUnlockableTargetingInfoData; // @synthesize encryptedSponsoredUnlockableTargetingInfoData=_encryptedSponsoredUnlockableTargetingInfoData;
@property(readonly, copy, nonatomic) NSNumber *filterGeofilterIndexPos; // @synthesize filterGeofilterIndexPos=_filterGeofilterIndexPos;
- (long long)filterGeofilterIndexPosValue;
@property(readonly, copy, nonatomic) NSNumber *filterIndexPos; // @synthesize filterIndexPos=_filterIndexPos;
- (long long)filterIndexPosValue;
@property(readonly, copy, nonatomic) NSNumber *firstSeenTimestamp; // @synthesize firstSeenTimestamp=_firstSeenTimestamp;
- (long long)firstSeenTimestampValue;
@property(readonly, copy, nonatomic) NSString *geofilterId; // @synthesize geofilterId=_geofilterId;
@property(readonly, copy, nonatomic) NSString *geofilterType; // @synthesize geofilterType=_geofilterType;
- (long long)geofilterTypeEnum;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeofilterId:(id)arg1 totalSwipedViewMillis:(id)arg2 encGeoData:(id)arg3 swipedOverCount:(id)arg4 withSnapSend:(id)arg5 withStoryPost:(id)arg6 withMemoriesSave:(id)arg7 filterIndexPos:(id)arg8 geofilterType:(id)arg9 rawAdData:(id)arg10 filterGeofilterIndexPos:(id)arg11 firstSeenTimestamp:(id)arg12 encryptedSponsoredUnlockableTargetingInfoData:(id)arg13 rankingId:(id)arg14 rankingData:(id)arg15 snapSendRecipientCount:(id)arg16 snapSendCount:(id)arg17 storyPostCount:(id)arg18 memoriesSaveCount:(id)arg19 captureTimeMillis:(id)arg20 postCaptureTimeMillis:(id)arg21 maxSwipeTimeMillis:(id)arg22 maxContinuousTimeMillis:(id)arg23 totalTimeMillis:(id)arg24 reactionTimestamp:(id)arg25 shareTimestamp:(id)arg26 swipeUpTimestamp:(id)arg27 saveTimestamp:(id)arg28 screenshotTimestamp:(id)arg29 attachmentImpression:(id)arg30 withAttachmentOpen:(id)arg31 attachmentType:(id)arg32;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *maxContinuousTimeMillis; // @synthesize maxContinuousTimeMillis=_maxContinuousTimeMillis;
- (long long)maxContinuousTimeMillisValue;
@property(readonly, copy, nonatomic) NSNumber *maxSwipeTimeMillis; // @synthesize maxSwipeTimeMillis=_maxSwipeTimeMillis;
- (long long)maxSwipeTimeMillisValue;
@property(readonly, copy, nonatomic) NSNumber *memoriesSaveCount; // @synthesize memoriesSaveCount=_memoriesSaveCount;
- (long long)memoriesSaveCountValue;
@property(readonly, copy, nonatomic) NSNumber *postCaptureTimeMillis; // @synthesize postCaptureTimeMillis=_postCaptureTimeMillis;
- (long long)postCaptureTimeMillisValue;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *rankingData; // @synthesize rankingData=_rankingData;
@property(readonly, copy, nonatomic) NSString *rankingId; // @synthesize rankingId=_rankingId;
@property(readonly, copy, nonatomic) NSString *rawAdData; // @synthesize rawAdData=_rawAdData;
@property(readonly, copy, nonatomic) NSNumber *reactionTimestamp; // @synthesize reactionTimestamp=_reactionTimestamp;
- (long long)reactionTimestampValue;
@property(readonly, copy, nonatomic) NSNumber *saveTimestamp; // @synthesize saveTimestamp=_saveTimestamp;
- (long long)saveTimestampValue;
@property(readonly, copy, nonatomic) NSNumber *screenshotTimestamp; // @synthesize screenshotTimestamp=_screenshotTimestamp;
- (long long)screenshotTimestampValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *shareTimestamp; // @synthesize shareTimestamp=_shareTimestamp;
- (long long)shareTimestampValue;
@property(readonly, copy, nonatomic) NSNumber *snapSendCount; // @synthesize snapSendCount=_snapSendCount;
- (long long)snapSendCountValue;
@property(readonly, copy, nonatomic) NSNumber *snapSendRecipientCount; // @synthesize snapSendRecipientCount=_snapSendRecipientCount;
- (long long)snapSendRecipientCountValue;
@property(readonly, copy, nonatomic) NSNumber *storyPostCount; // @synthesize storyPostCount=_storyPostCount;
- (long long)storyPostCountValue;
@property(readonly, copy, nonatomic) NSNumber *swipeUpTimestamp; // @synthesize swipeUpTimestamp=_swipeUpTimestamp;
- (long long)swipeUpTimestampValue;
@property(readonly, copy, nonatomic) NSNumber *swipedOverCount; // @synthesize swipedOverCount=_swipedOverCount;
- (long long)swipedOverCountValue;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *totalSwipedViewMillis; // @synthesize totalSwipedViewMillis=_totalSwipedViewMillis;
- (long long)totalSwipedViewMillisValue;
@property(readonly, copy, nonatomic) NSNumber *totalTimeMillis; // @synthesize totalTimeMillis=_totalTimeMillis;
- (long long)totalTimeMillisValue;
@property(readonly, copy, nonatomic) NSNumber *withAttachmentOpen; // @synthesize withAttachmentOpen=_withAttachmentOpen;
- (_Bool)withAttachmentOpenValue;
@property(readonly, copy, nonatomic) NSNumber *withMemoriesSave; // @synthesize withMemoriesSave=_withMemoriesSave;
- (_Bool)withMemoriesSaveValue;
@property(readonly, copy, nonatomic) NSNumber *withSnapSend; // @synthesize withSnapSend=_withSnapSend;
- (_Bool)withSnapSendValue;
@property(readonly, copy, nonatomic) NSNumber *withStoryPost; // @synthesize withStoryPost=_withStoryPost;
- (_Bool)withStoryPostValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

