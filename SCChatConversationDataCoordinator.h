//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinating-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSArray, NSString, SCArroyoConversationIdsManager, SCChatAnimationDataCoordinator, SCChatArroyoConversationDataCoordinator, SCChatConversationStoreDataCoordinator, SCChatGroupDataCoordinator, SCChatMetadataStoreDataCoordinator, SCChatMiniThumbnailDataCoordinator, SCChatSnapchattersDataCoordinator, SCChatStoriesDataCoordinator, SCDataCoordinatorListenerAnnouncer, SCQueuePerformer;

@interface SCChatConversationDataCoordinator : NSObject <SCTraceEnabled, SCDataCoordinating, SCDataCoordinatorListener>
{
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    NSArray *_subcoordinators;
    SCChatConversationStoreDataCoordinator *_conversationStoreDataCoordinator;
    SCChatMetadataStoreDataCoordinator *_metadataStoreDataCoordinator;
    SCChatStoriesDataCoordinator *_storiesDataCoordinator;
    SCChatGroupDataCoordinator *_groupDataCoordinator;
    SCChatArroyoConversationDataCoordinator *_arroyoDataCoordinator;
    SCChatSnapchattersDataCoordinator *_snapchattersDataCoordinator;
    SCQueuePerformer *_performer;
    NSString *_activeConversationId;
    SCArroyoConversationIdsManager *_arroyoIdsManager;
    SCChatAnimationDataCoordinator *_animationDataCoordinator;
    SCChatMiniThumbnailDataCoordinator *_miniThumbnailDataCoordinator;
    _Bool _isGroupConversation;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_addSubcoordinator:(id)arg1;
- (void)_announceDataCoordinatorUpdateWithDataRequest:(id)arg1;
- (void)_handleUpdatesWithDataRequest:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)handleDataRequest:(id)arg1;
- (id)initWithConversationStoreCoordinator:(id)arg1 metadataStoreCoordinator:(id)arg2 chatStoriesCoordinator:(id)arg3 groupCoordinator:(id)arg4 arroyoCoordinator:(id)arg5 arroyoIdsManager:(id)arg6 animationDataCoordinator:(id)arg7 snapchattersDataCoordinator:(id)arg8;
- (void)removeDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

