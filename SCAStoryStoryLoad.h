//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAStoryStoryLoad : SCAUserTrackedEvent
{
    NSNumber *storySessionId;
    NSNumber *withTap;
    NSNumber *downloadTimeSec;
    NSNumber *itemLoadedThreshold;
    NSNumber *isSuccessful;
    NSNumber *bandwidthMean;
    NSNumber *bandwidthMedian;
    NSNumber *bandwidthSampleSize;
    NSNumber *deviceScore;
    long long storyType;
    long long storyTypeSpecific;
    long long playSource;
    long long viewSource;
    long long connectionClass;
    NSString *geofence;
    NSString *posterId;
    NSString *ghost_poster_id;
    NSString *trackingId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)getBandwidthMean;
- (double)getBandwidthMedian;
- (long long)getBandwidthSampleSize;
- (long long)getConnectionClass;
- (long long)getDeviceScore;
- (long long)getDownloadTimeSec;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getGeofence;
- (id)getGhost_poster_id;
- (_Bool)getIsSuccessful;
- (long long)getItemLoadedThreshold;
- (double)getPerUserSamplingRate;
- (long long)getPlaySource;
- (id)getPosterId;
- (long long)getStorySessionId;
- (long long)getStoryType;
- (long long)getStoryTypeSpecific;
- (id)getTrackingId;
- (long long)getViewSource;
- (_Bool)getWithTap;
- (id)init;
- (void)setBandwidthMean:(double)arg1;
- (void)setBandwidthMedian:(double)arg1;
- (void)setBandwidthSampleSize:(long long)arg1;
- (void)setConnectionClass:(long long)arg1;
- (void)setDeviceScore:(long long)arg1;
- (void)setDownloadTimeSec:(long long)arg1;
- (void)setGeofence:(id)arg1;
- (void)setGhost_poster_id:(id)arg1;
- (void)setIsSuccessful:(_Bool)arg1;
- (void)setItemLoadedThreshold:(long long)arg1;
- (void)setPlaySource:(long long)arg1;
- (void)setPosterId:(id)arg1;
- (void)setStorySessionId:(long long)arg1;
- (void)setStoryType:(long long)arg1;
- (void)setStoryTypeSpecific:(long long)arg1;
- (void)setTrackingId:(id)arg1;
- (void)setViewSource:(long long)arg1;
- (void)setWithTap:(_Bool)arg1;

@end
