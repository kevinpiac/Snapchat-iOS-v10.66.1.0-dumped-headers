//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCMiniProfileViewControllerDelegate-Protocol.h"

@class NSString, SCCheetahSendToCreateGroupActionHandler, SCCheetahSendToStoryActionHandler, SCContactSyncWorkFlow, SCEventListenerAnnouncer, SCSendToDocObjectRecipientDataSource, SCSendToOpenMiniProfileActionHandler, SCSendToSelectAllActionHandler, SCUserSession, UIViewController;
@protocol SCSearchContentViewControlling, SCSendToGroupButtonControllerDelegate, SCStartChatDelegate, SCUserSelectionManaging;

@interface SCCheetahSendToActionHandler : NSObject <SCMiniProfileViewControllerDelegate, SCActionHandling, SCEventAnnouncing>
{
    SCUserSession *_userSession;
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCUserSelectionManaging> _selectionStateManager;
    SCSendToDocObjectRecipientDataSource *_docObjectRecipientDataSource;
    SCCheetahSendToCreateGroupActionHandler *_createGroupActionHandler;
    SCCheetahSendToStoryActionHandler *_storyActionHandler;
    SCSendToOpenMiniProfileActionHandler *_openMiniProfileActionHandler;
    SCSendToSelectAllActionHandler *_selectAllActionHandler;
    id <SCStartChatDelegate> _startChatDelegate;
    _Bool _sourceIsSnappablesSnap;
    _Bool _sourceIs3DSnap;
    SCContactSyncWorkFlow *_contactSyncWorkFlow;
    UIViewController<SCSearchContentViewControlling> *_presentingViewController;
    id <SCSendToGroupButtonControllerDelegate> _groupButtonDelegate;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_handleShowMyContactsAction:(id)arg1;
- (void)_handleTapLastRecipientsButton;
- (void)_presentBusinessProfileWithId:(id)arg1;
- (void)_setSelectionStateForItemType:(long long)arg1 itemId:(id)arg2 selected:(_Bool)arg3;
- (_Bool)_shouldDeselectLastRecipientsButton;
- (void)addListener:(id)arg1;
@property(nonatomic) __weak id <SCSendToGroupButtonControllerDelegate> groupButtonDelegate; // @synthesize groupButtonDelegate=_groupButtonDelegate;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithConfiguration:(id)arg1 selectionStateManager:(id)arg2 docObjectRecipientDataSource:(id)arg3 storiesDataSource:(id)arg4 ourStoriesDescriptionProvider:(id)arg5 groupStoryActionDelegate:(id)arg6 openMiniProfileActionHandler:(id)arg7 appStoryActionHandler:(id)arg8 listsDataFetcher:(id)arg9 groupsDataFetcher:(id)arg10 customStoriesDataFetcher:(id)arg11;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
- (void)miniProfileViewControllerDidPressAddFriendButton:(id)arg1;
@property(nonatomic) __weak UIViewController<SCSearchContentViewControlling> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
