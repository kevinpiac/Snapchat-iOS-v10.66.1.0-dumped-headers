//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCImageProcessCommand.h"

@interface SCImageProcessLookupYUVCommand : SCImageProcessCommand
{
    int _imageTexture2;
    unsigned int _lookupTexture;
    int _luminanceTexture;
    int _chrominanceTexture;
    int _yuvConversionMatrix;
    struct CGImage *_lookupTable;
}

- (id)commandName;
- (void)dealloc;
- (id)initWithLookupTable:(struct CGImage *)arg1 compressed:(_Bool)arg2;
- (_Bool)loadWithContext:(id)arg1 error:(id *)arg2;
@property(nonatomic) struct CGImage *lookupTable; // @synthesize lookupTable=_lookupTable;
- (id)runWithContext:(id)arg1 pixelSize:(CDStruct_5e758c1a)arg2 bytesPerRow:(unsigned long long)arg3 outputPixelSize:(CDStruct_5e758c1a)arg4 renderRange:(CDStruct_b2fbf00d)arg5 orientation:(long long)arg6 viewportTransform:(struct CGAffineTransform)arg7 negativeSpaceColor:(id)arg8 error:(id *)arg9;
- (_Bool)unloadWithError:(id *)arg1;

@end

