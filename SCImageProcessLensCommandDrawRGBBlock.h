//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImageProcessLensCommandDrawBlock-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString;

@interface SCImageProcessLensCommandDrawRGBBlock : NSObject <SCTraceEnabled, SCImageProcessLensCommandDrawBlock>
{
    _Bool _isInitialized;
    unsigned int _imageTextureOriginal;
    unsigned int _imageTextureProcessed;
}

- (void)_setupTexturesWithProgram:(id)arg1;
- (_Bool)executeWithContext:(id)arg1 processedTexture:(id)arg2 program:(id)arg3 command:(id)arg4 error:(id *)arg5;
- (id)fragmentShaderString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
