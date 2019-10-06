//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CALayer, UIView;
@protocol SCViewControllerPresentationAnimatorBaseViewDelegate, SCViewControllerPresentationAnimatorDelegate;

@protocol SCViewControllerPresentationAnimator <NSObject>
- (void)animateTransition:(_Bool)arg1;
@property(readonly, nonatomic) UIView *baseView;
@property(nonatomic) __weak id <SCViewControllerPresentationAnimatorBaseViewDelegate> baseViewDelegate;
@property(copy, nonatomic) CDUnknownBlockType baseViewPresentationLayoutAnimation;
@property(copy, nonatomic) CDUnknownBlockType baseViewPresentationMainAnimation;
@property(copy, nonatomic) CDUnknownBlockType baseViewSetupForDismissal;
@property(readonly, nonatomic) UIView *darkBackgroundView;
@property(nonatomic) __weak id <SCViewControllerPresentationAnimatorDelegate> delegate;
@property(readonly, nonatomic) CALayer *dismissalMask;
@property(nonatomic) struct CGRect startingFrame;
- (void)setupAnimationForBaseView:(UIView *)arg1;
- (void)updateBaseView:(UIView *)arg1;
@end

