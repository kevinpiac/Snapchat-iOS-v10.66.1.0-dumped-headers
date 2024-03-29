//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImageProcessRequest-Protocol.h"

@class CIContext, NSArray, NSString;

@interface SCImageProcessVideoExportRequest : NSObject <SCImageProcessRequest>
{
    struct __CVBuffer *_inPixelBuffer;
    struct __CVBuffer *_outPixelBuffer;
    long long _orientation;
    NSArray *_GPUCommands;
    NSArray *_CPUCommands;
    CDUnknownBlockType _completionHandler;
    struct __CVBuffer *_colorTextureRef;
    struct __CVBuffer *_luminanceTextureRef;
    struct __CVBuffer *_chrominanceTextureRef;
    struct __CVBuffer *_renderTextureRef;
    unsigned int _framebuffer;
    unsigned int _intermediateTexture[2];
    CDStruct_1b6d18a9 _presentationTime;
    struct CGAffineTransform _viewportTransform;
    struct CGAffineTransform _cpuBufferTransform;
    unsigned int _texture;
    unsigned int _pixelType;
    CIContext *_ciContext;
    struct CGColorSpace *_rgbColorSpace;
    unsigned long long _status;
}

+ (id)requestWithInputPixelBuffer:(struct __CVBuffer *)arg1 outputPixelBuffer:(struct __CVBuffer *)arg2 orientation:(long long)arg3 viewportTransform:(struct CGAffineTransform)arg4 cpuBufferTransform:(struct CGAffineTransform)arg5 presentationTime:(CDStruct_1b6d18a9)arg6 GPUCommands:(id)arg7 CPUCommands:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool GPURequired;
- (_Bool)_innerRunProgramsWithContext:(id)arg1 GPUAvailable:(_Bool)arg2 error:(id *)arg3;
- (void)_setInputColorTexture:(unsigned int)arg1;
- (void)_setInputYTexture:(unsigned int)arg1 uvTexture:(unsigned int)arg2;
- (void)_transformInputPixelBuffer:(struct __CVBuffer *)arg1;
- (void)cancel;
- (void)cleanup;
- (void)dealloc;
- (id)initWithInputPixelBuffer:(struct __CVBuffer *)arg1 outputPixelBuffer:(struct __CVBuffer *)arg2 orientation:(long long)arg3 viewportTransform:(struct CGAffineTransform)arg4 cpuBufferTransform:(struct CGAffineTransform)arg5 presentationTime:(CDStruct_1b6d18a9)arg6 GPUCommands:(id)arg7 CPUCommands:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (_Bool)runProgramsWithContext:(id)arg1 GPUAvailable:(_Bool)arg2 error:(id *)arg3;
- (void)setupInputTextureWithContext:(id)arg1 runContext:(id)arg2;
- (void)setupIntermediateTexturesIfNeededWithContext:(id)arg1 intermediatePasses:(long long)arg2 pixelWidth:(unsigned int)arg3 pixelHeight:(unsigned int)arg4;
- (void)setupOutputFramebufferWithContext:(id)arg1;
- (void)setupOutputPixelBufferWithContext:(id)arg1;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

