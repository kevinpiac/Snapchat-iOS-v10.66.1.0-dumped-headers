//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCOperaPresenterDelegate-Protocol.h"
#import "SCUpdateAnnouncing-Protocol.h"

@class NSArray, NSString, SCContextV2Session, SCEventListenerAnnouncer, SCOperaPresenter, SCOperaViewInteraction, SCSearchDynamicStory, SCUpdateListenerAnnouncer, SCUserSession, SCViewControllerTransitionAnimator, UIView;
@protocol NavigationDelegate, SCReplyDelegate, SCSearchStoriesPresenterDelegate, SCStartChatDelegate;

@interface SCSearchStoriesPresenter : NSObject <SCEventListener, SCOperaPresenterDelegate, SCEventAnnouncing, SCUpdateAnnouncing>
{
    SCOperaPresenter *_operaStoryPresenter;
    _Bool _isDynamicStories;
    SCUserSession *_userSession;
    NSArray *_presentedFriendStories;
    NSArray *_presentedDynamicStories;
    SCOperaViewInteraction *_interactionAtDismissal;
    SCSearchDynamicStory *_currentPlayingDynamicStory;
    SCSearchDynamicStory *_previousPlayingDynamicStory;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    long long _entryPoint;
    SCViewControllerTransitionAnimator *_operaPresenterTransitionAnimator;
    _Bool _useCheetahLogging;
    id <SCSearchStoriesPresenterDelegate> _delegate;
    id <SCReplyDelegate> _replyDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    id <NavigationDelegate> _navigationDelegate;
    UIView *_baseView;
    NSArray *_contexts;
    SCSearchDynamicStory *_lastPlayedDynamicStory;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_cleanupPresenter;
- (void)_didFinishDismissingStory;
- (id)_dummyBaseViewIfNeeded;
- (void)_logStoryPlayEventsWithFriendStories:(id)arg1;
- (id)_makeOperaPluginsWithNameList:(id)arg1 enableCriticalModeWhenLoading:(_Bool)arg2 viewingType:(long long)arg3;
- (void)_presentAllFriendStories:(id)arg1 nameList:(id)arg2 startIndex:(unsigned long long)arg3 isCircleTransition:(_Bool)arg4 presentingViewController:(id)arg5;
- (void)_presentDynamicStoryWithDeepLinkInfo:(id)arg1 fromBaseView:(id)arg2;
- (void)_presentFriendStories:(id)arg1 fromBaseView:(id)arg2 isDeepLink:(_Bool)arg3 isCircleTransition:(_Bool)arg4 viewLocation:(unsigned long long)arg5;
- (id)_presentingViewController;
- (void)_setBaseViewToBottom;
- (void)_setupRequestManagerContexts;
- (void)_willBeginAnimatingToDismissStoryFromView:(id)arg1 toView:(id)arg2;
- (void)addListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(retain, nonatomic) SCContextV2Session *contextSession;
@property(copy, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
@property(nonatomic) __weak id <SCSearchStoriesPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
@property(nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
- (id)initWithUserSession:(id)arg1;
- (_Bool)isPresentingStory;
@property(readonly, copy, nonatomic) SCSearchDynamicStory *lastPlayedDynamicStory; // @synthesize lastPlayedDynamicStory=_lastPlayedDynamicStory;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2;
- (void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3;
- (void)operaPresenterDidCancelDismissing:(id)arg1;
- (void)operaPresenterDidFailToPresent:(id)arg1;
- (void)operaPresenterDidFinishDismissing:(id)arg1;
- (void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidTearDown:(id)arg1;
- (void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1;
- (void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)pauseStory;
- (void)presentDynamicStories:(id)arg1 startIndex:(unsigned long long)arg2 fromBaseView:(id)arg3 isCircleTransition:(_Bool)arg4;
- (void)presentDynamicStory:(id)arg1 fromBaseView:(id)arg2 isCircleTransition:(_Bool)arg3;
- (void)presentDynamicStoryWithDeeplinkInfo:(id)arg1 fromBaseView:(id)arg2;
- (void)presentFriendStories:(id)arg1 fromBaseView:(id)arg2 isCircleTransition:(_Bool)arg3 viewLocation:(unsigned long long)arg4;
- (void)presentWithPlaylistFetcher:(id)arg1 fromBaseView:(id)arg2 isCircleTransition:(_Bool)arg3 viewingType:(long long)arg4;
- (id)presentingStoryId;
- (void)removeListener:(id)arg1;
- (void)removeUpdateListener:(id)arg1;
@property(nonatomic) __weak id <SCReplyDelegate> replyDelegate; // @synthesize replyDelegate=_replyDelegate;
- (void)resumeStory;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) _Bool useCheetahLogging; // @synthesize useCheetahLogging=_useCheetahLogging;
- (_Bool)shouldBeginInteractiveDismissalGestureForWatchNext;
- (void)stopStory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

