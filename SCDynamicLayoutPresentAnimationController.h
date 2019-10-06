//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

#import "SCUpdateListener-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, SCExperimentManager, UIPanGestureRecognizer;
@protocol SCDiscoverFeedDataFetching, SCDynamicLayoutPresentAnimationControllerDelegate;

@interface SCDynamicLayoutPresentAnimationController : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate, SCUpdateListener, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    unsigned long long _direction;
    _Bool _isInteractive;
    id <SCDiscoverFeedDataFetching> _discoverFeedDataFetcher;
    SCExperimentManager *_experimentManager;
    long long _sectionIndexForSwipe;
    UIPanGestureRecognizer *_panGestureRecognizer;
    id <SCDynamicLayoutPresentAnimationControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didPan:(id)arg1;
- (_Bool)_isGestureAboveForYouSection:(id)arg1;
- (double)_translationDistanceForTranslation:(struct CGPoint)arg1;
- (void)_updateSectionIndexForSwipe:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dealloc;
@property(nonatomic) __weak id <SCDynamicLayoutPresentAnimationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithAnimationDirection:(unsigned long long)arg1 discoverFeedDataFetcher:(id)arg2 experimentManager:(id)arg3;
- (id)interactionControllerForPresentation:(id)arg1;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
