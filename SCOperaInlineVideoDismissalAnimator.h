//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerInteractiveTransitioning-Protocol.h"

@class NSString, UIView, UIViewController;
@protocol SCOperaDismissInlineVideoAnimatorDelegate, UIViewControllerContextTransitioning;

@interface SCOperaInlineVideoDismissalAnimator : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>
{
    UIView *_blackView;
    UIView *_backgroundView;
    struct CGRect _startingFrame;
    struct CGRect _endingFrame;
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIViewController *_dismissingController;
    id <SCOperaDismissInlineVideoAnimatorDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)cancelTransition;
@property(nonatomic) __weak id <SCOperaDismissInlineVideoAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didPan:(id)arg1;
- (void)finishDismiss;
- (void)finishPan:(id)arg1;
- (id)initWithBlackView:(id)arg1 startingFrame:(struct CGRect)arg2 endingFrame:(struct CGRect)arg3;
- (double)ratio:(double)arg1;
- (_Bool)shouldDismissWithVelocity:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (void)startAnimatingWithContext:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

