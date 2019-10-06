//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCPageNameLogging-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSString, SCArroyoConversationIdsManager, SCClearFeedTableView, SCLazy;
@protocol SCChatConversationManager, SCNativeMessagingFeedManaging;

@interface SCClearFeedViewController : SCGenericSettingsViewController <SCUpdateListener, SCPageNameLogging>
{
    SCClearFeedTableView *_feedTableView;
    NSString *_username;
    SCLazy *_lazyFriendsFeedDataCoordinator;
    SCLazy *_lazyFriendsFeedLoadingStatusManager;
    id <SCChatConversationManager> _conversationManager;
    SCArroyoConversationIdsManager *_lazyArroyoConversationIdsManager;
    id <SCNativeMessagingFeedManaging> _nativeMessagingFeedManager;
}

- (void).cxx_destruct;
- (void)_updateTableSubviews;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)getTitle;
- (id)initWithUsername:(id)arg1 friendsFeedDataCoordinator:(id)arg2 friendsFeedLoadingStatusManager:(id)arg3 conversationManager:(id)arg4 arroyoConversationIdsManager:(id)arg5 nativeMessagingFeedManager:(id)arg6;
- (void)leftButtonPressed;
- (void)loadView;
- (id)pageViewName;
- (void)setupTableView;
- (_Bool)shouldPopToRootViewController;
- (_Bool)shouldPopToRootViewControllerLater;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
