//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCArroyoConversationDataUpdateListener-Protocol.h"
#import "SCDataCoordinating-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSMutableDictionary, NSString, SCArroyoConversationIdsManager, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCLazy, SCQueuePerformer, SCTimeProvider;
@protocol SCNativeMessagingFeedManaging, SCNativeMessagingSessionManaging;

@interface SCFriendsFeedArroyoDataCoordinator : NSObject <SCTraceEnabled, SCDataCoordinating, SCDataCoordinatorListener, SCArroyoConversationDataUpdateListener>
{
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCDocObjectContext *_docObjectContext;
    NSString *_userId;
    NSString *_username;
    id <SCNativeMessagingSessionManaging> _nativeSessionManager;
    id <SCNativeMessagingFeedManaging> _nativeFeedManager;
    SCLazy *_lazySnapchattersDataFetcher;
    SCArroyoConversationIdsManager *_arroyoConversationIdsManager;
    SCLazy *_processorsLazy;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_conversationStateByFeedId;
    NSMutableDictionary *_conversationStateObservationTokens;
    SCTimeProvider *_currentDateProvider;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_announceArroyoUpdatesWithDataRequest:(id)arg1;
- (void)_clearConversationStateInDocForFeedId:(id)arg1;
- (void)_correctConversationStates;
- (id)_fetchAndObserveConversationStatesWithFeedIds:(id)arg1;
- (void)_fetchAndUpsertConversation:(id)arg1 messages:(id)arg2 conversationId:(id)arg3;
- (void)_fetchNativeConversationId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processUpsertConversation:(id)arg1 messages:(id)arg2 conversationId:(id)arg3 transactionContext:(id)arg4;
- (void)_updateConversationStatesWithFetchedResult:(id)arg1 feedId:(id)arg2;
- (void)_upsertConversation:(id)arg1 messages:(id)arg2 conversationId:(id)arg3;
- (void)addDataUpdateListener:(id)arg1;
- (void)conversationStatesForFeedIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)didConversationUpdateForConversationId:(id)arg1 conversation:(id)arg2 updatedMessages:(id)arg3 removedMessages:(id)arg4;
- (void)didCreateConversation:(id)arg1;
- (void)didRemoveConversation:(id)arg1;
- (void)handleDataRequest:(id)arg1;
- (id)initWithDocObjectContext:(id)arg1 userId:(id)arg2 username:(id)arg3 nativeSessionManager:(id)arg4 nativeFeedManager:(id)arg5 lazySnapchattersDataFetcher:(id)arg6 arroyoConversationIdsManager:(id)arg7 currentDateProvider:(id)arg8;
- (id)nativeConversationManager;
- (void)removeDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

