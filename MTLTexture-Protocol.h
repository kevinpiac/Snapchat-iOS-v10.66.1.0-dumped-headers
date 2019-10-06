//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTLResource-Protocol.h"

@protocol MTLBuffer, MTLResource, MTLTexture;

@protocol MTLTexture <MTLResource>
@property(readonly) _Bool allowGPUOptimizedContents;
@property(readonly) unsigned long long arrayLength;
@property(readonly) id <MTLBuffer> buffer;
@property(readonly) unsigned long long bufferBytesPerRow;
@property(readonly) unsigned long long bufferOffset;
@property(readonly) unsigned long long depth;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(CDStruct_caaed6bc)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(CDStruct_caaed6bc)arg3 mipmapLevel:(unsigned long long)arg4;
@property(readonly) unsigned long long height;
@property(readonly) struct __IOSurface *iosurface;
@property(readonly) unsigned long long iosurfacePlane;
@property(readonly, getter=isFramebufferOnly) _Bool framebufferOnly;
@property(readonly) unsigned long long mipmapLevelCount;
- (id <MTLTexture>)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (id <MTLTexture>)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4;
@property(readonly) unsigned long long parentRelativeLevel;
@property(readonly) unsigned long long parentRelativeSlice;
@property(readonly) id <MTLTexture> parentTexture;
@property(readonly) unsigned long long pixelFormat;
- (void)replaceRegion:(CDStruct_caaed6bc)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void *)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (void)replaceRegion:(CDStruct_caaed6bc)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void *)arg3 bytesPerRow:(unsigned long long)arg4;
@property(readonly) id <MTLResource> rootResource;
@property(readonly) unsigned long long sampleCount;
@property(readonly) unsigned long long textureType;
@property(readonly) unsigned long long usage;
@property(readonly) unsigned long long width;
@end
