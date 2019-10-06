//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImageProcessLensCommandEffectLoading-Protocol.h"

@class NSString, SCLensCommandEffectDescriptor;
@protocol SCLensLoggerConsumptionTrackingProviding;

@interface SCImageProcessLensCommandEffectLoader : NSObject <SCImageProcessLensCommandEffectLoading>
{
    SCLensCommandEffectDescriptor *_lensCommandDescriptor;
    id <SCLensLoggerConsumptionTrackingProviding> _lensLogger;
}

- (void).cxx_destruct;
- (id)initWithLensCommandDescriptor:(id)arg1 lensLogger:(id)arg2;
- (void)loadEffectSynchronouslyWithEffectComponent:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
