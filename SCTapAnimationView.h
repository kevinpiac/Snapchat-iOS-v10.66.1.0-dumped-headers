//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface SCTapAnimationView : UIView
{
    CALayer *_outerRing;
    CALayer *_innerCircle;
}

+ (id)tapAnimationView;
- (void).cxx_destruct;
- (void)addInnerCircleOpacityAnimation;
- (void)addInnerCircleScaleAnimation;
- (void)addOuterRingOpacityAnimation;
- (void)addOuterRingScaleAnimation;
- (id)animationWithKeyPath:(id)arg1 duration:(double)arg2 fromValue:(id)arg3 toValue:(id)arg4 timingFunction:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)keyFrameAnimationWithKeyPath:(id)arg1 duration:(double)arg2 values:(id)arg3 keyTimes:(id)arg4 timingFunctions:(id)arg5;
- (void)showWithCompletion:(CDUnknownBlockType)arg1;

@end
