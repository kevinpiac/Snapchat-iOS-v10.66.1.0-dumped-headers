//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCChatMessage-Protocol.h"
#import "SCChatMessageV3-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString, SCChatMediaContent, SCChatMessageMetadata, SCChatMessageParticipantIdentifier;

@protocol SCChatRenderingMessage <SCChatMessageV3, SCChatMessage>
- (_Bool)allMediasUploaded;
- (NSString *)broadcastSnapSignature;
- (_Bool)canBeReplayed;
- (_Bool)canBeSaved;
- (_Bool)canDelete;
- (NSDate *)chatOldestOpenTimestamp;
- (NSString *)consistentId;
- (_Bool)containsSpectacles;
- (_Bool)containsVideo;
- (NSString *)conversationId;
- (_Bool)disableSwipeUpReply;
- (NSDate *)expirationDate;
- (_Bool)failedToSend;
- (NSArray *)getAddresses;
- (SCChatMediaContent *)getMediaById:(NSString *)arg1;
- (void)getMediasWithCompletionHandler:(void (^)(SCChatMediaContent *, _Bool *))arg1;
- (SCChatMediaContent *)getReplyMedia;
- (SCChatMediaContent *)getReplyMediaById:(NSString *)arg1;
- (NSArray *)getUrls;
- (_Bool)hasAudio;
- (_Bool)hasMediaCards;
- (_Bool)isBloopMessage;
- (_Bool)isBroadcastSnap;
- (_Bool)isCashMessage;
- (_Bool)isChatMediaMessage;
- (_Bool)isChatMentionForUsername:(NSString *)arg1;
- (_Bool)isErasableBy:(SCChatMessageParticipantIdentifier *)arg1 chatMessageHandlerMap:(NSDictionary *)arg2;
- (_Bool)isErased;
- (_Bool)isExpired;
- (_Bool)isForwardable;
- (_Bool)isGroupMessage;
- (_Bool)isLagunaMessage;
- (_Bool)isMapSnapMessage;
- (_Bool)isMediaContentMessage;
- (_Bool)isMediaSaveMessage;
- (_Bool)isMemoryStoryMessage;
- (_Bool)isMessageOnBirthday:(NSDate *)arg1;
- (_Bool)isMissedAudioCallMessage;
- (_Bool)isMissedVideoCallMessage;
- (_Bool)isOpenedBy:(NSString *)arg1;
- (_Bool)isOpenedByAtleastOneRecipient;
- (_Bool)isParticipantLeftMessage;
- (_Bool)isPreservableType;
- (_Bool)isPreservedBy:(NSString *)arg1;
- (_Bool)isReadBy:(NSString *)arg1;
- (_Bool)isReceivedOneOnOneSnapSentToSelf;
- (_Bool)isReleased;
- (_Bool)isReleasedBy:(NSString *)arg1;
- (_Bool)isReplayed;
- (_Bool)isRepostSharedSnap;
- (_Bool)isSaved;
- (_Bool)isSavedByParticipant:(SCChatMessageParticipantIdentifier *)arg1;
- (_Bool)isSavedSnapMessage;
- (_Bool)isScreenshotted;
- (_Bool)isSearchDynamicStoriesMessage;
- (_Bool)isSearchStoryMessage;
- (_Bool)isSendingOrCanBeRetried;
- (_Bool)isSendingOrHasFailed;
- (_Bool)isSent;
- (_Bool)isSentBy:(NSString *)arg1;
- (_Bool)isSilentMessage;
- (_Bool)isSnapMessage;
- (_Bool)isSnapchatterMessage;
- (_Bool)isStickerMessage;
- (_Bool)isStoryContentMessage;
- (_Bool)isStoryReplyMessage;
- (_Bool)isStorySnapMessage;
- (_Bool)isTextMessage;
- (_Bool)isTextStoryReplyMessage;
- (_Bool)isUnexpiredOneOnOneSnap;
- (_Bool)isUnreadByRecipients;
- (_Bool)isUpdateMessage;
- (_Bool)isUpdateMessageFrom:(NSString *)arg1;
- (_Bool)isViewedOneOnOneOrSentGroupSnapBy:(NSString *)arg1 messageMetadata:(SCChatMessageMetadata *)arg2;
- (_Bool)isViewing;
- (SCChatMessageParticipantIdentifier *)lastToReplay;
- (SCChatMessageParticipantIdentifier *)lastToScreenshot;
- (_Bool)mediaHasLoaded;
- (NSArray *)mediaList;
- (NSString *)mediaSendTaskId;
- (long long)mediaType;
- (SCChatMessageParticipantIdentifier *)messageRecipientIdentifierForOneOnOne;
- (NSString *)messageSender;
- (SCChatMessageParticipantIdentifier *)messageSenderIdentifier;
- (NSDate *)messageTimestamp;
- (NSDate *)messageTimestampForOrdering;
- (long long)messageType;
- (unsigned long long)numMedias;
- (NSSet *)readByParticipants;
- (NSString *)recipient;
- (NSSet *)replayParticipants;
- (long long)replayStateForViewer:(NSString *)arg1;
- (NSArray *)savedParticipants;
- (NSDictionary *)screenRecordingState;
- (NSDictionary *)screenshotState;
- (_Bool)sending;
- (NSDate *)sentTimestamp;
- (NSNumber *)sequenceNumber;
- (_Bool)shouldHideSendState;
- (_Bool)shouldRetryMediaSendTask;
- (_Bool)shouldShowReplayAnimation;
- (_Bool)shouldShowUnreadChatIcon;
- (NSDate *)snapNewestOpenTimestamp;
- (NSDate *)snapOldestOpenTimestamp;
- (NSString *)snapchatterUserId;
- (NSArray *)textFormatAttributes;
- (NSArray *)textMediaAttributes;
- (NSString *)textMessageSignature;
- (_Bool)wouldBeExpiredIfNotSaved;
@end

