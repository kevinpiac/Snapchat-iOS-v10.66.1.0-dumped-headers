//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSwipePresentationController.h"

@class SCCameraViewController;

@interface SCCaptureWorkflowPresentationController : SCSwipePresentationController
{
    SCCameraViewController *_cameraViewController;
}

- (void).cxx_destruct;
- (void)_startCameraTimerAlongsideAnimation;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (id)initWithCameraViewController:(id)arg1 presentedViewController:(id)arg2 presentingViewController:(id)arg3;

@end

