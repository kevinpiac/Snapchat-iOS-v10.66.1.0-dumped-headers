//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPreviewTransitionDefaultAnimatorDelegate-Protocol.h"
#import "SCPreviewTransitioningDelegate-Protocol.h"

@class MainViewController, NSString, SCCameraViewController, SCFeature, SCPreviewTransitionDefaultAnimator, UIView;
@protocol SCCameraTimer, SCFeatureCameraLiveDisplay, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@interface SCPreviewTransitionController : NSObject <SCPreviewTransitionDefaultAnimatorDelegate, SCPreviewTransitioningDelegate>
{
    SCPreviewTransitionDefaultAnimator *_defaultAnimator;
    MainViewController *_mainViewController;
    _Bool isAsync;
    _Bool isZeroAnimationDuration;
    _Bool useLightPreviewTransitionBehavior;
    _Bool useLightPreviewReplyCameraBehavior;
    SCCameraViewController *cameraViewController;
    SCFeature<SCFeatureCameraLiveDisplay> *liveDisplayFeature;
    unsigned long long capturedMediaType;
    id <UIViewControllerAnimatedTransitioning> customAnimatedTransitioningAnimator;
    id <UIViewControllerInteractiveTransitioning> customInteractiveTransitioningAnimator;
    UIView<SCCameraTimer> *_cameraTimer;
}

- (void).cxx_destruct;
- (_Bool)_animatorShouldUseLightTransitionReplyCameraBehavior:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animator:(id)arg1 setHovaTabBarAndNavigationBarHidden:(_Bool)arg2;
- (_Bool)animator:(id)arg1 shouldAnimate:(id)arg2;
- (void)animator:(id)arg1 willFinishTransition:(id)arg2;
- (void)animator:(id)arg1 willStartTransition:(id)arg2;
- (_Bool)animatorShouldUseLightTransition:(id)arg1;
@property(readonly, nonatomic) UIView<SCCameraTimer> *cameraTimer; // @synthesize cameraTimer=_cameraTimer;
@property(nonatomic) __weak SCCameraViewController *cameraViewController; // @synthesize cameraViewController;
@property(nonatomic) unsigned long long capturedMediaType; // @synthesize capturedMediaType;
@property(nonatomic) __weak id <UIViewControllerAnimatedTransitioning> customAnimatedTransitioningAnimator; // @synthesize customAnimatedTransitioningAnimator;
@property(nonatomic) __weak id <UIViewControllerInteractiveTransitioning> customInteractiveTransitioningAnimator; // @synthesize customInteractiveTransitioningAnimator;
- (id)init;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
@property(nonatomic) _Bool isAsync; // @synthesize isAsync;
@property(nonatomic) _Bool isZeroAnimationDuration; // @synthesize isZeroAnimationDuration;
@property(nonatomic) __weak SCFeature<SCFeatureCameraLiveDisplay> *liveDisplayFeature; // @synthesize liveDisplayFeature;
- (id)mainViewControllerForTransitionContext:(id)arg1;
- (id)previewViewControllerForTransitionContext:(id)arg1;
- (void)resetCameraPreview;
@property(nonatomic) _Bool useLightPreviewReplyCameraBehavior; // @synthesize useLightPreviewReplyCameraBehavior;
@property(nonatomic) _Bool useLightPreviewTransitionBehavior; // @synthesize useLightPreviewTransitionBehavior;
- (void)startCamera;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

