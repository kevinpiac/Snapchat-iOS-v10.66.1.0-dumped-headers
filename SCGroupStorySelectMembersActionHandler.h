//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCInvalidFriendAlertViewDelegate-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCGroupStorySelectMembersViewController, SCGroupStorySelectionStateManager, SCInvalidFriendAlertView, SCLazy, SCSendToOpenMiniProfileActionHandler, SCUserSession;

@interface SCGroupStorySelectMembersActionHandler : NSObject <SCInvalidFriendAlertViewDelegate, SCActionHandling, SCEventAnnouncing>
{
    SCUserSession *_userSession;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCGroupStorySelectionStateManager *_selectionStateManager;
    SCSendToOpenMiniProfileActionHandler *_sendToOpenMiniProfileActionHandler;
    SCInvalidFriendAlertView *_invalidFriendAlertView;
    SCLazy *_snapchattersDataFetcher;
    SCGroupStorySelectMembersViewController *_presentingViewController;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_handleSelectUserForId:(id)arg1 itemType:(long long)arg2;
- (id)_newMiniProfileViewController;
- (void)_setSelectUserForId:(id)arg1 itemType:(long long)arg2;
- (void)_setSelectionStateForItemType:(long long)arg1 itemId:(id)arg2 selected:(_Bool)arg3;
- (void)_showAlertToRemoveFriendFromPostersListForId:(id)arg1 removeAction:(CDUnknownBlockType)arg2;
- (void)_showInvalidFriendAlertWithName:(id)arg1;
- (void)addListener:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 selectionStateManager:(id)arg2 docObjectRecipientDataSource:(id)arg3 snapchattersDataFetcher:(id)arg4 snapchattersDataMutator:(id)arg5 snapchattersDataTracker:(id)arg6 userInfoProvider:(id)arg7 viewedIncomingFriendsTracker:(id)arg8 friendScoreCoordinator:(id)arg9 presentingViewController:(id)arg10;
@property(nonatomic) __weak SCGroupStorySelectMembersViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)removeListener:(id)arg1;
- (void)showKeyboardIfNecessary:(_Bool)arg1;
- (unsigned long long)titleTypeForInvalidFriendAlertView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

