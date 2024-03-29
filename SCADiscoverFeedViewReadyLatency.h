//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCADiscoverFeedViewReadyLatency : SCAUserTrackedEvent
{
    NSNumber *appUptimeMs;
    NSNumber *withColdStart;
    NSNumber *withCacheLoaded;
    NSNumber *withDeck;
    NSNumber *readyLatencyMs;
    long long sourcePage;
    long long eventType;
    long long contentReadyType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAppUptimeMs;
- (long long)getContentReadyType;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getEventType;
- (double)getPerUserSamplingRate;
- (long long)getReadyLatencyMs;
- (long long)getSourcePage;
- (_Bool)getWithCacheLoaded;
- (_Bool)getWithColdStart;
- (_Bool)getWithDeck;
- (id)init;
- (void)setAppUptimeMs:(long long)arg1;
- (void)setContentReadyType:(long long)arg1;
- (void)setEventType:(long long)arg1;
- (void)setReadyLatencyMs:(long long)arg1;
- (void)setSourcePage:(long long)arg1;
- (void)setWithCacheLoaded:(_Bool)arg1;
- (void)setWithColdStart:(_Bool)arg1;
- (void)setWithDeck:(_Bool)arg1;

@end

