//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAAdStoryOpportunity : SCAUserTrackedEvent
{
    NSNumber *autoAdvanceIndex;
    NSNumber *storySessionId;
    NSNumber *playbackVolume;
    NSNumber *meanStoryViewTime;
    NSNumber *stdDevStoryViewTime;
    NSNumber *retryCount;
    NSNumber *reachedAdSlot;
    NSNumber *initialVisibleLoadingTimeMillis;
    long long adProductSourceType;
    long long adSkipReason;
    long long playbackAudio;
    long long storyType;
    long long potentialAdSlot;
    NSString *adUnitId;
    NSString *adId;
    NSString *adsnapId;
    NSString *adsnapPlacementId;
    NSString *adsnapLineItemId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAdId;
- (long long)getAdProductSourceType;
- (long long)getAdSkipReason;
- (id)getAdUnitId;
- (id)getAdsnapId;
- (id)getAdsnapLineItemId;
- (id)getAdsnapPlacementId;
- (long long)getAutoAdvanceIndex;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getInitialVisibleLoadingTimeMillis;
- (double)getMeanStoryViewTime;
- (double)getPerUserSamplingRate;
- (long long)getPlaybackAudio;
- (double)getPlaybackVolume;
- (long long)getPotentialAdSlot;
- (_Bool)getReachedAdSlot;
- (long long)getRetryCount;
- (double)getStdDevStoryViewTime;
- (long long)getStorySessionId;
- (long long)getStoryType;
- (id)init;
- (void)setAdId:(id)arg1;
- (void)setAdProductSourceType:(long long)arg1;
- (void)setAdSkipReason:(long long)arg1;
- (void)setAdUnitId:(id)arg1;
- (void)setAdsnapId:(id)arg1;
- (void)setAdsnapLineItemId:(id)arg1;
- (void)setAdsnapPlacementId:(id)arg1;
- (void)setAutoAdvanceIndex:(long long)arg1;
- (void)setInitialVisibleLoadingTimeMillis:(long long)arg1;
- (void)setMeanStoryViewTime:(double)arg1;
- (void)setPlaybackAudio:(long long)arg1;
- (void)setPlaybackVolume:(double)arg1;
- (void)setPotentialAdSlot:(long long)arg1;
- (void)setReachedAdSlot:(_Bool)arg1;
- (void)setRetryCount:(long long)arg1;
- (void)setStdDevStoryViewTime:(double)arg1;
- (void)setStorySessionId:(long long)arg1;
- (void)setStoryType:(long long)arg1;

@end

