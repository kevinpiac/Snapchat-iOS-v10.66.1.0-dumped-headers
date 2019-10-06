//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCImageProcessLensCommandLoadEffectBlock.h"

@class SCImageProcessLensCommandMetadata;
@protocol SCPerforming;

@interface SCImageProcessLensCommandLoadSpectaclesEffectBlock : SCImageProcessLensCommandLoadEffectBlock
{
    SCImageProcessLensCommandMetadata *_metadata;
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (_Bool)executeWithTrackingComponent:(id)arg1 effectComponent:(id)arg2 motionComponent:(id)arg3 depthComponent:(id)arg4 sixDofComponent:(id)arg5 command:(id)arg6 error:(id *)arg7;
- (id)initWithLensEffectDescriptorContainer:(id)arg1 metadata:(id)arg2 lensLogger:(id)arg3 performer:(id)arg4;
@property(readonly, nonatomic) SCImageProcessLensCommandMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;

@end

