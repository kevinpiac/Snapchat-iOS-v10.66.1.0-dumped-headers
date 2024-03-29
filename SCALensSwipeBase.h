//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCASwipeBase.h"

@class NSNumber, NSString;

@interface SCALensSwipeBase : SCASwipeBase
{
    NSNumber *snapTimeSec;
    NSNumber *timeSinceLastFlipSec;
    NSNumber *faceFrontCameraCount;
    NSNumber *faceBackCameraCount;
    NSNumber *firstFaceRenderTimestamp;
    NSNumber *firstTriggerTimestamp;
    NSNumber *lensFrameProcessingTimeMsAvg;
    NSNumber *lensFrameProcessingTimeMsStd;
    NSNumber *infoCardAvailable;
    long long lensType;
    long long mediaType;
    long long productMediaType;
    NSString *lensBundleUrl;
    NSString *triggerAction;
    NSString *lensSessionId;
    NSString *lensCategoryId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFaceBackCameraCount;
- (long long)getFaceFrontCameraCount;
- (long long)getFirstFaceRenderTimestamp;
- (long long)getFirstTriggerTimestamp;
- (_Bool)getInfoCardAvailable;
- (id)getLensBundleUrl;
- (id)getLensCategoryId;
- (double)getLensFrameProcessingTimeMsAvg;
- (double)getLensFrameProcessingTimeMsStd;
- (id)getLensSessionId;
- (long long)getLensType;
- (long long)getMediaType;
- (double)getPerUserSamplingRate;
- (long long)getProductMediaType;
- (double)getSnapTimeSec;
- (double)getTimeSinceLastFlipSec;
- (id)getTriggerAction;
- (id)init;
- (void)setFaceBackCameraCount:(long long)arg1;
- (void)setFaceFrontCameraCount:(long long)arg1;
- (void)setFirstFaceRenderTimestamp:(long long)arg1;
- (void)setFirstTriggerTimestamp:(long long)arg1;
- (void)setInfoCardAvailable:(_Bool)arg1;
- (void)setLensBundleUrl:(id)arg1;
- (void)setLensCategoryId:(id)arg1;
- (void)setLensFrameProcessingTimeMsAvg:(double)arg1;
- (void)setLensFrameProcessingTimeMsStd:(double)arg1;
- (void)setLensSessionId:(id)arg1;
- (void)setLensType:(long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setProductMediaType:(long long)arg1;
- (void)setSnapTimeSec:(double)arg1;
- (void)setTimeSinceLastFlipSec:(double)arg1;
- (void)setTriggerAction:(id)arg1;

@end

