//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCOperaPresenterDelegate-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCOperaPerformanceTrackingPlugin, SCOperaPlaylistCameraPlugin, SCOperaPlaylistCommercePlugin, SCOperaPlaylistEditionsPlugin, SCOperaPlaylistNotificationOptInPlugin, SCOperaPresenter, SCUserSession, SCViewControllerTransitionAnimator;
@protocol NavigationDelegate, SCOperaSubscribeActionHandler, SCSearchDiscoverStoriesPresenterDelegate;

@interface SCSearchDiscoverStoriesPresenter : NSObject <SCOperaPresenterDelegate, SCEventListener, SCEventAnnouncing>
{
    SCUserSession *_userSession;
    SCOperaPresenter *_operaPresenter;
    SCOperaPlaylistEditionsPlugin *_editionsPlugin;
    SCOperaPlaylistCommercePlugin *_commercePlugin;
    SCOperaPlaylistCameraPlugin *_cameraPlugin;
    SCOperaPlaylistNotificationOptInPlugin *_notificationOptInPlugin;
    SCViewControllerTransitionAnimator *_operaPresenterTransitionAnimator;
    SCEventListenerAnnouncer *_searchEventAnnouncer;
    SCOperaPerformanceTrackingPlugin *_perfPlugin;
    id <SCOperaSubscribeActionHandler> _subscribeActionHandler;
    id <NavigationDelegate> _navigationDelegate;
    id <SCSearchDiscoverStoriesPresenterDelegate> _delegate;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_cleanupOperaPresenter;
- (id)_operaLoggingContextWithViewLocation:(long long)arg1;
- (void)_setupOperaPresenterWithContext:(unsigned long long)arg1 channelIndex:(unsigned long long)arg2 startWithAttachment:(_Bool)arg3 deepLinkId:(id)arg4 viewLocation:(long long)arg5;
- (void)addListener:(id)arg1;
@property(nonatomic) __weak id <SCSearchDiscoverStoriesPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithUserSession:(id)arg1;
- (_Bool)isEditionFullyViewed;
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
- (void)playDiscoverContentForEdition:(id)arg1 fromSourceView:(id)arg2 isTile:(_Bool)arg3 viewLocation:(long long)arg4;
- (void)presentDiscoverStoryWithDeeplink:(id)arg1 withDsnapIds:(id)arg2 withSourceView:(id)arg3 isTile:(_Bool)arg4 viewLocation:(long long)arg5 additionalInfo:(id)arg6;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

