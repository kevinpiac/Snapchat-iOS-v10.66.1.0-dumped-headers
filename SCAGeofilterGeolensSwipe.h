//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCALensSwipeBase.h"

@class NSNumber, NSString;

@interface SCAGeofilterGeolensSwipe : SCALensSwipeBase
{
    NSNumber *lensOptionSwipeCount;
    NSNumber *camera;
    NSNumber *deviceScore;
    NSNumber *withAttachmentOpen;
    NSNumber *applyDelaySec;
    NSNumber *avgFps;
    long long lensSource;
    long long attachmentType;
    NSString *filterGeolensId;
    NSString *adsnapPlacementId;
    NSString *encGeoData;
    NSString *adServeRequestId;
    NSString *topsnapAdId;
    NSString *topsnapRequestId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAdServeRequestId;
- (id)getAdsnapPlacementId;
- (double)getApplyDelaySec;
- (long long)getAttachmentType;
- (double)getAvgFps;
- (long long)getCamera;
- (long long)getDeviceScore;
- (id)getEncGeoData;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFilterGeolensId;
- (long long)getLensOptionSwipeCount;
- (long long)getLensSource;
- (double)getPerUserSamplingRate;
- (id)getTopsnapAdId;
- (id)getTopsnapRequestId;
- (_Bool)getWithAttachmentOpen;
- (id)init;
- (void)setAdServeRequestId:(id)arg1;
- (void)setAdsnapPlacementId:(id)arg1;
- (void)setApplyDelaySec:(double)arg1;
- (void)setAttachmentType:(long long)arg1;
- (void)setAvgFps:(double)arg1;
- (void)setCamera:(long long)arg1;
- (void)setDeviceScore:(long long)arg1;
- (void)setEncGeoData:(id)arg1;
- (void)setFilterGeolensId:(id)arg1;
- (void)setLensOptionSwipeCount:(long long)arg1;
- (void)setLensSource:(long long)arg1;
- (void)setTopsnapAdId:(id)arg1;
- (void)setTopsnapRequestId:(id)arg1;
- (void)setWithAttachmentOpen:(_Bool)arg1;

@end

