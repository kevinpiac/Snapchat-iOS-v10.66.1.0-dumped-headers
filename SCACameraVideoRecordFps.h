//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString, SCAResolution;

@interface SCACameraVideoRecordFps : SCAUserTrackedEvent
{
    NSNumber *isFrontFacing;
    NSNumber *isSnappable;
    NSNumber *isMultipleFrameBufferEnabled;
    NSNumber *isSurfaceRecordingSupported;
    NSNumber *lightSensorValue;
    NSNumber *frameCount;
    NSNumber *slightlyStickyFrameCount;
    NSNumber *stickyFrameCount;
    NSNumber *avgFps;
    NSNumber *stdFps;
    NSNumber *maxFrameTimestampGapMs;
    NSNumber *maxFrameTotalDelayMs;
    NSNumber *recordDurationMs;
    NSNumber *recordDurationUs;
    NSNumber *maxFrameTimestampGapUs;
    NSNumber *maxFrameProcessingTimeUs;
    NSNumber *avgFrameProcessingTimeUs;
    NSNumber *stickyDurationUs;
    NSNumber *frozenFrameCount;
    NSNumber *frozenDurationUs;
    NSNumber *isPortraitModeOn;
    NSNumber *droppedFrameCount;
    NSNumber *cameraFlippedCount;
    long long recorderType;
    long long lowLightStatus;
    long long nightModeState;
    long long currentCameraApi;
    NSString *lensId;
    NSString *fpsDetail;
    SCAResolution *resolution;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)getAvgFps;
- (long long)getAvgFrameProcessingTimeUs;
- (long long)getCameraFlippedCount;
- (long long)getCurrentCameraApi;
- (long long)getDroppedFrameCount;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFpsDetail;
- (long long)getFrameCount;
- (long long)getFrozenDurationUs;
- (long long)getFrozenFrameCount;
- (_Bool)getIsFrontFacing;
- (_Bool)getIsMultipleFrameBufferEnabled;
- (_Bool)getIsPortraitModeOn;
- (_Bool)getIsSnappable;
- (_Bool)getIsSurfaceRecordingSupported;
- (id)getLensId;
- (double)getLightSensorValue;
- (long long)getLowLightStatus;
- (long long)getMaxFrameProcessingTimeUs;
- (long long)getMaxFrameTimestampGapMs;
- (long long)getMaxFrameTimestampGapUs;
- (long long)getMaxFrameTotalDelayMs;
- (long long)getNightModeState;
- (double)getPerUserSamplingRate;
- (long long)getRecordDurationMs;
- (long long)getRecordDurationUs;
- (long long)getRecorderType;
- (id)getResolution;
- (long long)getSlightlyStickyFrameCount;
- (double)getStdFps;
- (long long)getStickyDurationUs;
- (long long)getStickyFrameCount;
- (id)init;
- (void)setAvgFps:(double)arg1;
- (void)setAvgFrameProcessingTimeUs:(long long)arg1;
- (void)setCameraFlippedCount:(long long)arg1;
- (void)setCurrentCameraApi:(long long)arg1;
- (void)setDroppedFrameCount:(long long)arg1;
- (void)setFpsDetail:(id)arg1;
- (void)setFrameCount:(long long)arg1;
- (void)setFrozenDurationUs:(long long)arg1;
- (void)setFrozenFrameCount:(long long)arg1;
- (void)setIsFrontFacing:(_Bool)arg1;
- (void)setIsMultipleFrameBufferEnabled:(_Bool)arg1;
- (void)setIsPortraitModeOn:(_Bool)arg1;
- (void)setIsSnappable:(_Bool)arg1;
- (void)setIsSurfaceRecordingSupported:(_Bool)arg1;
- (void)setLensId:(id)arg1;
- (void)setLightSensorValue:(double)arg1;
- (void)setLowLightStatus:(long long)arg1;
- (void)setMaxFrameProcessingTimeUs:(long long)arg1;
- (void)setMaxFrameTimestampGapMs:(long long)arg1;
- (void)setMaxFrameTimestampGapUs:(long long)arg1;
- (void)setMaxFrameTotalDelayMs:(long long)arg1;
- (void)setNightModeState:(long long)arg1;
- (void)setRecordDurationMs:(long long)arg1;
- (void)setRecordDurationUs:(long long)arg1;
- (void)setRecorderType:(long long)arg1;
- (void)setResolution:(id)arg1;
- (void)setSlightlyStickyFrameCount:(long long)arg1;
- (void)setStdFps:(double)arg1;
- (void)setStickyDurationUs:(long long)arg1;
- (void)setStickyFrameCount:(long long)arg1;

@end

