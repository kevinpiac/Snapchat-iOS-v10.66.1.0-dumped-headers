//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTLDevice-Protocol.h"

@class NSString;

@interface SCMockMetalDevice : NSObject <MTLDevice>
{
    _Bool _depth24Stencil8PixelFormatSupported;
    _Bool _headless;
    _Bool _lowPower;
    _Bool _programmableSamplePositionsSupported;
    _Bool _rasterOrderGroupsSupported;
    _Bool _removable;
    unsigned long long _argumentBuffersSupport;
    unsigned long long _currentAllocatedSize;
    unsigned long long _maxThreadgroupMemoryLength;
    NSString *_name;
    unsigned long long _readWriteTextureSupport;
    unsigned long long _recommendedMaxWorkingSetSize;
    unsigned long long _registryID;
    unsigned long long _maxArgumentBufferSamplerCount;
    unsigned long long _maxBufferLength;
    CDStruct_da2e99ad _maxThreadsPerThreadgroup;
}

- (void).cxx_destruct;
@property(readonly, getter=areProgrammableSamplePositionsSupported) _Bool programmableSamplePositionsSupported; // @synthesize programmableSamplePositionsSupported=_programmableSamplePositionsSupported;
@property(readonly, getter=areRasterOrderGroupsSupported) _Bool rasterOrderGroupsSupported; // @synthesize rasterOrderGroupsSupported=_rasterOrderGroupsSupported;
@property(readonly) unsigned long long argumentBuffersSupport; // @synthesize argumentBuffersSupport=_argumentBuffersSupport;
@property(readonly) unsigned long long currentAllocatedSize; // @synthesize currentAllocatedSize=_currentAllocatedSize;
- (void)getDefaultSamplePositions:(CDStruct_b2fbf00d *)arg1 count:(unsigned long long)arg2;
- (CDStruct_5e758c1a)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (CDStruct_5e758c1a)heapTextureSizeAndAlignWithDescriptor:(id)arg1;
@property(readonly, getter=isDepth24Stencil8PixelFormatSupported) _Bool depth24Stencil8PixelFormatSupported; // @synthesize depth24Stencil8PixelFormatSupported=_depth24Stencil8PixelFormatSupported;
@property(readonly, getter=isHeadless) _Bool headless; // @synthesize headless=_headless;
@property(readonly, getter=isLowPower) _Bool lowPower; // @synthesize lowPower=_lowPower;
@property(readonly, getter=isRemovable) _Bool removable; // @synthesize removable=_removable;
@property(readonly) unsigned long long maxArgumentBufferSamplerCount; // @synthesize maxArgumentBufferSamplerCount=_maxArgumentBufferSamplerCount;
@property(readonly) unsigned long long maxBufferLength; // @synthesize maxBufferLength=_maxBufferLength;
- (unsigned long long)maxTextureHeight2D;
- (unsigned long long)maxTextureWidth2D;
@property(readonly) unsigned long long maxThreadgroupMemoryLength; // @synthesize maxThreadgroupMemoryLength=_maxThreadgroupMemoryLength;
@property(readonly) CDStruct_da2e99ad maxThreadsPerThreadgroup; // @synthesize maxThreadsPerThreadgroup=_maxThreadsPerThreadgroup;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (unsigned long long)minimumTextureBufferAlignmentForPixelFormat:(unsigned long long)arg1;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)newArgumentEncoderWithArguments:(id)arg1;
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newCommandQueue;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id *)arg2;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newDefaultLibrary;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id *)arg2;
- (id)newDepthStencilStateWithDescriptor:(id)arg1;
- (id)newEvent;
- (id)newFence;
- (id)newHeapWithDescriptor:(id)arg1;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newLibraryWithData:(id)arg1 error:(id *)arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id *)arg2;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)newLibraryWithURL:(id)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newSamplerStateWithDescriptor:(id)arg1;
- (id)newSharedEvent;
- (id)newSharedEventWithHandle:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3;
@property(readonly) unsigned long long readWriteTextureSupport; // @synthesize readWriteTextureSupport=_readWriteTextureSupport;
@property(readonly) unsigned long long recommendedMaxWorkingSetSize; // @synthesize recommendedMaxWorkingSetSize=_recommendedMaxWorkingSetSize;
@property(readonly) unsigned long long registryID; // @synthesize registryID=_registryID;
- (_Bool)supportsFeatureSet:(unsigned long long)arg1;
- (_Bool)supportsTextureSampleCount:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

