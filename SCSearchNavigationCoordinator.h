//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, SCSearchNavigationTransitionContext, UIViewController;
@protocol SCSearchNavigationCoordinatorDelegate, UIViewControllerInteractiveTransitioning;

@interface SCSearchNavigationCoordinator : NSObject
{
    NSMutableArray *_mutableNavigationInfoStack;
    _Bool _isInteractiveDismissing;
    id <SCSearchNavigationCoordinatorDelegate> _delegate;
    long long _viewControllerStatus;
    id <UIViewControllerInteractiveTransitioning> _interactiveDismissalController;
    SCSearchNavigationTransitionContext *_ongoingTransitionContext;
    SCSearchNavigationCoordinator *_parentNavigationCoordinator;
}

- (void).cxx_destruct;
- (void)_addNavigationInfoToStack:(id)arg1;
- (void)_cleanUpTransitionWithFromNavigationInfo:(id)arg1 toNavigationInfo:(id)arg2;
- (void)_removeNavigationInfoFromStack;
- (void)_transitionFromNavigationInfo:(id)arg1 toNavigationInfo:(id)arg2 isPresenting:(_Bool)arg3 animated:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (long long)containerViewControllerStatusForTransitionContext:(id)arg1;
@property(nonatomic) __weak id <SCSearchNavigationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissContainerViewControllerAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dismissViewControllerFromParentStackIfPossibleWithAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;
@property(readonly, nonatomic) id <UIViewControllerInteractiveTransitioning> interactiveDismissalController; // @synthesize interactiveDismissalController=_interactiveDismissalController;
@property(nonatomic) _Bool isInteractiveDismissing; // @synthesize isInteractiveDismissing=_isInteractiveDismissing;
@property(copy, nonatomic) NSArray *navigationInfos;
@property(readonly, nonatomic) SCSearchNavigationTransitionContext *ongoingTransitionContext; // @synthesize ongoingTransitionContext=_ongoingTransitionContext;
@property(nonatomic) __weak SCSearchNavigationCoordinator *parentNavigationCoordinator; // @synthesize parentNavigationCoordinator=_parentNavigationCoordinator;
- (void)presentWithNavigationInfo:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) long long viewControllerStatus; // @synthesize viewControllerStatus=_viewControllerStatus;
@property(readonly, nonatomic) UIViewController *topViewController;

@end

