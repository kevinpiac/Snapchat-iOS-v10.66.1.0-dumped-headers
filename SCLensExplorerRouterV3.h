//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerRouting-Protocol.h"
#import "SCLensExplorerSearchViewControllerDelegate-Protocol.h"
#import "SCLensExplorerTransitionControllerDelegate-Protocol.h"
#import "SCLensLiveLensPreviewCameraPresenterDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, SCLazy, SCLensExplorerAnalytics, SCLensExplorerCreatorRouter, SCLensExplorerEventsControllerManager, SCLensExplorerFactory, SCLensExplorerInteractiveTransitionV2, SCLensExplorerModalTransitionController, SCLensExplorerTransitionController, SCLensExplorerViewControllerV3, SCMusicLensChallengesViewController, UINavigationController, UIVisualEffectView;
@protocol SCLensChallengesScheduleProtocol, SCLensExplorerDependencyProviderProtocol, SCLensExplorerPrompter, SCLensExplorerRouterDelegate, SCLensLiveLensPreviewCameraPresenterProtocol;

@interface SCLensExplorerRouterV3 : NSObject <UINavigationControllerDelegate, SCLensExplorerTransitionControllerDelegate, SCLensLiveLensPreviewCameraPresenterDelegate, SCLensExplorerSearchViewControllerDelegate, SCLensExplorerRouting>
{
    SCLensExplorerViewControllerV3 *_lensExplorerViewController;
    id <SCLensExplorerDependencyProviderProtocol> _lensExplorerDependencyProvider;
    SCLensExplorerFactory *_lensExplorerFactory;
    id <SCLensExplorerPrompter> _lensExplorerPrompter;
    SCLazy *_searchViewController;
    id <SCLensChallengesScheduleProtocol> _lensChallengesSchedule;
    id <SCLensLiveLensPreviewCameraPresenterProtocol> _cameraPresenter;
    SCMusicLensChallengesViewController *_musicLensChallengesViewController;
    SCLensExplorerEventsControllerManager *_eventsControllerManager;
    SCLensExplorerCreatorRouter *_creatorRouter;
    SCLensExplorerAnalytics *_lensExplorerLoggingSession;
    SCLensExplorerTransitionController *_rootVCTransition;
    SCLensExplorerModalTransitionController *_childVCTransition;
    SCLensExplorerInteractiveTransitionV2 *_interactiveTransition;
    UIVisualEffectView *_navigationControllersBlurView;
    UINavigationController *_navigationController;
    id <SCLensExplorerRouterDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_currentlyPresentingLensExplorerViewController;
- (id)childVCTransition;
@property(nonatomic) __weak id <SCLensExplorerRouterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissIfNeededAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissLensChallengesChildViewControllers;
- (void)dismissMusicLensChallengesViewController;
- (void)finishDismissWorkflow;
- (void)handleApplicationDidEnterBackground;
- (id)initWithLensExplorerFactory:(id)arg1 searchViewController:(id)arg2 lensExplorerDependencyProvider:(id)arg3 lensChallengesSchedule:(id)arg4;
- (id)interactiveTransition;
@property(readonly, nonatomic) _Bool isPresenting;
@property(readonly, nonatomic) _Bool isPresentingLensChallenges;
- (void)lensCameraPresenter:(id)arg1 didUseLens:(id)arg2;
- (void)lensCameraPresenterDidComplete:(id)arg1;
- (void)lensExplorerSearchControllerDidPressBackButton:(id)arg1;
- (void)lensExplorerTransitionController:(id)arg1 didBeginTransitionPresenting:(_Bool)arg2;
- (id)navigationController;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationControllersBlurView;
- (void)presentChallengesViewControllerWithChallengeId:(id)arg1 fromViewController:(id)arg2 configuration:(id)arg3;
- (void)presentCreatorViewControllerWithCreator:(id)arg1 sourcePageType:(long long)arg2;
- (void)presentDebugViewControllerForStoryId:(id)arg1 debugHtml:(id)arg2 lastStreamToken:(id)arg3;
- (void)presentLensChallengeCameraWithLens:(id)arg1;
- (void)presentLensChallengesDisclaimerAlert;
- (void)presentLensExplorerViewControllerFromViewController:(id)arg1 touchableViews:(id)arg2 configuration:(id)arg3;
- (void)presentLiveLensPreviewCameraWithLensItem:(id)arg1 lens:(id)arg2;
- (void)presentMusicLensChallengesViewControllerWithItem:(id)arg1;
- (void)refreshSubscriptionSection;
- (void)removeViewController;
- (id)rootVCTransition;
- (void)swipeTransitionController:(id)arg1 didCancelTransitionPresenting:(_Bool)arg2;
- (void)swipeTransitionController:(id)arg1 didCompleteTransitionPresenting:(_Bool)arg2;
- (void)transitWithVerticalOffset:(double)arg1 velocity:(double)arg2 panGestureState:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

