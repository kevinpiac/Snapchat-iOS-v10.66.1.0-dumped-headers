//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCArroyoConversationDataUpdateListener-Protocol.h"

@class SCArroyoGroupsStorage, SCLazy, SCQueuePerformer;
@protocol SCNativeMessagingSessionManaging;

@interface SCArroyoGroupsDataUpdater : NSObject <SCArroyoConversationDataUpdateListener>
{
    id <SCNativeMessagingSessionManaging> _nativeSessionManager;
    SCLazy *_lazySnapchattersDataFetcher;
    SCLazy *_lazySnapchatterUserInfoProvider;
    SCLazy *_lazySnapchatterPublicInfoFetcher;
    SCArroyoGroupsStorage *_groupsStorage;
    SCLazy *_groupsDataTracker;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)_createGroupsWithConversations:(id)arg1 snapchatterUserIdToSnapchatter:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchRemoteSnapchattersForUserIds:(id)arg1 snapchatterUserIdToSnapchatter:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchSnapchattersForConversations:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performFetchSnapchattersForConversations:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performUpsertGroupsForConversations:(id)arg1 snapchatterUserIdToSnapchatter:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_upsertGroupWithConversation:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_upsertGroupsWithConversations:(id)arg1 conversationIds:(id)arg2 snapchatterUserIdToSnapchatter:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)didConversationUpdateForConversationId:(id)arg1 conversation:(id)arg2 updatedMessages:(id)arg3 removedMessages:(id)arg4;
- (void)didCreateConversation:(id)arg1;
- (void)didRemoveConversation:(id)arg1;
- (id)initWithNativeSessionManager:(id)arg1 lazySnapchattersDataFetcher:(id)arg2 lazySnapchatterUserInfoProvider:(id)arg3 lazySnapchatterPublicInfoFetcher:(id)arg4 arroyoGroupsStorage:(id)arg5 groupsDataTracker:(id)arg6;
- (void)loadGroupsIntoMemoryWithCompletion:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (id)nativeConversationManager;
- (void)upsertGroupWithConversation:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

