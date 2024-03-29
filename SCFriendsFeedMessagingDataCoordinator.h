//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinating-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSMutableDictionary, NSString, SCDataCoordinatorListenerAnnouncer, SCLazy, SCQueuePerformer;

@interface SCFriendsFeedMessagingDataCoordinator : NSObject <SCTraceEnabled, SCDataCoordinating, SCDataCoordinatorListener>
{
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCQueuePerformer *_dataUpdatePerformer;
    SCLazy *_docObjectContext;
    NSString *_currentUsername;
    NSString *_currentUserId;
    SCLazy *_ghostToFeedLogger;
    NSMutableDictionary *_currentConversationsStateByFeedId;
    NSMutableDictionary *_conversationStateObservationTokens;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (id)_activeConversationStatesForFeedIds:(id)arg1;
- (void)_announceIfServerSyncWithDataRequest:(id)arg1;
- (void)_announceWithWithUpdatedConversationsStates:(id)arg1 dataRequest:(id)arg2;
- (void)_clearConversationStateInDocForFeedId:(id)arg1 dataRequest:(id)arg2;
- (void)_didClearConversationStateInDocForFeedId:(id)arg1 dataRequest:(id)arg2;
- (void)_didUpdateConversationsStateToDBWithUpdatedConversationStates:(id)arg1 dataRequest:(id)arg2;
- (void)_handleConversationsClearDataRequest:(id)arg1;
- (void)_handleConversationsDataUpdateRequest:(id)arg1;
- (void)_handleInitialLoadDataRequest:(id)arg1;
- (void)_performHandleInitialLoadDataRequest:(id)arg1;
- (void)_updateConversationsDocObjectWithConversations:(id)arg1 dataRequest:(id)arg2;
- (void)_updateConversationsStateToDBWithUpdatedConversationStates:(id)arg1 conversationsType:(id)arg2 dataRequest:(id)arg3;
- (void)activeConversationStatesForFeedIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addDataUpdateListener:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)handleDataRequest:(id)arg1;
- (id)initWithDocObjectContext:(id)arg1 currentUsername:(id)arg2 currentUserId:(id)arg3 ghostToFeedLogger:(id)arg4;
- (void)removeDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

