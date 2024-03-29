//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class UIBlurEffect, UIView, UIVisualEffectView;

@interface SCStoryManagementPresentationController : UIPresentationController
{
    UIView *_backgroundEffectTargetView;
    UIVisualEffectView *_blurEffectView;
    UIBlurEffect *_blurEffect;
}

- (void).cxx_destruct;
- (void)_clearBackgroundViewEffect;
- (void)_showBackgroundViewEffect;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 backgroundEffectTargetView:(id)arg3;
- (long long)presentationStyle;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;

@end

