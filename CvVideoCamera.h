//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CvAbstractCamera.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVCaptureVideoDataOutput, CALayer, NSObject, NSString;
@protocol CvVideoCameraDelegate, OS_dispatch_queue;

@interface CvVideoCamera : CvAbstractCamera <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureVideoDataOutput *videoDataOutput;
    NSObject<OS_dispatch_queue> *videoDataOutputQueue;
    CALayer *customPreviewLayer;
    _Bool grayscaleMode;
    _Bool recordVideo;
    _Bool rotateVideo;
    AVAssetWriterInput *recordAssetWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *recordPixelBufferAdaptor;
    AVAssetWriter *recordAssetWriter;
    CDStruct_1b6d18a9 lastSampleTime;
    int recordingCountDown;
    id <CvVideoCameraDelegate> delegate;
}

- (void)adjustLayoutToInterfaceOrientation:(long long)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)createCaptureOutput;
- (void)createCustomVideoPreview;
- (void)createVideoDataOutput;
- (void)createVideoFileOutput;
@property(retain, nonatomic) CALayer *customPreviewLayer; // @synthesize customPreviewLayer;
@property(nonatomic) id <CvVideoCameraDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool grayscaleMode; // @synthesize grayscaleMode;
- (id)initWithParentView:(id)arg1;
- (void)layoutPreviewLayer;
- (struct __CVBuffer *)pixelBufferFromCGImage:(struct CGImage *)arg1;
@property(retain, nonatomic) AVAssetWriter *recordAssetWriter; // @synthesize recordAssetWriter;
@property(retain, nonatomic) AVAssetWriterInput *recordAssetWriterInput; // @synthesize recordAssetWriterInput;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *recordPixelBufferAdaptor; // @synthesize recordPixelBufferAdaptor;
@property(nonatomic) _Bool recordVideo; // @synthesize recordVideo;
@property(nonatomic) _Bool rotateVideo; // @synthesize rotateVideo;
- (void)saveVideo;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput;
- (void)start;
- (void)stop;
- (void)updateOrientation;
- (id)videoFileString;
- (id)videoFileURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

