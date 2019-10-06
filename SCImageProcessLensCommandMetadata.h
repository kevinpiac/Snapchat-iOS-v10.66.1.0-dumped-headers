//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSArray, NSData, NSString, SCImageProcessLensCommandSnap3DMetadata, SCImageProcessLensCommandSpectaclesMetadata;

@interface SCImageProcessLensCommandMetadata : NSObject <SCTraceEnabled>
{
    NSArray *_capturerSamples;
    SCImageProcessLensCommandSpectaclesMetadata *_spectaclesMetadata;
    NSArray *_recordingDeviceMotionData;
    NSArray *_recordingRawAccelerometerData;
    NSArray *_recordingRawGyroData;
    NSData *_launchConfigData;
    SCImageProcessLensCommandSnap3DMetadata *_snap3DMetadata;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *capturerSamples; // @synthesize capturerSamples=_capturerSamples;
- (id)initWithCapturerSamples:(id)arg1 recordingDeviceMotionData:(id)arg2 recordingRawAccelerometerData:(id)arg3 recordingRawGyroData:(id)arg4;
- (id)initWithCapturerSamples:(id)arg1 recordingDeviceMotionData:(id)arg2 recordingRawAccelerometerData:(id)arg3 recordingRawGyroData:(id)arg4 snap3DMetadata:(id)arg5 launchConfigData:(id)arg6;
- (id)initWithSpectaclesMetadata:(id)arg1 launchConfigData:(id)arg2;
@property(readonly, copy, nonatomic) NSData *launchConfigData; // @synthesize launchConfigData=_launchConfigData;
@property(readonly, copy, nonatomic) NSArray *recordingDeviceMotionData; // @synthesize recordingDeviceMotionData=_recordingDeviceMotionData;
@property(readonly, copy, nonatomic) NSArray *recordingRawAccelerometerData; // @synthesize recordingRawAccelerometerData=_recordingRawAccelerometerData;
@property(readonly, copy, nonatomic) NSArray *recordingRawGyroData; // @synthesize recordingRawGyroData=_recordingRawGyroData;
@property(readonly, nonatomic) SCImageProcessLensCommandSnap3DMetadata *snap3DMetadata; // @synthesize snap3DMetadata=_snap3DMetadata;
@property(readonly, nonatomic) SCImageProcessLensCommandSpectaclesMetadata *spectaclesMetadata; // @synthesize spectaclesMetadata=_spectaclesMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

