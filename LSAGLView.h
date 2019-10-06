//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LSAGLView-Protocol.h"
#import "LSRenderInContext-Protocol.h"

@class EAGLContext, LSATexture, NSObject, NSString;
@protocol OS_dispatch_semaphore;

@interface LSAGLView : UIView <LSRenderInContext, LSAGLView>
{
    unsigned int _defaultFramebuffer;
    unsigned int _defaultRenderbuffer;
    struct CGSize _inputImageSize;
    long long _inputImageBytesPerRow;
    float _imageVertices[8];
    struct CGSize _boundsSizeAtFrameBufferEpoch;
    struct LSDrawTexture *_shDrawTexture;
    struct CGSize _sizeInPixels;
    _Bool _isGPUAllowed;
    LSATexture *_textureToDraw;
    EAGLContext *_context;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    long long _fillMode;
    long long _rotationMode;
}

+ (const float *)_textureCoordinatesForRotation:(long long)arg1;
+ (struct RectTransform)coreTransformFromRotationMode:(long long)arg1;
+ (Class)layerClass;
- (void).cxx_destruct;
- (void)_correctTextureCoordsForBytesPerRow:(float *)arg1;
- (void)_createDrawTexture;
- (void)_createGLBuffers;
- (void)_deleteDrawTexture;
- (void)_deleteGLBuffers;
- (void)_drawRawTexture:(unsigned int)arg1 withTransformArray:(const struct RectTransformArray *)arg2;
- (void)_prepareFramebuffer;
- (void)_presentFramebuffer;
- (void)_recalculateViewGeometry;
- (void)_setInputSize:(struct CGSize)arg1 bytesPerRow:(long long)arg2;
- (void)commonInit;
- (void)dealloc;
- (void)didBecomeActive:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)drawTexture:(id)arg1;
@property(nonatomic) long long fillMode; // @synthesize fillMode=_fillMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)renderInContext:(struct CGContext *)arg1;
@property(nonatomic) long long rotationMode; // @synthesize rotationMode=_rotationMode;
- (void)willEnterForeground:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

