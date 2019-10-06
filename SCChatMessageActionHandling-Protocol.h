//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCChatUIActionHandling-Protocol.h"

@class NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSNumber, NSObject, NSSet, NSString, SCChatDraft, SCChatMediaContent, SCChatMediaContentMetadata, SCChatMessageContentContainer, SCChatMetricsEventInfo, SCChatReplyMediaProperties, SCRequest, SOJUSticker;
@protocol OS_dispatch_queue, SCChatConversationStoreListener, SCChatMediaContentProvider, SCChatRenderingMessage;

@protocol SCChatMessageActionHandling <SCChatUIActionHandling>
- (void)addListener:(id <SCChatConversationStoreListener>)arg1;
- (void)applySnapMetadata:(NSDictionary *)arg1 forConversationId:(NSString *)arg2 fromSender:(NSString *)arg3 triggeredBySnapId:(NSString *)arg4;
- (void)attemptReplayOfSnapsInConversation:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)batchToggleSaveInConversation:(NSString *)arg1 messageIds:(NSSet *)arg2 toSaved:(_Bool)arg3;
- (void)cleanPendingAuthForConversationId:(NSString *)arg1;
- (void)conversationId:(NSString *)arg1 addOrUpdateSendToMessageWithMediaProviders:(NSArray *)arg2 messageMetadata:(NSDictionary *)arg3 withCompletionHandler:(void (^)(_Bool, SCChatMessageV3 *))arg4;
- (void)conversationId:(NSString *)arg1 attemptReplayOfSnap:(NSString *)arg2;
- (void)conversationId:(NSString *)arg1 finishViewingSnap:(NSString *)arg2 cellViewPosition:(long long)arg3 hasAvailableCredits:(_Bool)arg4;
- (void)conversationId:(NSString *)arg1 finishViewingSnap:(NSString *)arg2 enforceMessageExists:(_Bool)arg3 cellViewPosition:(long long)arg4 hasAvailableCredits:(_Bool)arg5;
- (void)conversationId:(NSString *)arg1 openSnap:(NSString *)arg2 stackId:(NSString *)arg3 isFirstSnapInStack:(_Bool)arg4 atTime:(NSDate *)arg5 registerBlock:(void (^)(id <SCChatRenderingMessage>))arg6;
- (void)conversationId:(NSString *)arg1 screenCaptureWithType:(long long)arg2;
- (void)conversationId:(NSString *)arg1 screenCaptureWithType:(long long)arg2 source:(long long)arg3;
- (void)conversationId:(NSString *)arg1 sendConnectedCallMessage:(_Bool)arg2;
- (void)conversationId:(NSString *)arg1 sendContainer:(SCChatMessageContentContainer *)arg2 completionHandler:(void (^)(long long))arg3;
- (void)conversationId:(NSString *)arg1 sendCustomStickerWithMessageType:(long long)arg2 mediaProviders:(NSArray *)arg3 withMetricsEventInfo:(SCChatMetricsEventInfo *)arg4 completionHandler:(void (^)(long long))arg5;
- (void)conversationId:(NSString *)arg1 sendMediaWithMessageType:(long long)arg2 mediaProviders:(NSArray *)arg3 withMetricsEventInfo:(SCChatMetricsEventInfo *)arg4 completionHandler:(void (^)(long long))arg5;
- (void)conversationId:(NSString *)arg1 sendMissedCallMessageWithType:(long long)arg2;
- (void)conversationId:(NSString *)arg1 sendReplyMediaWithMessageType:(long long)arg2 withStory:(SCChatReplyMediaProperties *)arg3 mediaProviders:(NSArray *)arg4 metricsEventInfo:(SCChatMetricsEventInfo *)arg5 completionHandler:(void (^)(long long))arg6 isCustomSticker:(_Bool)arg7;
- (void)conversationId:(NSString *)arg1 sendSnapWithProvider:(id <SCChatMediaContentProvider>)arg2 withMessageMetadata:(NSDictionary *)arg3 metricsEventInfo:(SCChatMetricsEventInfo *)arg4;
- (void)conversationId:(NSString *)arg1 sendSticker:(SOJUSticker *)arg2 fromPack:(NSString *)arg3 fromPosition:(unsigned long long)arg4 withMetricsEventInfo:(SCChatMetricsEventInfo *)arg5 completionHandler:(void (^)(long long))arg6;
- (void)conversationId:(NSString *)arg1 sendTextMessage:(NSAttributedString *)arg2 customMediaCardAttributes:(NSArray *)arg3 withMetricsEventInfo:(SCChatMetricsEventInfo *)arg4 completionHandler:(void (^)(long long))arg5;
- (void)conversationId:(NSString *)arg1 sendUploadedMediaWithMediaProviders:(NSArray *)arg2 messageMetadata:(NSDictionary *)arg3 chatText:(NSString *)arg4 withCompletionHandler:(void (^)(_Bool, SCChatMessageV3 *))arg5;
- (void)conversationId:(NSString *)arg1 sendVolatileMessage:(NSString *)arg2;
- (void)conversationId:(NSString *)arg1 setReplayAnimationState:(long long)arg2 forSnap:(NSString *)arg3;
- (void)conversationId:(NSString *)arg1 updateNotificationStatus:(_Bool)arg2;
- (void)conversationId:(NSString *)arg1 userDidScreenRecordForSnap:(NSString *)arg2;
- (void)conversationId:(NSString *)arg1 userDidTakeScreenshotForSnap:(NSString *)arg2;
- (void)deleteExpiredMessagesFromConversationId:(NSString *)arg1;
- (void)deleteFailedMessageBlockFromConversation:(NSString *)arg1 messageIdentifier:(NSString *)arg2;
- (void)deleteMessageFromConversation:(NSString *)arg1 messageIdentifier:(NSString *)arg2;
- (void)didShowCompleteDisplayForConversationId:(NSString *)arg1 withMessageId:(NSString *)arg2;
- (void)didShowPendingDisplayForConversationId:(NSString *)arg1 withMessageId:(NSString *)arg2;
- (void)fetchAllConversationIdsWithCompletion:(void (^)(NSArray *))arg1;
- (void)fetchAuthForConversationId:(NSString *)arg1 completion:(void (^)(NSString *, NSString *, NSString *))arg2;
- (void)fetchCognacNotificationStatusWithConversationId:(NSString *)arg1 completion:(void (^)(_Bool))arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)fetchConversation:(NSString *)arg1 completion:(void (^)(id <SCChatRenderingConversation>, long long))arg2;
- (void)fetchConversationWithMetadata:(NSString *)arg1 completion:(void (^)(id <SCChatRenderingConversation>, SCChatConversationMetadata *, long long))arg2;
- (void)fetchKeyForSnapId:(NSString *)arg1 conversationId:(NSString *)arg2 callback:(void (^)(NSString *))arg3;
- (void)fetchMessageAndMetadataForConversationId:(NSString *)arg1 messageId:(NSString *)arg2 completion:(void (^)(id <SCChatRenderingMessage>, SCChatMessageMetadata *))arg3;
- (void)fetchMessageForConversationId:(NSString *)arg1 messageId:(NSString *)arg2 completion:(void (^)(id <SCChatRenderingMessage>))arg3;
- (void)fetchNotificationStatusForConversation:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)fetchPendingLocallyConsumedReplayCreditsWithCompletion:(void (^)(long long))arg1;
- (void)getLocalConversation:(NSString *)arg1 completion:(void (^)(SCChatConversationV3 *, long long))arg2;
- (void)getMessageLocallyWithMessageId:(NSString *)arg1 conversationId:(NSString *)arg2 completion:(void (^)(SCChatMessageV3 *))arg3;
- (void)invalidateCandidatePaidToReplaySnapsInConversations:(NSArray *)arg1 excludingSnapIds:(NSArray *)arg2;
- (void)invalidateMediaById:(NSString *)arg1 forMessageId:(NSString *)arg2 conversationId:(NSString *)arg3;
- (void)loadMapSnapForConversationId:(NSString *)arg1 forMessageId:(NSString *)arg2 poiId:(NSString *)arg3 storySnapId:(NSString *)arg4 requestContext:(long long)arg5;
- (void)loadMediaCardsForMessage:(id <SCChatRenderingMessage>)arg1;
- (void)loadMediaForConversationId:(NSString *)arg1 messageId:(NSString *)arg2 media:(SCChatMediaContent *)arg3 requestContext:(long long)arg4;
- (void)loadMoreMessagesForConversationId:(NSString *)arg1 retryIfFailed:(_Bool)arg2;
- (void)loadSearchStoryForId:(NSString *)arg1 snapId:(NSString *)arg2 forMessageId:(NSString *)arg3 conversationId:(NSString *)arg4 requestContext:(long long)arg5;
- (void)loadSnapchatterForId:(NSString *)arg1 messageId:(NSString *)arg2 conversationId:(NSString *)arg3;
- (void)loadStoryReply:(SCChatMediaContent *)arg1 replyMediaMetadata:(SCChatMediaContentMetadata *)arg2 messageId:(NSString *)arg3 conversationId:(NSString *)arg4 isGroupConversation:(_Bool)arg5 requestContext:(long long)arg6;
- (void)makeChatMedias:(NSArray *)arg1 recipients:(NSArray *)arg2 groups:(NSArray *)arg3 successBlock:(void (^)(NSDictionary *))arg4 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg5;
- (void)makeLocalConversationShowOnFeedIfNecessary:(NSString *)arg1;
- (void)markMessagesAsDisplayedForConversationId:(NSString *)arg1 upToKnownChatSequenceNumbers:(struct NSDictionary *)arg2;
- (void)markMessagesAsReadForConversationId:(NSString *)arg1 toMessageId:(NSNumber *)arg2;
- (void)markMessagesAsReleasedForConversationId:(NSString *)arg1 toMessageId:(NSNumber *)arg2;
- (void)markSnapchatterIdAsTapped:(NSString *)arg1 forConversationId:(NSString *)arg2;
- (void)mediaMetadataForMediaId:(NSString *)arg1 messageId:(NSString *)arg2 conversationId:(NSString *)arg3 completion:(void (^)(SCChatMediaContentMetadata *))arg4;
- (void)messageMetadataForMessageId:(NSString *)arg1 conversationId:(NSString *)arg2 completion:(void (^)(SCChatMessageMetadata *))arg3;
- (void)messageMetadataForMessageIds:(NSArray *)arg1 conversationId:(NSString *)arg2 completion:(void (^)(NSDictionary *))arg3;
- (SCRequest *)modifyMessageRetentionPolicyForConversationId:(NSString *)arg1 retentionInMinutes:(unsigned long long)arg2 completion:(void (^)(long long))arg3;
- (void)prepareMediaMessageForConversationId:(NSString *)arg1 clientResolutionId:(NSString *)arg2 messageContentContainer:(SCChatMessageContentContainer *)arg3 successCompletion:(void (^)(void))arg4 failureCompletion:(void (^)(void))arg5;
- (void)refreshAllMessagesForConversationId:(NSString *)arg1;
- (void)releaseMessagesFromConversationId:(NSString *)arg1 upToKnownChatSequenceNumbers:(struct NSDictionary *)arg2;
- (void)releaseSentMessagesForSender:(NSString *)arg1 forConversationId:(NSString *)arg2;
- (void)removeAllTasksWithFeedId:(NSString *)arg1;
- (void)removeListener:(id <SCChatConversationStoreListener>)arg1;
- (void)removeUsername:(NSString *)arg1 fromConversationId:(NSString *)arg2;
- (void)resetStatesInConversation:(NSString *)arg1 isFromBackground:(_Bool)arg2;
- (void)resetStatesInConversations:(NSArray *)arg1 isFromBackground:(_Bool)arg2;
- (void)retryAllFailedMessagesInConversationId:(NSString *)arg1 isAutoRetry:(_Bool)arg2;
- (void)retryFailedBlockMessageId:(NSString *)arg1 forConversationId:(NSString *)arg2 metricsEventInfo:(SCChatMetricsEventInfo *)arg3 isAutoRetry:(_Bool)arg4;
- (void)savedToMemoriesForMessageId:(NSString *)arg1 conversationId:(NSString *)arg2;
- (void)sendDeleteMessagesForConversationId:(NSString *)arg1 upToKnownChatSequenceNumbers:(struct NSDictionary *)arg2;
- (void)sendDeleteSnapsForConversationId:(NSString *)arg1;
- (void)sendJoinedCallMessageForConversationId:(NSString *)arg1;
- (void)sendLeftCallMessageForConversationId:(NSString *)arg1;
- (void)sendLegacyPresencesForConversationId:(NSString *)arg1 legacyPresences:(NSDictionary *)arg2 extendedPresences:(NSDictionary *)arg3 presencesMetadata:(NSDictionary *)arg4 sequenceNumber:(NSNumber *)arg5 toRecipients:(NSArray *)arg6;
- (void)sendMediaMessageForConversationId:(NSString *)arg1 clientResolutionId:(NSString *)arg2 mediaContentObjects:(NSDictionary *)arg3 completion:(void (^)(_Bool))arg4;
- (void)sendMessageToRecipients:(NSArray *)arg1 type:(NSString *)arg2 content:(NSData *)arg3 additionalText:(NSString *)arg4 completion:(void (^)(long long))arg5;
- (void)sendSaveToCameraRollForMessageWithMessageId:(NSString *)arg1 conversationId:(NSString *)arg2 messageSender:(NSString *)arg3 messageBodyType:(long long)arg4 mediaList:(NSArray *)arg5;
- (void)sendStickerStoryReply:(SOJUSticker *)arg1 conversationId:(NSString *)arg2 fromPack:(NSString *)arg3 fromPosition:(unsigned long long)arg4 drawerMode:(long long)arg5 completionHandler:(void (^)(long long))arg6 story:(SCChatReplyMediaProperties *)arg7 metricsEventInfo:(SCChatMetricsEventInfo *)arg8;
- (void)sendTextMessage:(NSAttributedString *)arg1 toRecipients:(NSArray *)arg2 completionHandler:(void (^)(long long))arg3;
- (void)sendTextStoryReply:(NSString *)arg1 conversationId:(NSString *)arg2 completionHandler:(void (^)(long long))arg3 story:(SCChatReplyMediaProperties *)arg4 typeVersion:(long long)arg5 metricsEventInfo:(SCChatMetricsEventInfo *)arg6;
- (void)setActiveConversationById:(NSString *)arg1 completion:(void (^)(id <SCChatRenderingConversation>, long long))arg2;
- (void)setAuthMac:(NSString *)arg1 authPayload:(NSString *)arg2 forConversationId:(NSString *)arg3;
- (void)snapWasViewedWithID:(NSString *)arg1;
- (void)unpreserveLoadedMessageIds:(NSSet *)arg1 forConversationId:(NSString *)arg2;
- (void)updateChatDraft:(SCChatDraft *)arg1 forConversationId:(NSString *)arg2;
- (void)updateCognacNotificationStatus:(_Bool)arg1 conversationId:(NSString *)arg2 completion:(void (^)(_Bool))arg3 completionQueue:(NSObject<OS_dispatch_queue> *)arg4;
- (void)updateSerializedParcelPayloadForMessage:(NSString *)arg1 newPayload:(NSData *)arg2 conversation:(NSString *)arg3;
- (void)updateSnapsForRecipients:(NSArray *)arg1 clientId:(NSString *)arg2 snapIdsAndTimestamps:(NSDictionary *)arg3;
@end

