//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCImageProcessLensCommandProcessToTextureBlock.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString;

@interface SCImageProcessLensCommandProcessVideoToTextureBlock : SCImageProcessLensCommandProcessToTextureBlock <SCTraceEnabled>
{
}

- (long long)drawingOrientationWithInputOrientation:(long long)arg1 exportMode:(_Bool)arg2;
- (id)processingInfoWithPresentationTimestamp:(CDStruct_1b6d18a9)arg1 fieldOfView:(float)arg2 outputPixelWidth:(unsigned long long)arg3 outputPixelHeight:(unsigned long long)arg4 captureSource:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

