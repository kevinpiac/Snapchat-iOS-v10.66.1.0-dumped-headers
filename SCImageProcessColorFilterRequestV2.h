//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImageProcessRequest-Protocol.h"

@class NSArray, NSData, NSString, UIColor;
@protocol SCImageProcessGLWrapper, SCImageProcessOutputImageBaking, SCImageProcessPlaybackRendering;

@interface SCImageProcessColorFilterRequestV2 : NSObject <SCImageProcessRequest>
{
    NSData *_imageData;
    NSData *_histogramData;
    CDStruct_5e758c1a _pixelSize;
    NSArray *_preCommands;
    NSArray *_commands;
    id <SCImageProcessPlaybackRendering> _renderer;
    CDUnknownBlockType _colorFilterSessionCompletionHandler;
    CDUnknownBlockType _completionHandler;
    long long _orientation;
    struct CGAffineTransform _viewportTransform;
    NSString *_colorFilterSessionId;
    double _displayTimestamp;
    UIColor *_backgroundColor;
    struct SCImageProcessPingPongTextureContainer _pingPongTextureContainer;
    id <SCImageProcessGLWrapper> _glWrapper;
    id <SCImageProcessOutputImageBaking> _outputImageBaker;
    unsigned long long _status;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool GPURequired;
- (_Bool)_innerRunProgramsWithContext:(id)arg1 error:(id *)arg2;
- (unsigned int)_intermediateTextureWithName:(id)arg1 context:(id)arg2;
- (void)_paintBackgroundColorWithContext:(id)arg1;
- (void)_setupIntermediateTexturesIfNeededWithContext:(id)arg1 intermediatePasses:(long long)arg2;
- (void)_setupOutputRendererWithContext:(id)arg1;
- (void)cancel;
- (id)initWithGlWrapper:(id)arg1 imageData:(id)arg2 histogramData:(id)arg3 pixelSize:(CDStruct_5e758c1a)arg4 preCommands:(id)arg5 commands:(id)arg6 colorFilterSessionCompletionHandler:(CDUnknownBlockType)arg7 outputImageBaker:(id)arg8 renderer:(id)arg9 orientation:(long long)arg10 viewportTransform:(struct CGAffineTransform)arg11 displayTimestamp:(double)arg12 backgroundColor:(id)arg13 completionHandler:(CDUnknownBlockType)arg14 colorFilterSessionId:(id)arg15;
- (_Bool)runProgramsWithContext:(id)arg1 GPUAvailable:(_Bool)arg2 error:(id *)arg3;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
