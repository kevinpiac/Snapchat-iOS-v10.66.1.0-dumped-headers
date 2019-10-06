//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@protocol MTLDevice;

@interface SCMockMetalLayer : CALayer
{
    _Bool _framebufferOnly;
    id <MTLDevice> _device;
    unsigned long long _pixelFormat;
    struct CGSize _drawableSize;
}

- (void).cxx_destruct;
@property(retain) id <MTLDevice> device; // @synthesize device=_device;
@property struct CGSize drawableSize; // @synthesize drawableSize=_drawableSize;
@property _Bool framebufferOnly; // @synthesize framebufferOnly=_framebufferOnly;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)nextDrawable;
@property unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
- (void)sc_secretFeature;

@end

