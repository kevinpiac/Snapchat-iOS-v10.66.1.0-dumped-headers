//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImageProcessLensCommandLoadBlock-Protocol.h"

@protocol SCImageProcessLensCommandEffectLoading;

@interface SCImageProcessLensCommandLoadEffectBlockBase : NSObject <SCImageProcessLensCommandLoadBlock>
{
    id <SCImageProcessLensCommandEffectLoading> _effectLoader;
}

- (void).cxx_destruct;
- (_Bool)executeWithTrackingComponent:(id)arg1 effectComponent:(id)arg2 motionComponent:(id)arg3 depthComponent:(id)arg4 sixDofComponent:(id)arg5 command:(id)arg6 error:(id *)arg7;
- (id)initWithEffectLoader:(id)arg1;

@end

