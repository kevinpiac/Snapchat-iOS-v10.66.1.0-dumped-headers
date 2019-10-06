//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSwipeIntentExperimentContext : SCExperimentContext
{
    _Bool _eagerSwipeEnabledForWebviewAds;
    _Bool _eagerSwipeEnabledForNonWebviewAds;
    long long _eagerSwipeDistanceThresholdForWebviewAds;
    long long _eagerSwipeVelocityThresholdForWebviewAds;
    long long _eagerSwipeDistanceThresholdForNonWebviewAds;
    long long _eagerSwipeVelocityThresholdForNonWebviewAds;
    long long _liveZonePercentYInset;
    long long _liveZonePercentXInset;
}

@property(readonly, nonatomic) long long eagerSwipeDistanceThresholdForNonWebviewAds; // @synthesize eagerSwipeDistanceThresholdForNonWebviewAds=_eagerSwipeDistanceThresholdForNonWebviewAds;
@property(readonly, nonatomic) long long eagerSwipeDistanceThresholdForWebviewAds; // @synthesize eagerSwipeDistanceThresholdForWebviewAds=_eagerSwipeDistanceThresholdForWebviewAds;
@property(readonly, nonatomic) _Bool eagerSwipeEnabledForNonWebviewAds; // @synthesize eagerSwipeEnabledForNonWebviewAds=_eagerSwipeEnabledForNonWebviewAds;
@property(readonly, nonatomic) _Bool eagerSwipeEnabledForWebviewAds; // @synthesize eagerSwipeEnabledForWebviewAds=_eagerSwipeEnabledForWebviewAds;
@property(readonly, nonatomic) long long eagerSwipeVelocityThresholdForNonWebviewAds; // @synthesize eagerSwipeVelocityThresholdForNonWebviewAds=_eagerSwipeVelocityThresholdForNonWebviewAds;
@property(readonly, nonatomic) long long eagerSwipeVelocityThresholdForWebviewAds; // @synthesize eagerSwipeVelocityThresholdForWebviewAds=_eagerSwipeVelocityThresholdForWebviewAds;
- (id)experimentName;
@property(readonly, nonatomic) long long liveZonePercentXInset; // @synthesize liveZonePercentXInset=_liveZonePercentXInset;
@property(readonly, nonatomic) long long liveZonePercentYInset; // @synthesize liveZonePercentYInset=_liveZonePercentYInset;
- (void)setupParameters;

@end
