//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCProcessingModule-Protocol.h"

@class CIContext, NSString, SCFrameProcessLatencyReporter, SCPortraitModeFilter;

@interface SCPortraitModeModule : NSObject <SCProcessingModule>
{
    struct shared_ptr<OE::Segmentation::System> _oeSegmentor;
    SCPortraitModeFilter *_portraitFilter;
    CIContext *_ciContext;
    SCFrameProcessLatencyReporter *_latencyReporter;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Mat)BGRMatFromYUV420fBuffer:(struct __CVBuffer *)arg1;
- (struct opaqueCMSampleBuffer *)_process:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithProcessLatencyReporter:(id)arg1 filterListener:(id)arg2;
- (struct opaqueCMSampleBuffer *)render:(struct RenderData)arg1;
- (void)writeBGRAMat:(struct Mat)arg1 to420fBuffer:(struct __CVBuffer *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

