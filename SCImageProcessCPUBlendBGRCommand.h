//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCImageProcessCPUCommand.h"

@interface SCImageProcessCPUBlendBGRCommand : SCImageProcessCPUCommand
{
    struct CGImage *_image;
    struct CGSize _outputSize;
    char *_blendData;
    unsigned long long _blendBytesPerRow;
}

+ (id)commandWithImage:(struct CGImage *)arg1 outputSize:(struct CGSize)arg2;
- (void)_generatePixelDataFromImageWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)commandName;
- (void)dealloc;
- (id)initWithImage:(struct CGImage *)arg1 outputSize:(struct CGSize)arg2;
- (id)runWithContext:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 outputPixelBuffer:(struct __CVBuffer *)arg3 orientation:(long long)arg4 error:(id *)arg5;

@end

