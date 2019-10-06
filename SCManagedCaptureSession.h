//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class AVCaptureDepthDataOutput, AVCaptureMetadataOutput, AVCapturePhotoOutput, AVCaptureSession, AVCaptureVideoDataOutput, FBKVOController, NSString, SCManagedCaptureDevice, SCQueuePerformer;
@protocol SCBlackCameraDetector, SCManagedCaptureSessionRunningStatusDelegate;

@interface SCManagedCaptureSession : NSObject <SCTraceEnabled>
{
    id <SCBlackCameraDetector> _blackCameraDetector;
    AVCaptureSession *_avSession;
    AVCapturePhotoOutput *_photoOutput;
    AVCaptureVideoDataOutput *_videoOutput;
    AVCaptureMetadataOutput *_metadataOutput;
    AVCaptureDepthDataOutput *_depthOutput;
    FBKVOController *_kvoController;
    id <SCManagedCaptureSessionRunningStatusDelegate> _delegate;
    SCManagedCaptureDevice *_currentlyConnectedDevice;
    SCQueuePerformer *_performer;
    SCQueuePerformer *_warmupPerformer;
    struct mutex _sessionRunningMutex;
    _Bool _skipSessionFix;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)_addInput:(id)arg1;
- (_Bool)_addOutput:(id)arg1;
- (void)_assertPerformerIfNeeded;
- (void)_createNewAVCaptureSession;
- (void)_handleAVSessionRunningStatusChange:(id)arg1;
- (_Bool)_isDepthOutput:(id)arg1;
- (_Bool)_isMetadataOutput:(id)arg1;
- (void)_performOnPerformerIfNeeded:(CDUnknownBlockType)arg1;
- (void)_performOnPerformerImmediatelyIfNeeded:(CDUnknownBlockType)arg1;
- (void)_removeOutput:(id)arg1;
- (void)_startToObserveRunningStatus;
- (void)attachSessionToCaptureVideoPreviewLayer:(id)arg1;
- (_Bool)createDepthDataOutput;
@property(readonly, nonatomic) AVCaptureDepthDataOutput *depthOutput; // @synthesize depthOutput=_depthOutput;
- (void)disableMetadataOutput;
- (void)enableMetadataOutput;
- (void)fixCaptureSession;
- (id)initWithPerformer:(id)arg1;
- (_Bool)isRunning;
- (void)isRunningWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isUnderlyingAVCaptureSession:(id)arg1;
- (_Bool)isVideoMirrored;
@property(readonly, nonatomic) AVCaptureMetadataOutput *metadataOutput;
- (void)performConfiguration:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) AVCapturePhotoOutput *photoOutput;
- (void)removeDeviceAsInput:(id)arg1;
- (void)resetAVCaptureSession;
- (void)setBlackCameraDetector:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepthDataOutputEnabled:(_Bool)arg1;
- (_Bool)setDeviceAsInput:(id)arg1;
- (void)setPortraitEffectsMatteDeliveryEnabled:(_Bool)arg1;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (_Bool)setSessionPreset:(id)arg1;
@property(nonatomic) _Bool skipSessionFix;
- (void)setVideoMirroredWithDevicePosition:(unsigned long long)arg1;
- (void)setVideoOrientation:(long long)arg1;
@property(nonatomic) long long videoStabilizationMode;
- (void)startRunning;
- (void)stopRunning;
@property(readonly, nonatomic) AVCaptureVideoDataOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
- (void)warmupCaptureHardwareForColdAndHeadlessStartup:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

