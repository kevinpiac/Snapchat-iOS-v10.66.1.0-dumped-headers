//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CALayer, NSHashTable, NSString, UIColor, UIPanGestureRecognizer, UIView, UIViewController;
@protocol SCPullToDismissVolumeController, SCViewControllerDismissalAnimatorDelegate, SCViewControllerPresentationAnimator;

@interface SCViewControllerDismissalAnimator : NSObject <UIGestureRecognizerDelegate>
{
    UIViewController *_childVC;
    UIViewController *_parentVC;
    id <SCViewControllerPresentationAnimator> _presentationAnimator;
    UIView *_touchBlockingView;
    unsigned long long _direction;
    _Bool _dismissalDidBegin;
    _Bool _animationDidBegin;
    _Bool _shouldDismissAfterCancelFinishes;
    long long _transitionMode;
    double _circleBeginXScale;
    double _circleBeginYScale;
    struct CGPoint _previousPosition;
    UIView *_maskLayerView;
    _Bool _enableFadeTransition;
    NSHashTable *_movingViews;
    NSHashTable *_fadingViews;
    struct CGPoint _movingViewOriginalCenter;
    double _movingViewNewScale;
    UIColor *_dismissalOverlayColor;
    CALayer *_dismissalOverlayLayer;
    UIPanGestureRecognizer *_dismissPanRecognizer;
    CDUnknownBlockType _baseViewDismissalAnimation;
    id <SCViewControllerDismissalAnimatorDelegate> _delegate;
    UIView *_baseView;
    UIView *_darkBackgroundView;
    long long _destinationeFrameOrientation;
    id <SCPullToDismissVolumeController> _volumeController;
    double _topInset;
    struct CGRect _destinationFrame;
}

- (void).cxx_destruct;
- (_Bool)_canCancelTransitionWithoutAnimation;
- (void)_cancelTransition;
- (void)_circleLayoutViewsForTranslation:(struct CGPoint)arg1 currentPosition:(struct CGPoint)arg2;
- (id)_circleMaskLayer;
- (void)_clearMaskLayerView;
- (id)_containerMaskView;
- (void)_didPan:(id)arg1;
- (void)_fadeLayoutViewsForTranslation:(struct CGPoint)arg1 currentPosition:(struct CGPoint)arg2;
- (_Bool)_finishPan:(id)arg1;
- (_Bool)_isCircleTransition;
- (void)_layoutViewsForTranslation:(struct CGPoint)arg1 currentPosition:(struct CGPoint)arg2;
- (double)_percentageForValue:(double)arg1 fromValue:(double)arg2 toValue:(double)arg3;
- (void)_performDismissalAnimation;
- (double)_ratio:(double)arg1;
- (void)_rectLayoutViewsForTranslation:(struct CGPoint)arg1 currentPosition:(struct CGPoint)arg2;
- (void)_setDarkBackgroundViewAlpha:(double)arg1 animated:(_Bool)arg2;
- (void)_setupColorOverlay;
- (void)_setupMaskLayerView;
- (_Bool)_shouldDismissWithVelocity:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (double)_swipeProgressForTranslation:(struct CGPoint)arg1;
- (void)animationEnded:(_Bool)arg1;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(copy, nonatomic) CDUnknownBlockType baseViewDismissalAnimation; // @synthesize baseViewDismissalAnimation=_baseViewDismissalAnimation;
@property(retain, nonatomic) UIView *darkBackgroundView; // @synthesize darkBackgroundView=_darkBackgroundView;
- (void)dealloc;
@property(nonatomic) __weak id <SCViewControllerDismissalAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect destinationFrame; // @synthesize destinationFrame=_destinationFrame;
@property(nonatomic) long long destinationeFrameOrientation; // @synthesize destinationeFrameOrientation=_destinationeFrameOrientation;
- (void)disableFadeTransition;
- (void)dismiss:(_Bool)arg1;
- (void)dismissCompleted:(_Bool)arg1;
@property(retain, nonatomic) UIPanGestureRecognizer *dismissPanRecognizer; // @synthesize dismissPanRecognizer=_dismissPanRecognizer;
- (void)enableFadeTransition:(id)arg1 fadingViews:(id)arg2;
- (id)gestureDescription;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanChangeWithGesture:(id)arg1;
- (id)initWithParentViewController:(id)arg1 childViewController:(id)arg2 presentationAnimator:(id)arg3 transitionMode:(long long)arg4;
- (void)resetGestureIfNecessary;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(nonatomic) __weak id <SCPullToDismissVolumeController> volumeController; // @synthesize volumeController=_volumeController;
- (void)setupDismissPanRecognizer;
- (void)startTransition;
- (void)updateBaseView:(id)arg1 topInset:(double)arg2 transitionMode:(long long)arg3;
- (void)updateDismissalOverlayColor:(id)arg1;
- (void)updateTransitionMode:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

