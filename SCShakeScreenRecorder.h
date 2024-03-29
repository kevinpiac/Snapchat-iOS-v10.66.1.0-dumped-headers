//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, CADisplayLink, UIImage;
@protocol OS_dispatch_semaphore, SCPerforming, SCShakeScreenRecorderDelegate;

@interface SCShakeScreenRecorder : NSObject
{
    AVAssetWriter *_videoWriter;
    AVAssetWriterInput *_videoWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *_avAdaptor;
    CADisplayLink *_displayLink;
    double _firstTimeStamp;
    _Bool _isRecording;
    id <SCPerforming> _renderPerformer;
    id <SCPerforming> _appendPixelBufferPerformer;
    NSObject<OS_dispatch_semaphore> *_frameRenderingSemaphore;
    NSObject<OS_dispatch_semaphore> *_pixelAppendSemaphore;
    struct CGRect _bounds;
    double _scale;
    struct CGColorSpace *_rgbColorSpace;
    struct __CVPixelBufferPool *_outputBufferPool;
    id <SCShakeScreenRecorderDelegate> _delegate;
    UIImage *_screenshotImage;
}

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completeRecordingSession:(CDUnknownBlockType)arg1;
- (void)_removeTempFilePath:(id)arg1;
- (void)_setUpWriter;
- (void)_writeVideoFrame;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)startRecording;
- (void)stopRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

