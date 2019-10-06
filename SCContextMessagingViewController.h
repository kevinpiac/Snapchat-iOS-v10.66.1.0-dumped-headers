//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCChatViewControllerConversationStateProtocol-Protocol.h"
#import "SCContextCardsAboveKeyboardViewDelegate-Protocol.h"
#import "SCContextChatHeaderDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, SCChatInputViewController, SCContextCardsAboveKeyboardView, SCContextChatHeader, UIView;
@protocol SCContextMessagingViewControllerDelegate><SCChatViewControllerConversationStateProtocol, SCSizeChangeAnnouncingView;

@interface SCContextMessagingViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, SCContextChatHeaderDelegate, UIGestureRecognizerDelegate, SCContextCardsAboveKeyboardViewDelegate, SCChatViewControllerConversationStateProtocol, SCPageNameLogging>
{
    UIView *_contentView;
    _Bool _shouldEnableKeyboardOnTransition;
    SCContextCardsAboveKeyboardView *_cardsAboveKeyboardContainer;
    _Bool _hasAlternateRecipient;
    NSString *_displayName;
    _Bool _shouldDismissBySlidingCardsAboveKeyboardDown;
    _Bool _skipFocusingKeyboardOnNextFullscreenAppearance;
    _Bool _showsBackdrop;
    _Bool _inCardsAboveKeyboardExpandedMode;
    id <SCContextMessagingViewControllerDelegate><SCChatViewControllerConversationStateProtocol> _delegate;
    SCContextChatHeader *_header;
    SCChatInputViewController *_inputController;
    UIView<SCSizeChangeAnnouncingView> *_cardsAboveKeyboardView;
    struct CGRect _frameToTransitionFrom;
}

- (void).cxx_destruct;
- (void)_createCardsAboveKeyboardConstraintsIfPossible;
- (void)_dismiss;
- (id)_interactionControllerForFastKeyboardTransitionWithAnimationCurve:(long long)arg1;
- (id)activeConversationId;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(retain, nonatomic) UIView<SCSizeChangeAnnouncingView> *cardsAboveKeyboardView; // @synthesize cardsAboveKeyboardView=_cardsAboveKeyboardView;
- (void)contextCardsAboveKeyboardViewWantsToDismiss:(id)arg1 shouldSlideDown:(_Bool)arg2;
@property(nonatomic) __weak id <SCContextMessagingViewControllerDelegate><SCChatViewControllerConversationStateProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct CGRect frameToTransitionFrom; // @synthesize frameToTransitionFrom=_frameToTransitionFrom;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(readonly, nonatomic) SCContextChatHeader *header; // @synthesize header=_header;
@property(nonatomic) _Bool inCardsAboveKeyboardExpandedMode; // @synthesize inCardsAboveKeyboardExpandedMode=_inCardsAboveKeyboardExpandedMode;
- (id)initWithDisplayName:(id)arg1 hasAlternateRecipient:(_Bool)arg2;
@property(retain, nonatomic) SCChatInputViewController *inputController; // @synthesize inputController=_inputController;
- (id)interactionControllerForPresentation:(id)arg1;
- (_Bool)isPlayingMedia;
- (void)loadView;
- (void)modalAccessoryDidDismiss;
- (id)otherParticipant;
- (id)pageViewName;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
@property(nonatomic) _Bool showsBackdrop; // @synthesize showsBackdrop=_showsBackdrop;
@property(nonatomic) _Bool skipFocusingKeyboardOnNextFullscreenAppearance; // @synthesize skipFocusingKeyboardOnNextFullscreenAppearance=_skipFocusingKeyboardOnNextFullscreenAppearance;
- (_Bool)shouldPopToRootViewControllerLater;
- (void)swapButtonPressedOnHeader:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)updateHeaderToDisplayName:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)xButtonPressedOnHeader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
