//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class NSString;

@interface CaptureDelegate : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    int newFrame;
    struct __CVBuffer *mCurrentImageBuffer;
    char *imagedata;
    struct _IplImage *image;
    char *bgr_imagedata;
    struct _IplImage *bgr_image;
    struct _IplImage *bgr_image_r90;
    unsigned long long currSize;
}

- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)dealloc;
- (struct _IplImage *)getOutput;
- (id)init;
- (int)updateImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

