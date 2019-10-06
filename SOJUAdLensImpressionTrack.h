//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdLensImpressionTrack-Protocol.h"

@class NSNumber, NSString, SOJUAdLensPerformanceMetrics, SOJUAdUnlockableAttachmentImpression;

@interface SOJUAdLensImpressionTrack : NSObject <SOJUAdLensImpressionTrack>
{
    NSString *_lensId;
    NSNumber *_totalSwipedViewMillis;
    NSString *_lensOptionId;
    NSNumber *_swipedOverCount;
    NSNumber *_withSnapSend;
    NSNumber *_withStoryPost;
    NSNumber *_withMemoriesSave;
    NSNumber *_withSelfieCamera;
    NSNumber *_withWorldCamera;
    NSNumber *_isAudioOn;
    NSNumber *_lensIndexPos;
    NSString *_rawAdData;
    NSString *_encryptedSponsoredUnlockableTargetingInfoData;
    NSString *_rankingId;
    NSString *_rankingData;
    SOJUAdUnlockableAttachmentImpression *_attachmentImpression;
    NSString *_encGeoData;
    NSNumber *_withAttachmentOpen;
    NSString *_attachmentType;
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
    NSNumber *_unlockType;
    NSString *_lensCreativeId;
    NSNumber *_firstFaceRenderTimestamp;
    NSNumber *_firstTriggerTimestamp;
    SOJUAdLensPerformanceMetrics *_lensPerformanceMetrics;
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
@property(readonly, copy, nonatomic) NSNumber *firstFaceRenderTimestamp; // @synthesize firstFaceRenderTimestamp=_firstFaceRenderTimestamp;
- (long long)firstFaceRenderTimestampValue;
@property(readonly, copy, nonatomic) NSNumber *firstTriggerTimestamp; // @synthesize firstTriggerTimestamp=_firstTriggerTimestamp;
- (long long)firstTriggerTimestampValue;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithLensId:(id)arg1 totalSwipedViewMillis:(id)arg2 lensOptionId:(id)arg3 swipedOverCount:(id)arg4 withSnapSend:(id)arg5 withStoryPost:(id)arg6 withMemoriesSave:(id)arg7 withSelfieCamera:(id)arg8 withWorldCamera:(id)arg9 isAudioOn:(id)arg10 lensIndexPos:(id)arg11 rawAdData:(id)arg12 encryptedSponsoredUnlockableTargetingInfoData:(id)arg13 rankingId:(id)arg14 rankingData:(id)arg15 attachmentImpression:(id)arg16 encGeoData:(id)arg17 withAttachmentOpen:(id)arg18 attachmentType:(id)arg19 snapSendRecipientCount:(id)arg20 snapSendCount:(id)arg21 storyPostCount:(id)arg22 memoriesSaveCount:(id)arg23 captureTimeMillis:(id)arg24 postCaptureTimeMillis:(id)arg25 maxSwipeTimeMillis:(id)arg26 maxContinuousTimeMillis:(id)arg27 totalTimeMillis:(id)arg28 reactionTimestamp:(id)arg29 shareTimestamp:(id)arg30 swipeUpTimestamp:(id)arg31 saveTimestamp:(id)arg32 screenshotTimestamp:(id)arg33 unlockType:(id)arg34 lensCreativeId:(id)arg35 firstFaceRenderTimestamp:(id)arg36 firstTriggerTimestamp:(id)arg37 lensPerformanceMetrics:(id)arg38;
@property(readonly, copy, nonatomic) NSNumber *isAudioOn; // @synthesize isAudioOn=_isAudioOn;
- (_Bool)isAudioOnValue;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *lensCreativeId; // @synthesize lensCreativeId=_lensCreativeId;
@property(readonly, copy, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
@property(readonly, copy, nonatomic) NSNumber *lensIndexPos; // @synthesize lensIndexPos=_lensIndexPos;
- (long long)lensIndexPosValue;
@property(readonly, copy, nonatomic) NSString *lensOptionId; // @synthesize lensOptionId=_lensOptionId;
@property(readonly, copy, nonatomic) SOJUAdLensPerformanceMetrics *lensPerformanceMetrics; // @synthesize lensPerformanceMetrics=_lensPerformanceMetrics;
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
@property(readonly, copy, nonatomic) NSNumber *unlockType; // @synthesize unlockType=_unlockType;
- (long long)unlockTypeEnum;
- (int)unlockTypeValue;
@property(readonly, copy, nonatomic) NSNumber *withAttachmentOpen; // @synthesize withAttachmentOpen=_withAttachmentOpen;
- (_Bool)withAttachmentOpenValue;
@property(readonly, copy, nonatomic) NSNumber *withMemoriesSave; // @synthesize withMemoriesSave=_withMemoriesSave;
- (_Bool)withMemoriesSaveValue;
@property(readonly, copy, nonatomic) NSNumber *withSelfieCamera; // @synthesize withSelfieCamera=_withSelfieCamera;
- (_Bool)withSelfieCameraValue;
@property(readonly, copy, nonatomic) NSNumber *withSnapSend; // @synthesize withSnapSend=_withSnapSend;
- (_Bool)withSnapSendValue;
@property(readonly, copy, nonatomic) NSNumber *withStoryPost; // @synthesize withStoryPost=_withStoryPost;
- (_Bool)withStoryPostValue;
@property(readonly, copy, nonatomic) NSNumber *withWorldCamera; // @synthesize withWorldCamera=_withWorldCamera;
- (_Bool)withWorldCameraValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

