//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContextMessagingControllerDelegate-Protocol.h"
#import "SCContextPresenting-Protocol.h"
#import "SCContextV2ActionsHandlerDelegate-Protocol.h"
#import "SCContextV2CameraPresentationDelegate-Protocol.h"
#import "SCContextV2SwipeUpGestureDelegate-Protocol.h"
#import "SCContextV2SwipeUpViewControllerDelegate-Protocol.h"
#import "SCGroupInviteSwipeUpViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, NSURL, SCContextV2ActionsHandler, SCContextV2CTAView, SCContextV2CardsView, SCContextV2GroupInviteInfo, SCContextV2PresentationTriggerInfo, SCContextV2Session, SCContextV2SwipeUpGestureTracker, SCContextV2SwipeUpViewController, SnapContextCTAData, SnapContextComposerContent, SnapContextInfo, SnapContextPlaceholderCards, SnapContextSnapIdentity, UISwipeGestureRecognizer, UIViewController;
@protocol SCContextMessagingController, SCContextPresenterDelegate, SCContextV2CameraPresenting, SCContextV2ChatLogging, SCContextV2ChatPresenting, SCPageNameLogging;

@interface SCContextV2Presenter : NSObject <SCContextV2SwipeUpGestureDelegate, UIGestureRecognizerDelegate, SCContextV2SwipeUpViewControllerDelegate, SCGroupInviteSwipeUpViewControllerDelegate, SCContextV2CameraPresentationDelegate, SCContextMessagingControllerDelegate, SCContextV2ActionsHandlerDelegate, SCContextPresenting>
{
    id <SCContextV2ChatPresenting> _chatPresenter;
    id <SCContextV2CameraPresenting> _cameraPresenter;
    id <SCContextV2ChatLogging> _chatLogger;
    SnapContextSnapIdentity *_snapIdentity;
    SnapContextInfo *_snapContextInfo;
    _Bool _canReplyViaChat;
    SnapContextCTAData *_demoCta;
    SnapContextComposerContent *_demoCards;
    NSURL *_swipeUpAttachmentURL;
    SCContextV2GroupInviteInfo *_groupInviteInfo;
    SCContextV2CTAView *_ctaView;
    SCContextV2SwipeUpGestureTracker *_gestureTracker;
    UISwipeGestureRecognizer *_plainSwipeUpRecognizer;
    id <SCContextMessagingController> _contextCardsMessagingController;
    id <SCContextMessagingController> _swipeUpMessagingController;
    SCContextV2SwipeUpViewController *_swipeUpVC;
    SCContextV2ActionsHandler *_actionsHandler;
    _Bool _hasDisplayedServerCTAYet;
    _Bool _startedContextCardFetch;
    _Bool _swipeUpContentPresented;
    _Bool _actionHandlerHasPresentedModalContent;
    _Bool _useNonInteractiveSwipeUp;
    SCContextV2PresentationTriggerInfo *_presentationTriggerInfo;
    _Bool _ctaBidirectionalStoryViewPriorityRulesEnabled;
    SCContextV2CardsView *_cardsAboveKeyboardView;
    SCContextV2ActionsHandler *_cardsAboveKeyboardActionHandler;
    CDUnknownBlockType _cardsAboveKeyboardExpansionStateListener;
    _Bool _cardsAboveKeyboardExpansionState;
    id <SCContextPresenterDelegate> _delegate;
    SCContextV2Session *_session;
    UIViewController<SCPageNameLogging> *_baseViewController;
    long long _swipeUpAction;
    SnapContextPlaceholderCards *_placeholderCards;
}

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applySwipeUpBehaviorTweaks;
- (_Bool)_canViewGroupInvites;
- (id)_contextCardsMessagingControllerWithParent:(id)arg1;
- (id)_createSwipeUpViewController;
- (void)_didDismissCardsWithTriggerInfo:(id)arg1;
- (void)_didPresentCardsWithTriggerInfo:(id)arg1;
- (void)_displayCTAData:(id)arg1 wasGeneratedLocally:(_Bool)arg2;
- (void)_doHapticFeedbackIfEnabled;
- (void)_launchAttachmentWithURL:(id)arg1 options:(long long)arg2 triggerInfo:(id)arg3;
- (void)_launchChatWithTriggerInfo:(id)arg1;
- (void)_launchReplyCameraWithTriggerInfo:(id)arg1;
- (void)_loadCTAWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadCards;
- (void)_loadCardsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_logChatFieldPresentedWithTapInsteadOfSwipe:(_Bool)arg1;
- (_Bool)_maybeHasRemoteContextCardsData;
- (void)_plainSwipeUpRecognized:(id)arg1;
- (void)_presentDefaultSwipeUpContentWithTriggerInfo:(id)arg1;
- (void)_presentGroupStickerDetailWithTriggerInfo:(id)arg1;
- (void)_registerAppLifecycleObservers;
- (id)_swipeUpMessagingController;
- (id)actionsHandler;
- (void)attachSwipeUpGestureToView:(id)arg1;
@property(readonly, nonatomic) __weak UIViewController<SCPageNameLogging> *baseViewController; // @synthesize baseViewController=_baseViewController;
- (id)baseViewControllerForSwipeUpPresentation:(id)arg1;
- (void)cameraPresenter:(id)arg1 didDismissCameraAfterTakingSnap:(_Bool)arg2;
- (_Bool)canLaunchChat;
- (id)cardsAboveKeyboardActionHandler;
@property(nonatomic) _Bool cardsAboveKeyboardExpansionState; // @synthesize cardsAboveKeyboardExpansionState=_cardsAboveKeyboardExpansionState;
- (id)cardsAboveKeyboardView;
- (_Bool)cardsPresented;
- (void)chatWillPresentFullscreen;
- (void)contextActionsHandler:(id)arg1 didLeaveAppSuccessfully:(_Bool)arg2;
- (void)contextActionsHandler:(id)arg1 wantsToDismissContextCardsWithCompletion:(CDUnknownBlockType)arg2;
- (void)contextActionsHandler:(id)arg1 wantsToRegisterExpansionStateListener:(CDUnknownBlockType)arg2;
- (id)contextActionsHandler:(id)arg1 wantsViewWithComposerId:(id)arg2;
- (_Bool)contextActionsHandlerCardsShouldBeCollapsed:(id)arg1;
- (void)contextActionsHandlerDidBeginPresentingMedia:(id)arg1;
- (void)contextActionsHandlerDidDismissModalContent:(id)arg1 triggerInfo:(id)arg2;
- (void)contextActionsHandlerDidFinishPresentingMedia:(id)arg1;
- (void)contextActionsHandlerDidPresentModalContent:(id)arg1 triggerInfo:(id)arg2;
- (void)contextActionsHandlerWantsToDismissCurrentModalOverlay:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)contextActionsHandlerWantsToExpandFromCollapsedState:(id)arg1;
- (void)contextActionsHandlerWantsToOpenChat:(id)arg1 triggerInfo:(id)arg2;
- (void)contextActionsHandlerWantsToOpenReplyCamera:(id)arg1 triggerInfo:(id)arg2;
- (void)contextActionsHandlerWantsToPresentContextCards:(id)arg1 triggerInfo:(id)arg2;
- (void)contextActionsHandlerWantsToPresentDefaultSwipeUpContent:(id)arg1 triggerInfo:(id)arg2;
- (void)contextActionsHandlerWillTryToLeaveApp:(id)arg1;
- (id)contextCTAView;
- (void)contextLayerWillFullyAppear;
- (void)contextV2SwipeUpViewController:(id)arg1 didLeaveAppSuccessfully:(_Bool)arg2;
- (void)contextV2SwipeUpViewControllerDidAppear:(id)arg1;
- (void)contextV2SwipeUpViewControllerDidBeginPresentingMedia:(id)arg1;
- (void)contextV2SwipeUpViewControllerDidFinishPresentingMedia:(id)arg1;
- (void)contextV2SwipeUpViewControllerWillTryToLeaveApp:(id)arg1;
- (id)createSwipeUpPresentableReplyCameraVC;
@property(readonly, nonatomic) SCContextV2CTAView *ctaView;
@property(nonatomic) __weak id <SCContextPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)detatchSwipeUpGestureFromView:(id)arg1;
- (void)dismissSwipeUpContentIfNecessaryAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)groupInviteSwipeUpViewController:(id)arg1 wantsToLogContextMenuActionMetric:(id)arg2;
- (void)groupInviteSwipeUpViewControllerDidDismiss:(id)arg1;
- (id)initWithSession:(id)arg1 baseViewController:(id)arg2 chatPresenter:(id)arg3 cameraPresenter:(id)arg4 chatLogger:(id)arg5;
- (void)messagingControllerDidFinishPresentingSnapAccessoryView:(id)arg1;
- (void)messagingControllerDidLeaveFullScreen:(id)arg1;
- (void)messagingControllerDidWillBeginPresentingSnapAccessoryView:(id)arg1;
- (void)messagingControllerWantsToCollapseCardsAboveKeyboard:(id)arg1;
- (void)messagingControllerWillTransitionToFullScreen:(id)arg1;
- (void)notifySwipeUpMenuDismissedWithTriggerInfo:(id)arg1;
- (void)notifySwipeUpMenuPresentedWithType:(long long)arg1 triggerInfo:(id)arg2;
@property(retain, nonatomic) SnapContextPlaceholderCards *placeholderCards; // @synthesize placeholderCards=_placeholderCards;
@property(readonly, nonatomic) SCContextV2Session *session; // @synthesize session=_session;
- (void)setCardsPresented:(_Bool)arg1 triggerInfo:(id)arg2 animated:(_Bool)arg3;
@property(nonatomic) long long swipeUpAction; // @synthesize swipeUpAction=_swipeUpAction;
- (_Bool)shouldPresentCardsAboveKeyboard;
- (id)snapViewMetrics;
@property(readonly, nonatomic) _Bool swipeUpContentPresented;
- (void)swipeUpGestureDidDismiss:(id)arg1 triggerInfo:(id)arg2;
- (void)swipeUpGestureDidPresent:(id)arg1 triggerInfo:(id)arg2;
- (id)swipeUpViewController;
- (id)topMostPresentedViewControllerForMessagingController:(id)arg1;
- (id)viewControllerToPresentViaSwipeUpGesture:(id)arg1;
- (_Bool)willSwipeToContextCards;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

