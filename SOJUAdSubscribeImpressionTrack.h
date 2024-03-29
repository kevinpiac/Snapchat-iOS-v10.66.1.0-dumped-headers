//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdSubscribeImpressionTrack-Protocol.h"

@class NSNumber, NSString, SOJUAdTopsnapVolumes;

@interface SOJUAdSubscribeImpressionTrack : NSObject <SOJUAdSubscribeImpressionTrack>
{
    NSNumber *_topsnapTimeViewedSeconds;
    NSNumber *_topsnapMediaDurationSeconds;
    NSNumber *_longformTimeViewedSeconds;
    NSNumber *_swiped;
    NSNumber *_renderedTimestampInMilliSeconds;
    NSNumber *_deltaBetweenReceiveAndRenderMillis;
    NSNumber *_channelSubscribedEndStatus;
    NSNumber *_swipeCount;
    NSString *_creativeId;
    NSNumber *_topsnapAudioPlaybackVolume;
    NSNumber *_longformAudioPlaybackVolume;
    NSNumber *_topsnapTimeViewedBeforeInteractionSeconds;
    SOJUAdTopsnapVolumes *_topsnapVolumes;
    NSNumber *_topsnapMaxContinuousTimeViewedSeconds;
    NSNumber *_topsnapAudibleTimeViewedSeconds;
    NSString *_topsnapMediaType;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *channelSubscribedEndStatus; // @synthesize channelSubscribedEndStatus=_channelSubscribedEndStatus;
- (_Bool)channelSubscribedEndStatusValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *deltaBetweenReceiveAndRenderMillis; // @synthesize deltaBetweenReceiveAndRenderMillis=_deltaBetweenReceiveAndRenderMillis;
- (long long)deltaBetweenReceiveAndRenderMillisValue;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithTopsnapTimeViewedSeconds:(id)arg1 topsnapMediaDurationSeconds:(id)arg2 longformTimeViewedSeconds:(id)arg3 swiped:(id)arg4 renderedTimestampInMilliSeconds:(id)arg5 deltaBetweenReceiveAndRenderMillis:(id)arg6 channelSubscribedEndStatus:(id)arg7 swipeCount:(id)arg8 creativeId:(id)arg9 topsnapAudioPlaybackVolume:(id)arg10 longformAudioPlaybackVolume:(id)arg11 topsnapTimeViewedBeforeInteractionSeconds:(id)arg12 topsnapVolumes:(id)arg13 topsnapMaxContinuousTimeViewedSeconds:(id)arg14 topsnapAudibleTimeViewedSeconds:(id)arg15 topsnapMediaType:(id)arg16;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *longformAudioPlaybackVolume; // @synthesize longformAudioPlaybackVolume=_longformAudioPlaybackVolume;
- (float)longformAudioPlaybackVolumeValue;
@property(readonly, copy, nonatomic) NSNumber *longformTimeViewedSeconds; // @synthesize longformTimeViewedSeconds=_longformTimeViewedSeconds;
- (float)longformTimeViewedSecondsValue;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *renderedTimestampInMilliSeconds; // @synthesize renderedTimestampInMilliSeconds=_renderedTimestampInMilliSeconds;
- (long long)renderedTimestampInMilliSecondsValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *swipeCount; // @synthesize swipeCount=_swipeCount;
- (int)swipeCountValue;
@property(readonly, copy, nonatomic) NSNumber *swiped; // @synthesize swiped=_swiped;
- (_Bool)swipedValue;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *topsnapAudibleTimeViewedSeconds; // @synthesize topsnapAudibleTimeViewedSeconds=_topsnapAudibleTimeViewedSeconds;
- (float)topsnapAudibleTimeViewedSecondsValue;
@property(readonly, copy, nonatomic) NSNumber *topsnapAudioPlaybackVolume; // @synthesize topsnapAudioPlaybackVolume=_topsnapAudioPlaybackVolume;
- (float)topsnapAudioPlaybackVolumeValue;
@property(readonly, copy, nonatomic) NSNumber *topsnapMaxContinuousTimeViewedSeconds; // @synthesize topsnapMaxContinuousTimeViewedSeconds=_topsnapMaxContinuousTimeViewedSeconds;
- (float)topsnapMaxContinuousTimeViewedSecondsValue;
@property(readonly, copy, nonatomic) NSNumber *topsnapMediaDurationSeconds; // @synthesize topsnapMediaDurationSeconds=_topsnapMediaDurationSeconds;
- (float)topsnapMediaDurationSecondsValue;
@property(readonly, copy, nonatomic) NSString *topsnapMediaType; // @synthesize topsnapMediaType=_topsnapMediaType;
- (long long)topsnapMediaTypeEnum;
@property(readonly, copy, nonatomic) NSNumber *topsnapTimeViewedBeforeInteractionSeconds; // @synthesize topsnapTimeViewedBeforeInteractionSeconds=_topsnapTimeViewedBeforeInteractionSeconds;
- (float)topsnapTimeViewedBeforeInteractionSecondsValue;
@property(readonly, copy, nonatomic) NSNumber *topsnapTimeViewedSeconds; // @synthesize topsnapTimeViewedSeconds=_topsnapTimeViewedSeconds;
- (float)topsnapTimeViewedSecondsValue;
@property(readonly, copy, nonatomic) SOJUAdTopsnapVolumes *topsnapVolumes; // @synthesize topsnapVolumes=_topsnapVolumes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

