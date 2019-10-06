//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SCUserStoriesAdConfiguration : NSObject
{
    long long _minStoriesFromSessionStart;
    long long _minStoriesBetweenAds;
    long long _minStoriesBeforeSessionEnd;
    long long _minSnapsFromSessionStart;
    long long _minSnapsBetweenAds;
    long long _minTimeFromSessionStartInSeconds;
    long long _minTimeBetweenAdsInSeconds;
    long long _adResponseCacheTimeInSeconds;
    NSDictionary *_targetingParameters;
    long long _insertionRuleSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long adResponseCacheTimeInSeconds; // @synthesize adResponseCacheTimeInSeconds=_adResponseCacheTimeInSeconds;
- (id)initWithUserSession:(id)arg1;
@property(readonly, nonatomic) long long insertionRuleSource; // @synthesize insertionRuleSource=_insertionRuleSource;
@property(readonly, nonatomic) long long minSnapsBetweenAds; // @synthesize minSnapsBetweenAds=_minSnapsBetweenAds;
@property(readonly, nonatomic) long long minSnapsFromSessionStart; // @synthesize minSnapsFromSessionStart=_minSnapsFromSessionStart;
@property(readonly, nonatomic) long long minStoriesBeforeSessionEnd; // @synthesize minStoriesBeforeSessionEnd=_minStoriesBeforeSessionEnd;
@property(readonly, nonatomic) long long minStoriesBetweenAds; // @synthesize minStoriesBetweenAds=_minStoriesBetweenAds;
@property(readonly, nonatomic) long long minStoriesFromSessionStart; // @synthesize minStoriesFromSessionStart=_minStoriesFromSessionStart;
@property(readonly, nonatomic) long long minTimeBetweenAdsInSeconds; // @synthesize minTimeBetweenAdsInSeconds=_minTimeBetweenAdsInSeconds;
@property(readonly, nonatomic) long long minTimeFromSessionStartInSeconds; // @synthesize minTimeFromSessionStartInSeconds=_minTimeFromSessionStartInSeconds;
@property(readonly, nonatomic) NSDictionary *targetingParameters; // @synthesize targetingParameters=_targetingParameters;

@end
