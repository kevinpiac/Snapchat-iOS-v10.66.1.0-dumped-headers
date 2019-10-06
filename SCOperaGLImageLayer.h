//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaGLLayer-Protocol.h"
#import "SCOperaLayer-Protocol.h"
#import "SCOperaRotatingLayer-Protocol.h"

@class NSString, SCOperaPage;

@interface SCOperaGLImageLayer : NSObject <SCOperaLayer, SCOperaGLLayer, SCOperaRotatingLayer>
{
    _Bool _isRotating;
    _Bool _shouldRotate;
    NSString *_intermediateGLCommandsKey;
    NSString *_midOutputGLCommandKey;
    NSString *_outputGLCommandsKey;
    NSString *_magicMomentGLCommandKey;
    double _mediaScaleFactor;
    NSString *_imageKey;
    SCOperaPage *_page;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *imageKey; // @synthesize imageKey=_imageKey;
- (id)initWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, copy, nonatomic) NSString *intermediateGLCommandsKey; // @synthesize intermediateGLCommandsKey=_intermediateGLCommandsKey;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isRotating; // @synthesize isRotating=_isRotating;
@property(readonly, copy, nonatomic) NSString *magicMomentGLCommandKey; // @synthesize magicMomentGLCommandKey=_magicMomentGLCommandKey;
@property(readonly, nonatomic) double mediaScaleFactor; // @synthesize mediaScaleFactor=_mediaScaleFactor;
@property(readonly, copy, nonatomic) NSString *midOutputGLCommandKey; // @synthesize midOutputGLCommandKey=_midOutputGLCommandKey;
@property(readonly, copy, nonatomic) NSString *outputGLCommandsKey; // @synthesize outputGLCommandsKey=_outputGLCommandsKey;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
@property(readonly, nonatomic) _Bool shouldRotate; // @synthesize shouldRotate=_shouldRotate;
- (unsigned long long)type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

