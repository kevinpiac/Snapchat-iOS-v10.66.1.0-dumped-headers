//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCImageProcessCommand.h"

@class SCImageProcessProgram;

@interface SCImageProcessNewportPlaybackYUVCommand : SCImageProcessCommand
{
    struct __CVOpenGLESTextureCache *_textureCache;
    int _textureCoordinateParam;
    int _luminanceTextureParam;
    int _cameraParam;
    SCImageProcessProgram *_chrominanceProgram;
    int _chrominanceTextureParam;
    int _chrominanceCameraParam;
    unsigned int _luminanceFramebuffer;
    unsigned int _luminanceTexture;
    unsigned int _chrominanceFramebuffer;
    unsigned int _chrominanceTexture;
    unsigned long long _stereoCamera;
}

- (void).cxx_destruct;
- (unsigned int)_createTextureWithData:(const void *)arg1 pixelWidth:(unsigned int)arg2 pixelHeight:(unsigned int)arg3 textureUnit:(unsigned int)arg4 internalFormat:(unsigned int)arg5 pixelFormat:(unsigned int)arg6 type:(unsigned int)arg7;
- (void)_loadFramebuffersIfNeededWithPixelWidth:(unsigned long long)arg1 pixelHeight:(unsigned long long)arg2;
- (id)initWithStereoCamera:(unsigned long long)arg1;
- (_Bool)loadWithContext:(id)arg1 error:(id *)arg2;
- (id)runWithContext:(id)arg1 pixelSize:(CDStruct_5e758c1a)arg2 bytesPerRow:(unsigned long long)arg3 outputPixelSize:(CDStruct_5e758c1a)arg4 renderRange:(CDStruct_b2fbf00d)arg5 orientation:(long long)arg6 viewportTransform:(struct CGAffineTransform)arg7 negativeSpaceColor:(id)arg8 error:(id *)arg9;
- (_Bool)unloadWithError:(id *)arg1;

@end
