//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAGeofilterCameraMusicDetect : SCAUserTrackedEvent
{
    NSNumber *latency;
    long long cameraOrientation;
    long long source;
    NSString *songTitle;
    NSString *artistName;
    NSString *filterGeolensId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getArtistName;
- (long long)getCameraOrientation;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFilterGeolensId;
- (long long)getLatency;
- (double)getPerUserSamplingRate;
- (id)getSongTitle;
- (long long)getSource;
- (id)init;
- (void)setArtistName:(id)arg1;
- (void)setCameraOrientation:(long long)arg1;
- (void)setFilterGeolensId:(id)arg1;
- (void)setLatency:(long long)arg1;
- (void)setSongTitle:(id)arg1;
- (void)setSource:(long long)arg1;

@end

