//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, SCAnimationPhaseCoordinator, SCPassthroughViewsCoordinator;
@protocol UIViewControllerContextTransitioning;

@interface SCSwipeTransitionController : NSObject <UIViewControllerAnimatedTransitioning>
{
    unsigned long long _presentationDirection;
    unsigned long long _dismissalDirection;
    double _animationDuration;
    SCAnimationPhaseCoordinator *_animationCoordinator;
    id <UIViewControllerContextTransitioning> _transitionContext;
    SCPassthroughViewsCoordinator *_passthroughViewsCoordinator;
    _Bool _presenting;
}

+ (struct CGPoint)_originPointForDirection:(unsigned long long)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3;
- (void).cxx_destruct;
- (id)_frameChangeAnimationPhaseWithDestinationFrame:(struct CGRect)arg1 view:(id)arg2;
- (_Bool)_isInteractive;
- (void)animateTransition:(id)arg1;
- (void)animateTransition:(_Bool)arg1 presentedViewController:(id)arg2 presentingViewController:(id)arg3;
- (id)dismissalAnimationPhaseFromViewController:(id)arg1 toViewController:(id)arg2;
- (id)initWithDirection:(unsigned long long)arg1 animationDuration:(double)arg2 passthroughViews:(id)arg3;
- (id)presentationAnimationPhaseFromViewController:(id)arg1 toViewController:(id)arg2;
@property(nonatomic) _Bool presenting; // @synthesize presenting=_presenting;
- (void)resetWithDuration:(double)arg1 direction:(unsigned long long)arg2;
- (double)transitionDuration:(id)arg1;
- (_Bool)wasCancelled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

