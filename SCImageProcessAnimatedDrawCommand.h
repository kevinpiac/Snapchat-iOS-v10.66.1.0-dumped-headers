//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCImageProcessCommand.h"

@class NSArray, SCCroppingState, SCImageProcessContext;

@interface SCImageProcessAnimatedDrawCommand : SCImageProcessCommand
{
    int _verticesPosition;
    int _texCoordsPosition;
    int _imageTexturePosition;
    unsigned int *_textures;
    int *_curTextureIndex;
    SCImageProcessContext *_context;
    NSArray *_images;
    NSArray *_coordinateProviders;
    SCCroppingState *_croppingState;
    _Bool _isForPlayback;
    double _videoSpeedFactor;
    _Bool _videoReversed;
}

+ (id)commandWithVideoTrackedImages:(id)arg1 videoSpeedFactor:(double)arg2 croppingState:(id)arg3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithImages:(id)arg1 vertexCoordinatesProviders:(id)arg2 isForPlayback:(_Bool)arg3 videoSpeedFactor:(double)arg4 cropppingState:(id)arg5;
- (void)loadTexturesAtTime:(CDStruct_1b6d18a9)arg1 outputWidth:(unsigned long long)arg2 outputHeight:(unsigned long long)arg3;
- (_Bool)loadWithContext:(id)arg1 error:(id *)arg2;
- (id)runWithContext:(id)arg1 pixelSize:(CDStruct_5e758c1a)arg2 bytesPerRow:(unsigned long long)arg3 outputPixelSize:(CDStruct_5e758c1a)arg4 renderRange:(CDStruct_b2fbf00d)arg5 orientation:(long long)arg6 viewportTransform:(struct CGAffineTransform)arg7 negativeSpaceColor:(id)arg8 error:(id *)arg9;
- (_Bool)unloadWithError:(id *)arg1;

@end

