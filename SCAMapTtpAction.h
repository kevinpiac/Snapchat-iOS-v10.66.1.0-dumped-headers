//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAMapTtpAction : SCAUserTrackedEvent
{
    NSNumber *mapSessionId;
    NSNumber *lat;
    NSNumber *lng;
    NSNumber *zoom;
    NSNumber *distanceFromUserMeter;
    NSNumber *distanceFromFriendMinMeter;
    long long mapTapToPlayResult;
    NSString *mapPoiId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)getDistanceFromFriendMinMeter;
- (double)getDistanceFromUserMeter;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getLat;
- (double)getLng;
- (id)getMapPoiId;
- (long long)getMapSessionId;
- (long long)getMapTapToPlayResult;
- (double)getPerUserSamplingRate;
- (double)getZoom;
- (id)init;
- (void)setDistanceFromFriendMinMeter:(double)arg1;
- (void)setDistanceFromUserMeter:(double)arg1;
- (void)setLat:(double)arg1;
- (void)setLng:(double)arg1;
- (void)setMapPoiId:(id)arg1;
- (void)setMapSessionId:(long long)arg1;
- (void)setMapTapToPlayResult:(long long)arg1;
- (void)setZoom:(double)arg1;

@end

