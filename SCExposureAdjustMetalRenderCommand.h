//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMetalModule.h"

#import "SCMetalRenderCommand-Protocol.h"

@class NSString;

@interface SCExposureAdjustMetalRenderCommand : SCMetalModule <SCMetalRenderCommand>
{
}

@property(readonly, copy) NSString *description;
- (id)encodeMetalCommand:(id)arg1 pipelineState:(id)arg2 textureResource:(id)arg3;
@property(readonly, nonatomic) NSString *functionName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

