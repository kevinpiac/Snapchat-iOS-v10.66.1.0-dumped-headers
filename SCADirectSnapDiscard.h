//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString, SCAMediaMetaData;

@interface SCADirectSnapDiscard : SCAUserTrackedEvent
{
    NSNumber *lightSensorValue;
    NSNumber *flash;
    NSNumber *withFrontFacing;
    NSNumber *shutterSpeed;
    NSNumber *ISO;
    NSNumber *aperture;
    NSNumber *shutterDelayMs;
    NSNumber *captureDelayMs;
    NSNumber *handsFree;
    NSNumber *recorderInitDelayMs;
    NSNumber *previewStayDurationMs;
    NSNumber *brightness;
    NSNumber *accelerationMotion;
    NSNumber *frameDifference;
    NSNumber *maxProcessingDelayMs;
    NSNumber *psnr;
    NSNumber *withAdjustingExposure;
    NSNumber *withAdjustingFocus;
    NSNumber *faceFrontCameraCount;
    NSNumber *faceBackCameraCount;
    NSNumber *withCreativeTool;
    NSNumber *zslCapture;
    long long directSnapDiscardMethod;
    long long lowLightStatus;
    long long nightModeState;
    long long takePictureMethod;
    long long cameraApi;
    long long snapSource;
    NSString *captureSessionId;
    NSString *snapSessionId;
    NSString *filterLensId;
    NSString *cameraSdk;
    SCAMediaMetaData *mediaMetaData;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)getAccelerationMotion;
- (double)getAperture;
- (double)getBrightness;
- (long long)getCameraApi;
- (id)getCameraSdk;
- (long long)getCaptureDelayMs;
- (id)getCaptureSessionId;
- (long long)getDirectSnapDiscardMethod;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFaceBackCameraCount;
- (long long)getFaceFrontCameraCount;
- (id)getFilterLensId;
- (_Bool)getFlash;
- (double)getFrameDifference;
- (_Bool)getHandsFree;
- (long long)getISO;
- (double)getLightSensorValue;
- (long long)getLowLightStatus;
- (double)getMaxProcessingDelayMs;
- (id)getMediaMetaData;
- (long long)getNightModeState;
- (double)getPerUserSamplingRate;
- (long long)getPreviewStayDurationMs;
- (double)getPsnr;
- (long long)getRecorderInitDelayMs;
- (long long)getShutterDelayMs;
- (double)getShutterSpeed;
- (id)getSnapSessionId;
- (long long)getSnapSource;
- (long long)getTakePictureMethod;
- (_Bool)getWithAdjustingExposure;
- (_Bool)getWithAdjustingFocus;
- (_Bool)getWithCreativeTool;
- (_Bool)getWithFrontFacing;
- (_Bool)getZslCapture;
- (id)init;
- (void)setAccelerationMotion:(double)arg1;
- (void)setAperture:(double)arg1;
- (void)setBrightness:(double)arg1;
- (void)setCameraApi:(long long)arg1;
- (void)setCameraSdk:(id)arg1;
- (void)setCaptureDelayMs:(long long)arg1;
- (void)setCaptureSessionId:(id)arg1;
- (void)setDirectSnapDiscardMethod:(long long)arg1;
- (void)setFaceBackCameraCount:(long long)arg1;
- (void)setFaceFrontCameraCount:(long long)arg1;
- (void)setFilterLensId:(id)arg1;
- (void)setFlash:(_Bool)arg1;
- (void)setFrameDifference:(double)arg1;
- (void)setHandsFree:(_Bool)arg1;
- (void)setISO:(long long)arg1;
- (void)setLightSensorValue:(double)arg1;
- (void)setLowLightStatus:(long long)arg1;
- (void)setMaxProcessingDelayMs:(double)arg1;
- (void)setMediaMetaData:(id)arg1;
- (void)setNightModeState:(long long)arg1;
- (void)setPreviewStayDurationMs:(long long)arg1;
- (void)setPsnr:(double)arg1;
- (void)setRecorderInitDelayMs:(long long)arg1;
- (void)setShutterDelayMs:(long long)arg1;
- (void)setShutterSpeed:(double)arg1;
- (void)setSnapSessionId:(id)arg1;
- (void)setSnapSource:(long long)arg1;
- (void)setTakePictureMethod:(long long)arg1;
- (void)setWithAdjustingExposure:(_Bool)arg1;
- (void)setWithAdjustingFocus:(_Bool)arg1;
- (void)setWithCreativeTool:(_Bool)arg1;
- (void)setWithFrontFacing:(_Bool)arg1;
- (void)setZslCapture:(_Bool)arg1;

@end
