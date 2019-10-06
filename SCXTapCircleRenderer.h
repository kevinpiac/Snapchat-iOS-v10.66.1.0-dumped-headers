//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCXRenderer-Protocol.h"

@class NSString;

@interface SCXTapCircleRenderer : NSObject <SCXRenderer>
{
    unsigned int _intermediateRenderProgram;
    unsigned int _intermediateVertexShader;
    unsigned int _intermediateFragShader;
    unsigned int _tapTextureLocation;
    int _intermediatePositionAttributeLocation;
    int _scaleUniformLocation;
    int _translateUniformLocation;
    int _alphaUniformLocation;
    int _borderScaleUniformLocation;
    unsigned int _finalRenderProgram;
    unsigned int _finalVertexShader;
    unsigned int _finalFragShader;
    int _finalPositionAttributeLocation;
    int _intermediateTextureUniformLocation;
    unsigned int _vbo;
    unsigned int _ebo;
    unsigned int _fbo;
    int _oldFBO;
    _Bool _readyToRender;
}

- (void)_drawToMainFBO;
- (void)_lazyPrepareRendererIfNeeded;
- (void)_prepareFinalRender;
- (void)_prepareIntermediateRender;
- (void)_prepareRenderIteration;
- (void)_renderCircle:(id)arg1 mapViewport:(id)arg2 view:(id)arg3;
- (void)complete;
- (id)init;
- (void)prepare;
- (void)render:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

