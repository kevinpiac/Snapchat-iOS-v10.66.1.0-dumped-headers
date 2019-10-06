//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIPercentDrivenInteractiveTransition;
@protocol SIGActionSheetTransitionDelegate;

@interface SIGActionSheetTransition : NSObject <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>
{
    UIPercentDrivenInteractiveTransition *_dismissalTransition;
    _Bool _interacting;
    double _initialOffset;
    id <SIGActionSheetTransitionDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_pullToDismissGestureUpdated:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(nonatomic) __weak id <SIGActionSheetTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)init;
- (void)installPullToDismissGestureRecognizerOnView:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
