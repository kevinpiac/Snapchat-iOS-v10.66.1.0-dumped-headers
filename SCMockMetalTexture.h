//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTLTexture-Protocol.h"
#import "MTLTextureImplementation-Protocol.h"

@class NSString;
@protocol MTLBuffer, MTLDevice, MTLHeap, MTLResource, MTLTexture;

@interface SCMockMetalTexture : NSObject <MTLTexture, MTLTextureImplementation>
{
    _Bool _framebufferOnly;
    _Bool _allowGPUOptimizedContents;
    id <MTLBuffer> _buffer;
    unsigned long long _arrayLength;
    unsigned long long _bufferBytesPerRow;
    unsigned long long _bufferOffset;
    unsigned long long _height;
    unsigned long long _depth;
    struct __IOSurface *_iosurface;
    unsigned long long _allocatedSize;
    unsigned long long _cpuCacheMode;
    id <MTLDevice> _device;
    id <MTLHeap> _heap;
    unsigned long long _iosurfacePlane;
    NSString *_label;
    unsigned long long _mipmapLevelCount;
    unsigned long long _parentRelativeLevel;
    unsigned long long _parentRelativeSlice;
    id <MTLTexture> _parentTexture;
    unsigned long long _pixelFormat;
    id <MTLResource> _rootResource;
    unsigned long long _sampleCount;
    unsigned long long _storageMode;
    unsigned long long _textureType;
    unsigned long long _usage;
    unsigned long long _width;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long allocatedSize; // @synthesize allocatedSize=_allocatedSize;
@property(readonly) _Bool allowGPUOptimizedContents; // @synthesize allowGPUOptimizedContents=_allowGPUOptimizedContents;
@property(readonly) unsigned long long arrayLength; // @synthesize arrayLength=_arrayLength;
@property(readonly) id <MTLBuffer> buffer; // @synthesize buffer=_buffer;
@property(readonly) unsigned long long bufferBytesPerRow; // @synthesize bufferBytesPerRow=_bufferBytesPerRow;
@property(readonly) unsigned long long bufferOffset; // @synthesize bufferOffset=_bufferOffset;
@property(readonly) unsigned long long cpuCacheMode; // @synthesize cpuCacheMode=_cpuCacheMode;
@property(readonly) unsigned long long depth; // @synthesize depth=_depth;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(CDStruct_caaed6bc)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(CDStruct_caaed6bc)arg3 mipmapLevel:(unsigned long long)arg4;
@property(readonly) id <MTLHeap> heap; // @synthesize heap=_heap;
@property(readonly) unsigned long long height; // @synthesize height=_height;
@property(readonly) struct __IOSurface *iosurface; // @synthesize iosurface=_iosurface;
@property(readonly) unsigned long long iosurfacePlane; // @synthesize iosurfacePlane=_iosurfacePlane;
- (_Bool)isAliasable;
@property(readonly, getter=isFramebufferOnly) _Bool framebufferOnly; // @synthesize framebufferOnly=_framebufferOnly;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
@property(copy) NSString *label; // @synthesize label=_label;
- (void)makeAliasable;
@property(readonly) unsigned long long mipmapLevelCount; // @synthesize mipmapLevelCount=_mipmapLevelCount;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4;
@property(readonly) unsigned long long parentRelativeLevel; // @synthesize parentRelativeLevel=_parentRelativeLevel;
@property(readonly) unsigned long long parentRelativeSlice; // @synthesize parentRelativeSlice=_parentRelativeSlice;
@property(readonly) id <MTLTexture> parentTexture; // @synthesize parentTexture=_parentTexture;
@property(readonly) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
- (void)replaceRegion:(CDStruct_caaed6bc)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void *)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (void)replaceRegion:(CDStruct_caaed6bc)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void *)arg3 bytesPerRow:(unsigned long long)arg4;
@property(readonly) id <MTLResource> rootResource; // @synthesize rootResource=_rootResource;
@property(readonly) unsigned long long sampleCount; // @synthesize sampleCount=_sampleCount;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
@property(readonly) unsigned long long storageMode; // @synthesize storageMode=_storageMode;
@property(readonly) unsigned long long textureType; // @synthesize textureType=_textureType;
@property(readonly) unsigned long long usage; // @synthesize usage=_usage;
@property(readonly) unsigned long long width; // @synthesize width=_width;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

