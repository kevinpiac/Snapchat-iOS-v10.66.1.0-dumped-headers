//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImageProcessGLWrapper-Protocol.h"

@class NSString;

@interface SCImageProcessGLWrapper : NSObject <SCImageProcessGLWrapper>
{
}

- (void)bindInputTexture:(unsigned int)arg1 textureUnit:(unsigned int)arg2;
- (void)bindReadDrawFramebuffer:(unsigned int)arg1;
- (void)bindRenderbuffer:(unsigned int)arg1;
- (void)clearColorWithR:(float)arg1 g:(float)arg2 b:(float)arg3 a:(float)arg4;
- (void)flush;
- (void)readRGBAPixelsWithX:(int)arg1 y:(int)arg2 width:(int)arg3 height:(int)arg4 data:(void *)arg5;
- (void)setActiveTextureUnit:(unsigned int)arg1;
- (void)setOutputRenderBuffer:(unsigned int)arg1;
- (void)setOutputTexture:(unsigned int)arg1;
- (void)setViewPortWithWidth:(int)arg1 height:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
