//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCACameraMusicDetect : SCAUserTrackedEvent
{
    NSNumber *latency;
    NSNumber *hasGeolens;
    long long cameraOrientation;
    long long source;
    NSString *songTitle;
    NSString *artistName;
    NSString *filterLensId;
    NSString *genre;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getArtistName;
- (long long)getCameraOrientation;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFilterLensId;
- (id)getGenre;
- (_Bool)getHasGeolens;
- (long long)getLatency;
- (double)getPerUserSamplingRate;
- (id)getSongTitle;
- (long long)getSource;
- (id)init;
- (void)setArtistName:(id)arg1;
- (void)setCameraOrientation:(long long)arg1;
- (void)setFilterLensId:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setHasGeolens:(_Bool)arg1;
- (void)setLatency:(long long)arg1;
- (void)setSongTitle:(id)arg1;
- (void)setSource:(long long)arg1;

@end

