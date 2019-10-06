//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LSABaseComponent.h"

@class LSASpectaclesLutCache, LSATextureConverter;

@interface LSAVideoProcessingComponent : LSABaseComponent
{
    struct unique_ptr<LS::FrameBuffer, std::__1::function<void (LS::FrameBuffer *)>> _frameBuffer;
    struct unique_ptr<LS::RGB2NV21Convertor, std::__1::default_delete<LS::RGB2NV21Convertor>> _rgb2NV21Convertor;
    struct unique_ptr<LS::TextureReader, std::__1::default_delete<LS::TextureReader>> _textureReader;
    LSATextureConverter *_textureConverter;
    struct CGSize _textureSize;
    struct RectTransform _inputImageTransform;
    long long _viewPortAspectRatioNumerator;
    long long _viewPortAspectRatioDenominator;
    struct Size<int> _yuvRenderingResolution;
    long long _processingMode;
    LSASpectaclesLutCache *_spectaclesLutCache;
}

+ (shared_ptr_72f2ba33)_prepareOutputTextureWithTexture:(shared_ptr_72f2ba33)arg1 processingInfo:(id)arg2;
+ (int)aspectRatioModeForFillMode:(long long)arg1;
+ (_Bool)shouldUseFinishOnRecordingFromARKit:(_Bool)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_processBGRAPixelBuffer:(struct __CVBuffer *)arg1 processingInfo:(id)arg2 coreManager:(shared_ptr_6e078de4)arg3;
- (id)_processYUVPixelBuffer:(struct __CVBuffer *)arg1 processingInfo:(id)arg2 coreManager:(shared_ptr_6e078de4)arg3;
- (void)clearResources;
- (tuple_3b4c9a89)imageAndTextureFromYUVPixelBuffer:(struct __CVBuffer *)arg1 processingInfo:(id)arg2 coreManager:(shared_ptr_6e078de4)arg3;
- (unique_ptr_430f0bd3)imageFromBGRAPixelBuffer:(struct __CVBuffer *)arg1 processingInfo:(id)arg2 coreManager:(shared_ptr_6e078de4)arg3;
- (struct ImageProcessingConfig)imageProcessingConfigFromProcessingInfo:(id)arg1 texture:(const shared_ptr_a0cbdd2a *)arg2;
- (id)initWithPerformer:(id)arg1;
- (id)outputInfoDictionary;
- (void)prepareConvertorsForInputSize:(struct CGSize)arg1;
- (void)prepareCropRegionForInputSize:(struct CGSize)arg1;
- (void)prepareFrameBufferForTextureSize:(struct CGSize)arg1;
- (void)prepareTextureConverter;
- (id)processImage:(id)arg1 maxPixelSize:(long long)arg2 processingInfo:(id)arg3 info:(id *)arg4 error:(id *)arg5;
- (id)processPixelBuffer:(struct __CVBuffer *)arg1 processingInfo:(id)arg2 info:(id *)arg3 error:(id *)arg4;
- (id)processTexture:(int)arg1 textureSize:(struct CGSize)arg2 data:(void *)arg3 pixelBuffer:(struct __CVBuffer *)arg4 processingInfo:(id)arg5 info:(id *)arg6 error:(id *)arg7;
- (id)processTexture:(int)arg1 textureSize:(struct CGSize)arg2 data:(void *)arg3 processingInfo:(id)arg4 info:(id *)arg5 error:(id *)arg6;
- (void)setOverlayImageWithPath:(id)arg1 fillMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setProcessingMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setTexTransformToPortraitOrientation:(struct Transform *)arg1 texTransformToOriginalOrientation:(struct Transform *)arg2 sizeTransformToPortraitOrientation:(struct RectTransform *)arg3 sizeTransformToOriginalOrientation:(struct RectTransform *)arg4 imageOrientation:(long long)arg5;
- (void)setViewPortAspectRatioNumerator:(long long)arg1 denominator:(long long)arg2;
- (void)setYuvRenderingResolutionWidth:(long long)arg1 height:(long long)arg2;
- (id)uiImageFromTexture:(id)arg1;
- (void)updateImageProcessingConfig:(LSAObjCppPtrWrapper_dcbd9e45)arg1 withProcessingInfo:(id)arg2 texture:(const shared_ptr_a0cbdd2a *)arg3;
- (void)updateTextureOrientationWithCameraInfo:(struct CameraInfo *)arg1;

@end
