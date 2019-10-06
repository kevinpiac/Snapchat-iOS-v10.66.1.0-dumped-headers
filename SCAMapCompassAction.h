//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAMapCompassAction : SCAUserTrackedEvent
{
    NSNumber *mapSessionId;
    NSNumber *distanceInMeters;
    NSNumber *mapFriendCount;
    NSNumber *viewportFriendCount;
    long long action;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAction;
- (double)getDistanceInMeters;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getMapFriendCount;
- (long long)getMapSessionId;
- (double)getPerUserSamplingRate;
- (long long)getViewportFriendCount;
- (id)init;
- (void)setAction:(long long)arg1;
- (void)setDistanceInMeters:(double)arg1;
- (void)setMapFriendCount:(long long)arg1;
- (void)setMapSessionId:(long long)arg1;
- (void)setViewportFriendCount:(long long)arg1;

@end

