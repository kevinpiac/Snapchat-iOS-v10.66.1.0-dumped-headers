//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCOperaPresenterDelegate-Protocol.h"

@class NSString, SCContextOperaPlaylistPlugin, SCLazy, SCOperaPlaylistFeaturePlugin, SCOperaPresenter, SCUnifiedProfileNonFriendFriendStoriesProvider, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCReplyDelegate, SCStartChatDelegate;

@interface SCMiniProfilePlayFriendStoryActionHandler : NSObject <SCOperaPresenterDelegate, SCActionHandling>
{
    SCUserSession *_userSession;
    SCLazy *_storiesPlaybackDataProvider;
    SCLazy *_storiesMediaCoordinator;
    id <SCReplyDelegate> _replyDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    id <NavigationDelegate> _navigationDelegate;
    SCUnifiedProfileNonFriendFriendStoriesProvider *_nonFriendFriendStoriesProvider;
    SCOperaPlaylistFeaturePlugin *_storiesPlugin;
    SCContextOperaPlaylistPlugin *_contextPlugin;
    SCOperaPresenter *_storiesOperaPresenter;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
- (void)_playStoryForFriendUsername:(id)arg1 mergedPlaybackSequence:(id)arg2 baseView:(id)arg3;
- (void)_playStoryForSnapchatter:(id)arg1 baseView:(id)arg2;
- (void)_setupContextPluginIfNeeded;
- (void)_setupStoriesOperaPresenterIfNeeded;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 storiesPlaybackDataProvider:(id)arg2 storiesMediaCoordinator:(id)arg3 replyDelegate:(id)arg4 startChatDelegate:(id)arg5 navigationDelegate:(id)arg6 nonFriendFriendStoriesProvider:(id)arg7;
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
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

