//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCADiscoverFeedNetworkLatency : SCAUserTrackedEvent
{
    NSNumber *networkLatencyMs;
    NSNumber *success;
    long long networkLatencyType;
    long long sourceType;
    long long sectionType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getNetworkLatencyMs;
- (long long)getNetworkLatencyType;
- (double)getPerUserSamplingRate;
- (long long)getSectionType;
- (long long)getSourceType;
- (_Bool)getSuccess;
- (id)init;
- (void)setNetworkLatencyMs:(long long)arg1;
- (void)setNetworkLatencyType:(long long)arg1;
- (void)setSectionType:(long long)arg1;
- (void)setSourceType:(long long)arg1;
- (void)setSuccess:(_Bool)arg1;

@end

