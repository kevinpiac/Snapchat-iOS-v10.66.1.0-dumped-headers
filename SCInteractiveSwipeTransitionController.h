//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIView, UIViewController;
@protocol SCInteractiveSwipeTransitionControllerDataSource, SCInteractiveSwipeTransitionControllerDelegate;

@interface SCInteractiveSwipeTransitionController : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate>
{
    unsigned long long _transitionType;
    UIPanGestureRecognizer *_panGesture;
    unsigned long long _validDirections;
    unsigned long long _currentDirection;
    _Bool _shouldCompleteTransition;
    UIView *_presentingView;
    UIViewController *_presentedViewController;
    _Bool _interactionInProgress;
    id <SCInteractiveSwipeTransitionControllerDelegate> _delegate;
    id <SCInteractiveSwipeTransitionControllerDataSource> _presentationDataSource;
    double _directionalSlopFactor;
}

+ (_Bool)_isDirectionAllowedWithVectorPoint:(struct CGPoint)arg1 directions:(unsigned long long)arg2 mainDirectionOut:(inout unsigned long long *)arg3;
+ (_Bool)_isValidPlaneWithVelocity:(struct CGPoint)arg1 direction:(unsigned long long)arg2 slopFactor:(double)arg3;
+ (double)_translationMagnitudeWithTranslation:(struct CGPoint)arg1 direction:(unsigned long long)arg2;
+ (_Bool)_velocity:(struct CGPoint)arg1 exceedsSpeedThresholdForDirection:(unsigned long long)arg2;
- (void).cxx_destruct;
- (double)_maxTranslationWithDirection:(unsigned long long)arg1;
- (long long)completionCurve;
- (double)completionSpeed;
@property(nonatomic) __weak id <SCInteractiveSwipeTransitionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double directionalSlopFactor; // @synthesize directionalSlopFactor=_directionalSlopFactor;
- (void)finishInteractiveTransition;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleGesture:(id)arg1;
- (id)initWithTransitionType:(unsigned long long)arg1 direction:(unsigned long long)arg2;
@property(nonatomic) _Bool interactionInProgress; // @synthesize interactionInProgress=_interactionInProgress;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) __weak id <SCInteractiveSwipeTransitionControllerDataSource> presentationDataSource; // @synthesize presentationDataSource=_presentationDataSource;
@property(readonly, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(readonly, nonatomic) unsigned long long transitionType; // @synthesize transitionType=_transitionType;
- (void)wireToView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

