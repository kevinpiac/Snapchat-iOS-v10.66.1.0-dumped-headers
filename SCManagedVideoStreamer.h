//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ARSessionDelegate-Protocol.h"
#import "AVCaptureDataOutputSynchronizerDelegate-Protocol.h"
#import "AVCaptureDepthDataOutputDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "SCManagedVideoARDataSource-Protocol.h"
#import "SCManagedVideoDataSource-Protocol.h"

@class ARFrame, AVCaptureDataOutputSynchronizer, AVDepthData, NSMutableArray, NSString, SCCaptureResource, SCFrameProcessLatencyReporter, SCManagedCaptureSession, SCManagedVideoDataSourceListenerAnnouncer, SCQueuePerformer;
@protocol SCManagedSampleBufferDisplayController;

@interface SCManagedVideoStreamer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureDepthDataOutputDelegate, AVCaptureDataOutputSynchronizerDelegate, ARSessionDelegate, SCManagedVideoDataSource, SCManagedVideoARDataSource>
{
    AVCaptureDataOutputSynchronizer *_dataOutputSynchronizer;
    SCCaptureResource *_captureResource;
    SCManagedCaptureSession *_captureSession;
    _Bool _performingConfigurations;
    unsigned long long _devicePosition;
    SCManagedVideoDataSourceListenerAnnouncer *_announcer;
    _Bool _sampleBufferDisplayEnabled;
    id <SCManagedSampleBufferDisplayController> _sampleBufferDisplayController;
    CDUnknownBlockType _flushOutdatedPreviewBlock;
    NSMutableArray *_waitUntilSampleBufferDisplayedBlocks;
    SCFrameProcessLatencyReporter *_frameProcessLatencyReporter;
    double _lastDisplayedFrameTimestamp;
    double _lastDisplayedDepthFrameTimestamp;
    _Bool _depthCaptureEnabled;
    _Bool _keepLateFrames;
    SCQueuePerformer *_keepLateFramesPerformer;
    _Atomic int _processingBuffersCount;
    double _zoomFactor;
    _Bool _isStreaming;
    float _fieldOfView;
    SCQueuePerformer *_performer;
    ARFrame *_currentFrame;
    AVDepthData *_lastDepthData;
    long long _videoOrientation;
}

- (void).cxx_destruct;
- (void)_cancelFlushOutdatedPreview;
- (void)_enableVideoMirrorForDevicePosition:(unsigned long long)arg1;
- (void)_performCompletionHandlersForWaitUntilSampleBufferDisplayed;
- (void)_updateFieldOfViewWithARFrame:(id)arg1;
- (void)addListener:(id)arg1;
- (void)addSampleBufferDisplayController:(id)arg1;
- (void)beginConfiguration;
- (id)callbackPerformer;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)commitConfiguration;
@property(retain) ARFrame *currentFrame; // @synthesize currentFrame=_currentFrame;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
@property float fieldOfView; // @synthesize fieldOfView=_fieldOfView;
- (_Bool)getKeepLateFramesEnabled;
- (id)initWithResource:(id)arg1;
@property(readonly, nonatomic) _Bool isStreaming; // @synthesize isStreaming=_isStreaming;
@property(retain) AVDepthData *lastDepthData; // @synthesize lastDepthData=_lastDepthData;
- (void)pauseStreaming;
@property(readonly, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
- (void)removeListener:(id)arg1;
- (void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2;
- (void)session:(id)arg1 didAddAnchors:(id)arg2;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (void)setDepthCaptureEnabled:(_Bool)arg1;
- (void)setDevicePosition:(unsigned long long)arg1;
- (void)setKeepLateFramesEnabled:(_Bool)arg1;
- (void)setSampleBufferDisplayEnabled:(_Bool)arg1;
- (void)setVideoOrientation:(long long)arg1;
- (void)setZoomFactor:(double)arg1;
- (void)setupWithARSession:(id)arg1;
- (void)setupWithSession:(id)arg1 devicePosition:(unsigned long long)arg2;
- (_Bool)shouldRecreateWhenSessionChange;
- (void)startStreaming;
- (void)stopStreaming;
@property(readonly, nonatomic) long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
- (void)waitUntilSampleBufferDisplayed:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

