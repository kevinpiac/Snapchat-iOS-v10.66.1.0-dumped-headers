//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCManagedVideoDataSourceListener-Protocol.h"
#import "SCStillImageCapturer-Protocol.h"

@class NSString, SCImageCaptureConfiguration;
@protocol SCManagedCapturerLensAPI, SCPerforming;

@interface SCARImageCapturer : NSObject <SCStillImageCapturer, SCManagedVideoDataSourceListener>
{
    id <SCManagedCapturerLensAPI> _lensProcessingCore;
    id <SCPerforming> _performer;
    CDUnknownBlockType _stillImageHandler;
    SCImageCaptureConfiguration *_captureConfiguration;
}

- (void).cxx_destruct;
- (void)captureStillImageWithCaptureConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithPerformer:(id)arg1 lensProcessingCore:(id)arg2;
- (void)managedVideoDataSource:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 devicePosition:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

