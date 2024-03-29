//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCABackgroundPrefetchProcessed : SCAUserTrackedEvent
{
    NSNumber *timeAllowedToPrefetch;
    NSNumber *scheduleDelayLatencyMs;
    long long appState;
    NSString *batteryState;
    NSString *networkState;
    NSString *mediaType;
    NSString *prefetchId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAppState;
- (id)getBatteryState;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getMediaType;
- (id)getNetworkState;
- (double)getPerUserSamplingRate;
- (id)getPrefetchId;
- (long long)getScheduleDelayLatencyMs;
- (long long)getTimeAllowedToPrefetch;
- (id)init;
- (void)setAppState:(long long)arg1;
- (void)setBatteryState:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setNetworkState:(id)arg1;
- (void)setPrefetchId:(id)arg1;
- (void)setScheduleDelayLatencyMs:(long long)arg1;
- (void)setTimeAllowedToPrefetch:(long long)arg1;

@end

