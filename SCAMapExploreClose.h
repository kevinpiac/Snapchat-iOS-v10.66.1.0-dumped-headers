//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAMapExploreClose : SCAUserTrackedEvent
{
    NSNumber *mapSessionId;
    NSNumber *statusViewCount;
    NSNumber *statusAvailableCount;
    NSNumber *viewTimeSec;
    long long exitEvent;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getExitEvent;
- (long long)getMapSessionId;
- (double)getPerUserSamplingRate;
- (long long)getStatusAvailableCount;
- (long long)getStatusViewCount;
- (double)getViewTimeSec;
- (id)init;
- (void)setExitEvent:(long long)arg1;
- (void)setMapSessionId:(long long)arg1;
- (void)setStatusAvailableCount:(long long)arg1;
- (void)setStatusViewCount:(long long)arg1;
- (void)setViewTimeSec:(double)arg1;

@end

