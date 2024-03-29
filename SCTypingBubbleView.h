//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIImageView;

@interface SCTypingBubbleView : UIView
{
    UIImageView *_imageView;
    CAShapeLayer *_leftDot;
    CAShapeLayer *_middleDot;
    CAShapeLayer *_rightDot;
    unsigned long long _typingAnimationState;
}

- (void).cxx_destruct;
- (void)_animateTypingDots;
- (_Bool)_shouldOptimizePulsingAnimation;
- (void)_startPulsingAnimation;
- (void)animateWithTypingAnimationState:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)pauseAnimation;
- (void)pausedPulsingAnimation;
- (void)prepareForReuse;
- (void)receiveAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)removeAllAnimationsAndHideView;
- (void)resumeAnimation;
- (void)startAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)typingPulsingAnimation;

@end

