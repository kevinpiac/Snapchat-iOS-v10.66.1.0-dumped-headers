//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacLeaderboardViewControllerDelegate-Protocol.h"
#import "SCSwipeTransitionCoordinatorDataSource-Protocol.h"
#import "SCSwipeTransitionCoordinatorDelegate-Protocol.h"

@class NSString, SCCognacLeaderboardViewController, SCSwipeTransitionCoordinator, UIViewController;
@protocol SCCognacLeaderboardPresenterDelegate;

@interface SCCognacLeaderboardPresenter : NSObject <SCCognacLeaderboardViewControllerDelegate, SCSwipeTransitionCoordinatorDataSource, SCSwipeTransitionCoordinatorDelegate>
{
    SCSwipeTransitionCoordinator *_transitionCoordinator;
    long long _previousStatusBarStyle;
    _Bool _previousStatusBarHidden;
    id <SCCognacLeaderboardPresenterDelegate> _delegate;
    UIViewController *_presentingViewController;
    SCCognacLeaderboardViewController *_leaderboardViewController;
}

- (void).cxx_destruct;
- (void)_recordPreviousStatusBar;
- (void)_restorePreviousStatusBar;
@property(nonatomic) __weak id <SCCognacLeaderboardPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithPresentingViewController:(id)arg1 leaderboardViewController:(id)arg2;
- (_Bool)isPresenting;
- (_Bool)isTransitioning;
@property(readonly, nonatomic) SCCognacLeaderboardViewController *leaderboardViewController; // @synthesize leaderboardViewController=_leaderboardViewController;
- (void)leaderboardViewControllerDidFinish:(id)arg1;
- (void)leaderboardViewControllerIsDismissed:(id)arg1;
- (void)leaderboardViewControllerIsPresented:(id)arg1;
- (void)presentWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)presentedViewControllerWithSwipeTransitionCoordinator:(id)arg1;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (id)presentingViewControllerWithSwipeTransitionCoordinator:(id)arg1;
- (id)transitionCoordinator:(id)arg1 presentationControllerForPresentedViewController:(id)arg2 presentingViewController:(id)arg3;
- (_Bool)transitionCoordinator:(id)arg1 shouldBeginTransitionType:(unsigned long long)arg2 gestureRecognizer:(id)arg3 interactive:(_Bool)arg4 viewController:(id)arg5;
- (_Bool)transitionCoordinator:(id)arg1 transitionType:(unsigned long long)arg2 shouldAllowGesture:(id)arg3 toRecognizeSimultaneouslyWith:(id)arg4;
- (void)transitionCoordinator:(id)arg1 willBeginWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

