//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTLCommandBuffer-Protocol.h"

@class NSError, NSString;
@protocol MTLCommandQueue, MTLDevice;

@interface SCMockMetalCommandBuffer : NSObject <MTLCommandBuffer>
{
    _Bool _retainedReferences;
    id <MTLCommandQueue> _commandQueue;
    id <MTLDevice> _device;
    NSError *_error;
    double _kernelEndTime;
    double _GPUEndTime;
    double _GPUStartTime;
    double _kernelStartTime;
    NSString *_label;
    unsigned long long _status;
}

- (void).cxx_destruct;
@property(readonly) double GPUEndTime; // @synthesize GPUEndTime=_GPUEndTime;
@property(readonly) double GPUStartTime; // @synthesize GPUStartTime=_GPUStartTime;
- (void)addCompletedHandler:(CDUnknownBlockType)arg1;
- (void)addScheduledHandler:(CDUnknownBlockType)arg1;
- (id)blitCommandEncoder;
@property(readonly) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
- (void)commit;
- (id)computeCommandEncoder;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)enqueue;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) double kernelEndTime; // @synthesize kernelEndTime=_kernelEndTime;
@property(readonly) double kernelStartTime; // @synthesize kernelStartTime=_kernelStartTime;
@property(copy) NSString *label; // @synthesize label=_label;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (void)popDebugGroup;
- (void)presentDrawable:(id)arg1;
- (void)presentDrawable:(id)arg1 afterMinimumDuration:(double)arg2;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (void)pushDebugGroup:(id)arg1;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
@property(readonly) _Bool retainedReferences; // @synthesize retainedReferences=_retainedReferences;
@property(readonly) unsigned long long status; // @synthesize status=_status;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
