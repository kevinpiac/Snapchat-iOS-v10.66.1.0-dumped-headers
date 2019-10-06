//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAGalleryBrowseViewLatency : SCAUserTrackedEvent
{
    NSNumber *latency;
    long long mediaFormat;
    long long galleryMediaType;
    long long productMediaType;
    NSString *mediaType;
    NSString *specsContentId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getGalleryMediaType;
- (long long)getLatency;
- (long long)getMediaFormat;
- (id)getMediaType;
- (double)getPerUserSamplingRate;
- (long long)getProductMediaType;
- (id)getSpecsContentId;
- (id)init;
- (void)setGalleryMediaType:(long long)arg1;
- (void)setLatency:(long long)arg1;
- (void)setMediaFormat:(long long)arg1;
- (void)setMediaType:(id)arg1;
- (void)setProductMediaType:(long long)arg1;
- (void)setSpecsContentId:(id)arg1;

@end

