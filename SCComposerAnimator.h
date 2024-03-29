//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNComposerAnimator-Protocol.h"

@class NSArray, NSMutableArray;
@protocol OS_dispatch_group;

@interface SCComposerAnimator : NSObject <SCNComposerAnimator>
{
    long long _curve;
    NSArray *_controlPoints;
    double _duration;
    _Bool _beginFromCurrentState;
    NSMutableArray *_pendingLayerAnimations;
    NSObject<OS_dispatch_group> *_group;
    NSMutableArray *_completions;
}

- (void).cxx_destruct;
- (void)_populateCAAnimation:(id)arg1;
- (void)addAnimationOnLayer:(id)arg1 forKeyPath:(id)arg2 value:(id)arg3;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)addTransitionOnLayer:(id)arg1;
- (void)flushAnimations:(id)arg1;
- (id)initWithCurve:(long long)arg1 controlPoints:(id)arg2 duration:(double)arg3 beginFromCurrentState:(_Bool)arg4;

@end

