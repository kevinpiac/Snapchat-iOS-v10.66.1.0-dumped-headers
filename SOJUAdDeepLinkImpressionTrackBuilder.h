//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, SOJUAdTopsnapVolumes;

@interface SOJUAdDeepLinkImpressionTrackBuilder : NSObject
{
    NSNumber *_topsnapTimeViewedSeconds;
    NSNumber *_topsnapMediaDurationSeconds;
    NSNumber *_longformTimeViewedSeconds;
    NSNumber *_swiped;
    NSNumber *_renderedTimestampInMilliSeconds;
    NSNumber *_deltaBetweenReceiveAndRenderMillis;
    NSNumber *_deepLinkedToAppCount;
    NSNumber *_deepLinkedToAppInstallCount;
    NSNumber *_deepLinkedToAppInstallErrorCount;
    NSNumber *_swipeCount;
    NSNumber *_deepLinkFromCard;
    NSNumber *_deepLinkFallbackToAppStore;
    NSNumber *_deepLinkFallbackToWebview;
    NSString *_creativeId;
    NSNumber *_topsnapAudioPlaybackVolume;
    NSNumber *_longformAudioPlaybackVolume;
    NSNumber *_timeViewedSeconds;
    NSNumber *_topsnapTimeViewedBeforeInteractionSeconds;
    SOJUAdTopsnapVolumes *_topsnapVolumes;
    NSNumber *_topsnapMaxContinuousTimeViewedSeconds;
    NSNumber *_topsnapAudibleTimeViewedSeconds;
    NSString *_topsnapMediaType;
    NSString *_deepLinkUri;
}

+ (id)withJUAdDeepLinkImpressionTrack:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setCreativeId:(id)arg1;
- (id)setDeepLinkFallbackToAppStore:(id)arg1;
- (id)setDeepLinkFallbackToAppStoreValue:(_Bool)arg1;
- (id)setDeepLinkFallbackToWebview:(id)arg1;
- (id)setDeepLinkFallbackToWebviewValue:(_Bool)arg1;
- (id)setDeepLinkFromCard:(id)arg1;
- (id)setDeepLinkFromCardValue:(_Bool)arg1;
- (id)setDeepLinkUri:(id)arg1;
- (id)setDeepLinkedToAppCount:(id)arg1;
- (id)setDeepLinkedToAppCountValue:(int)arg1;
- (id)setDeepLinkedToAppInstallCount:(id)arg1;
- (id)setDeepLinkedToAppInstallCountValue:(int)arg1;
- (id)setDeepLinkedToAppInstallErrorCount:(id)arg1;
- (id)setDeepLinkedToAppInstallErrorCountValue:(int)arg1;
- (id)setDeltaBetweenReceiveAndRenderMillis:(id)arg1;
- (id)setDeltaBetweenReceiveAndRenderMillisValue:(long long)arg1;
- (id)setLongformAudioPlaybackVolume:(id)arg1;
- (id)setLongformAudioPlaybackVolumeValue:(float)arg1;
- (id)setLongformTimeViewedSeconds:(id)arg1;
- (id)setLongformTimeViewedSecondsValue:(float)arg1;
- (id)setRenderedTimestampInMilliSeconds:(id)arg1;
- (id)setRenderedTimestampInMilliSecondsValue:(long long)arg1;
- (id)setSwipeCount:(id)arg1;
- (id)setSwipeCountValue:(int)arg1;
- (id)setSwiped:(id)arg1;
- (id)setSwipedValue:(_Bool)arg1;
- (id)setTimeViewedSeconds:(id)arg1;
- (id)setTimeViewedSecondsValue:(float)arg1;
- (id)setTopsnapAudibleTimeViewedSeconds:(id)arg1;
- (id)setTopsnapAudibleTimeViewedSecondsValue:(float)arg1;
- (id)setTopsnapAudioPlaybackVolume:(id)arg1;
- (id)setTopsnapAudioPlaybackVolumeValue:(float)arg1;
- (id)setTopsnapMaxContinuousTimeViewedSeconds:(id)arg1;
- (id)setTopsnapMaxContinuousTimeViewedSecondsValue:(float)arg1;
- (id)setTopsnapMediaDurationSeconds:(id)arg1;
- (id)setTopsnapMediaDurationSecondsValue:(float)arg1;
- (id)setTopsnapMediaType:(id)arg1;
- (id)setTopsnapMediaTypeEnum:(long long)arg1;
- (id)setTopsnapTimeViewedBeforeInteractionSeconds:(id)arg1;
- (id)setTopsnapTimeViewedBeforeInteractionSecondsValue:(float)arg1;
- (id)setTopsnapTimeViewedSeconds:(id)arg1;
- (id)setTopsnapTimeViewedSecondsValue:(float)arg1;
- (id)setTopsnapVolumes:(id)arg1;

@end

