//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCChatConversationStore-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, SCChatConversationStoreListenerAnnouncer, SCChatV3FeedUpdater, SCChatV3MessageReceiver, SCLazy;
@protocol SCChatConversationFetcher, SCConversationStorage, SCGroupManager, SCPerforming, SCUserHelperProtocol;

@interface SCChatV3ConversationStore : NSObject <SCChatConversationStore, NSCoding, SCTraceEnabled>
{
    NSMutableDictionary *_conversationFetchQueue;
    id <SCChatConversationFetcher> _fetcher;
    id <SCGroupManager> _groupManager;
    SCChatV3MessageReceiver *_messageReceiver;
    SCChatV3FeedUpdater *_feedUpdater;
    id <SCUserHelperProtocol> _userHelper;
    SCChatConversationStoreListenerAnnouncer *_announcer;
    NSString *_activeConversationId;
    NSMutableSet *_clearedConversationIds;
    NSMutableArray *_conversationsVersionCallbacks;
    SCLazy *_receiveFlowLogger;
    SCLazy *_autoShakeToReporter;
    _Bool _isLoadedFromDisk;
    id <SCPerforming> _performer;
    NSString *_username;
    NSString *_oneOnOneSnapsSyncToken;
    NSSet *_conversationIdsForDebugging;
    id <SCConversationStorage> _storage;
}

- (void).cxx_destruct;
- (void)_addFetchHandlerByConvId:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_checkAndCorrectDocTableConversationsWithMessageStateHandler:(id)arg1 chatMediaCache:(id)arg2;
- (void)_checkAndCorrectLegacyDiskConversationsWithMessageStateHandler:(id)arg1 chatMediaCache:(id)arg2;
- (void)_clear;
- (void)_clearConversationById:(id)arg1;
- (void)_didFetchConversation:(id)arg1 forConversationId:(id)arg2 source:(id)arg3;
- (void)_executeFetchConversationsVersionCallbacks:(id)arg1 withConversationsVersion:(id)arg2;
- (void)_fetchConversationFromServerById:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchConversationsVersionAndPerform:(id)arg1;
- (void)_fetchConversationsVersionWithCallback:(CDUnknownBlockType)arg1;
- (void)_getConversationById:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_markAsLoaded;
- (void)_mergeWithConversationStoreLoadedFromDisk:(id)arg1;
- (void)_performBlock:(CDUnknownBlockType)arg1 forConversationId:(id)arg2;
- (void)_processFetchedMessageWithId:(id)arg1 conversationId:(id)arg2 conversation:(id)arg3 result:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_processSOJUChatResponse:(id)arg1 isPagination:(_Bool)arg2 isOneOnOnePlaceHolder:(_Bool)arg3;
- (void)_processSOJUMischiefResponse:(id)arg1;
- (void)_putConversation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_putConversations:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startFetchingConversations:(id)arg1;
- (void)_updateConversation:(id)arg1 modifyAllMessagesWithMutationBlock:(CDUnknownBlockType)arg2 withConversationMutationBlock:(CDUnknownBlockType)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)_updateConversation:(id)arg1 modifyMessageIds:(id)arg2 withMutationBlock:(CDUnknownBlockType)arg3 enforceMessagesExist:(_Bool)arg4 conversationMutationBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6 callStack:(id)arg7;
- (void)_updateConversation:(id)arg1 setHistoryLoadStateAs:(long long)arg2;
- (void)_updateConversation:(id)arg1 setLoadStateAs:(long long)arg2;
- (void)_updateConversation:(id)arg1 withMutationBlock:(CDUnknownBlockType)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_updateConversationFetchQueue;
- (void)_updateConversationsByIds:(id)arg1 withMutationBlockWithId:(CDUnknownBlockType)arg2 fetchContext:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)_updatePendingSnapUpdatesAndClear;
- (void)addListener:(id)arg1;
- (void)checkAndCorrectAllDiskConversationsWithMessageStateHandler:(id)arg1 chatMediaCache:(id)arg2;
- (void)clear;
- (void)clearAsync;
- (void)clearConversationById:(id)arg1;
- (void)configureWithConversationFetcher:(id)arg1 messageReceiver:(id)arg2 feedUpdater:(id)arg3 userHelper:(id)arg4 groupManager:(id)arg5 lazyDocObjectContext:(id)arg6 username:(id)arg7 receiveFlowLogger:(id)arg8 autoShakeToReporter:(id)arg9;
@property(retain) NSSet *conversationIdsForDebugging; // @synthesize conversationIdsForDebugging=_conversationIdsForDebugging;
- (id)conversationStoreQueuePerformer;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchAuthForConversationId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchConversationFromServerById:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)fetchConversationsVersionSync;
- (void)fetchConversationsVersionWithCallback:(CDUnknownBlockType)arg1;
- (void)fetchMessageById:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchMessageById:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3 withConversationMutationBlock:(CDUnknownBlockType)arg4;
- (void)fetchOneOnOneConversation:(id)arg1 fetchReason:(long long)arg2 chatSequenceNumbers:(struct NSDictionary *)arg3 stateUpdateSequenceNumbers:(struct NSDictionary *)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchOneOnOneConversationForMissingMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAllConversationIdsAndPerformOnDedicatedThread:(CDUnknownBlockType)arg1;
- (void)getAllMediaReferencesAndPerformOnDedicatedThread:(CDUnknownBlockType)arg1;
- (void)getConversationById:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)getConversationSync:(id)arg1;
- (void)getLocalConversationById:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getMessageLocallyWithMessageId:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getPendingSnapUpdatesAndPerformOnDedicatedThread:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPerformer:(id)arg1;
- (id)initWithPerformer:(id)arg1 useDocTable:(_Bool)arg2;
@property _Bool isLoadedFromDisk; // @synthesize isLoadedFromDisk=_isLoadedFromDisk;
- (void)loadHistoryForConversationId:(id)arg1 retryIfFailed:(_Bool)arg2 retryCount:(unsigned long long)arg3;
- (void)markAsLoadedAndSyncWithGroup;
- (void)mergeWithConversationStoreLoadedFromDisk:(id)arg1;
@property(readonly, copy, nonatomic) NSString *oneOnOneSnapsSyncToken; // @synthesize oneOnOneSnapsSyncToken=_oneOnOneSnapsSyncToken;
- (void)paginateForwardForConversationId:(id)arg1 withEarliestSequenceNumbers:(struct NSDictionary *)arg2 latestSequenceNumbers:(struct NSDictionary *)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
- (void)prefetchConversationById:(id)arg1;
- (void)putConversation:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)setActiveConversationId:(id)arg1;
@property(retain, nonatomic) id <SCConversationStorage> storage; // @synthesize storage=_storage;
- (void)unsetActiveConversationId:(id)arg1;
- (void)updateConversationById:(id)arg1 fetchIfDoesntExist:(_Bool)arg2 withMutationBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateConversationById:(id)arg1 modifyAllMessagesWithMutationBlock:(CDUnknownBlockType)arg2;
- (void)updateConversationById:(id)arg1 modifyAllMessagesWithMutationBlock:(CDUnknownBlockType)arg2 withConversationMutationBlock:(CDUnknownBlockType)arg3;
- (void)updateConversationById:(id)arg1 modifyAllMessagesWithMutationBlock:(CDUnknownBlockType)arg2 withConversationMutationBlock:(CDUnknownBlockType)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)updateConversationById:(id)arg1 modifyMessageIds:(id)arg2 withMutationBlock:(CDUnknownBlockType)arg3;
- (void)updateConversationById:(id)arg1 modifyMessageIds:(id)arg2 withMutationBlock:(CDUnknownBlockType)arg3 enforceMessagesExist:(_Bool)arg4 conversationMutationBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)updateConversationById:(id)arg1 modifyMessageIds:(id)arg2 withMutationBlock:(CDUnknownBlockType)arg3 enforceMessagesExist:(_Bool)arg4 withConversationMutationBlock:(CDUnknownBlockType)arg5;
- (void)updateConversationById:(id)arg1 modifyMessageIds:(id)arg2 withMutationBlock:(CDUnknownBlockType)arg3 withConversationMutationBlock:(CDUnknownBlockType)arg4;
- (void)updateConversationById:(id)arg1 withMutationBlock:(CDUnknownBlockType)arg2;
- (void)updateConversationById:(id)arg1 withMutationBlock:(CDUnknownBlockType)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)updateConversationWithGroup:(id)arg1;
- (void)updateConversationsByIds:(id)arg1 fetchContext:(id)arg2 withMutationBlockWithId:(CDUnknownBlockType)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)updateOneOnOneSnapsSyncToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)xLogObjectInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

