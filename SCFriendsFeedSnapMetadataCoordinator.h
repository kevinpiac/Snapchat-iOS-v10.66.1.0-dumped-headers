//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMetadataStoreListener-Protocol.h"
#import "SCDataCoordinating-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSMutableDictionary, NSString, SCDataCoordinatorListenerAnnouncer, SCQueuePerformer;

@interface SCFriendsFeedSnapMetadataCoordinator : NSObject <SCChatMetadataStoreListener, SCTraceEnabled, SCDataCoordinating, SCDataCoordinatorListener>
{
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_currentChatSnapMessageMetadataByFeedId;
    NSString *_currentUsername;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_fetchConversationMetadatasWithMetadataStore:(id)arg1;
- (void)_updateSnapMessageMetadataWithConversationMetadatas:(id)arg1;
- (void)activeChatSnapMessageMetadataForFeedIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addDataUpdateListener:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)handleDataRequest:(id)arg1;
- (id)initWithMetadataStore:(id)arg1 currentUsername:(id)arg2;
- (void)metadataDidUpdate:(id)arg1 conversationId:(id)arg2;
- (void)removeDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

