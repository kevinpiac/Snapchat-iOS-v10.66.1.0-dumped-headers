//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatConversationStoreListener-Protocol.h"
#import "SCDataCoordinating-Protocol.h"
#import "SCGroupsDataRequestListener-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSString, SCCharmsBlizzardLogger, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCExperimentManager, SCQueuePerformer, SCSessionRequestManager, SCSnapTokenManager;
@protocol SCChatMessageActionHandling, SCFriendmojiRegistry, SCGroupsDataTracking, SCSnapchattersDataFetching, SCSnapchattersDataTracking, SCUsernameToSnapchatterFetching;

@interface SCCharmsDataCoordinator : NSObject <SCSnapchattersDataRequestListener, SCChatConversationStoreListener, SCGroupsDataRequestListener, SCDataCoordinating>
{
    SCSessionRequestManager *_sessionRequestManager;
    SCExperimentManager *_experimentManager;
    SCSnapTokenManager *_snapTokenManager;
    SCDocObjectContext *_docObjectContext;
    NSString *_userID;
    NSString *_username;
    id <SCFriendmojiRegistry> _friendmojiRegistry;
    id <SCSnapchattersDataFetching> _snapchattersDataFetcher;
    id <SCSnapchattersDataTracking> _snapchattersDataTracker;
    id <SCGroupsDataTracking> _groupsDataTracker;
    id <SCUsernameToSnapchatterFetching> _usernameToSnapchatterFetcher;
    id <SCChatMessageActionHandling> _chatMessageActionHandler;
    SCCharmsBlizzardLogger *_charmsBlizzardLogger;
    SCQueuePerformer *_docObjectPerformer;
    SCQueuePerformer *_utilityPerformer;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_populateClientLocalCharms:(id)arg1 ownerIdentifier:(id)arg2 shouldDisplayStreakCounter:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)_processingCompletionForDataRequest:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;
- (void)conversationDidUpdate:(id)arg1;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)didUpdateGroupsDataRequest:(long long)arg1 groupId:(id)arg2;
- (void)diskLoadFinishedWithConversations:(id)arg1;
- (void)fetchCharmsForOwner:(id)arg1 shouldDisplayStreakCounter:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchHiddenCharmsForOwner:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleDataRequest:(id)arg1;
- (id)initWithSessionRequestManager:(id)arg1 experimentManager:(id)arg2 snapTokenManager:(id)arg3 docObjectContext:(id)arg4 userID:(id)arg5 username:(id)arg6 friendmojiRegistry:(id)arg7 snapchattersDataFetcher:(id)arg8 snapchattersDataTracker:(id)arg9 groupsDataTracker:(id)arg10 usernameToSnapchatterFetcher:(id)arg11 chatMessageActionHandler:(id)arg12 charmsBlizzardLogger:(id)arg13;
- (void)removeDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
