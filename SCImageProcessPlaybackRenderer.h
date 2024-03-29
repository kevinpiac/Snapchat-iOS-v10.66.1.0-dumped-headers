//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImageProcessPlaybackRendering-Protocol.h"

@class CAEAGLLayer, NSString;

@interface SCImageProcessPlaybackRenderer : NSObject <SCImageProcessPlaybackRendering>
{
    CAEAGLLayer *_layer;
    _Bool _buffersAvaiable;
    unsigned int _colorRenderbuffer;
    unsigned int _framebuffer;
    int _outputHeight;
    int _outputWidth;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool buffersAvaiable; // @synthesize buffersAvaiable=_buffersAvaiable;
@property(readonly, nonatomic) unsigned int colorRenderbuffer; // @synthesize colorRenderbuffer=_colorRenderbuffer;
- (void)deleteBuffers;
@property(readonly, nonatomic) unsigned int framebuffer; // @synthesize framebuffer=_framebuffer;
- (void)genBuffersWithContext:(id)arg1;
- (id)initWithLayer:(id)arg1;
@property(readonly, nonatomic) int outputHeight; // @synthesize outputHeight=_outputHeight;
@property(readonly, nonatomic) int outputWidth; // @synthesize outputWidth=_outputWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

