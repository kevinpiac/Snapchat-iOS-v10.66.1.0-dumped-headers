//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatRenderingMessage-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, SCChatGroupUpdateContent, SCChatMediaContent, SCChatMediaSave, SCChatMessageParcel, SCChatSticker, SCNMessagingMessageContent, SCNMessagingMessageDescriptor, SCNMessagingMessageMetadata, SCNMessagingUUID, SCSnapState, SOJUKhaleesiShare, SOJUNycShare, SOJUSearchShareStory, SOJUSearchShareStorySnap, SOJUSnapMetadata, SOJUSnapchatter, SOJUStoryShare;

@interface SCNMessagingMessage : NSObject <SCChatRenderingMessage>
{
    SCNMessagingMessageDescriptor *_descriptor;
    SCNMessagingUUID *_senderId;
    SCNMessagingMessageContent *_messageContent;
    SCNMessagingMessageMetadata *_metadata;
    long long _releasePolicy;
    long long _state;
}

+ (id)MessageWithDescriptor:(id)arg1 senderId:(id)arg2 messageContent:(id)arg3 metadata:(id)arg4 releasePolicy:(long long)arg5 state:(long long)arg6;
- (void).cxx_destruct;
- (id)_groupUpdateForNameChange:(id)arg1;
- (id)_groupUpdateForParticipantChangeStatusMessage:(id)arg1;
- (_Bool)allMediasUploaded;
@property(readonly, copy, nonatomic) NSArray *attributes;
- (id)broadcastSnapSignature;
- (_Bool)canBeReplayed;
- (_Bool)canBeSaved;
- (_Bool)canDelete;
- (id)chatOldestOpenTimestamp;
@property(readonly, copy, nonatomic) SCChatSticker *chatSticker;
@property(readonly, copy, nonatomic) NSString *consistentId;
- (_Bool)containsSpectacles;
- (_Bool)containsVideo;
@property(readonly, copy, nonatomic) NSString *conversationId;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SCNMessagingMessageDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (_Bool)disableSwipeUpReply;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *encryptedGeoData;
@property(readonly, copy, nonatomic) NSString *encryptedId;
- (id)expirationDate;
- (_Bool)failedToSend;
- (id)getAddresses;
- (id)getMediaById:(id)arg1;
- (void)getMediasWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)getReplyMedia;
- (id)getReplyMediaById:(id)arg1;
- (id)getUrls;
@property(readonly, nonatomic) long long groupId;
@property(readonly, copy, nonatomic) SCChatGroupUpdateContent *groupUpdate;
- (_Bool)hasAudio;
- (_Bool)hasMediaCards;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptor:(id)arg1 senderId:(id)arg2 messageContent:(id)arg3 metadata:(id)arg4 releasePolicy:(long long)arg5 state:(long long)arg6;
- (_Bool)isBloopMessage;
- (_Bool)isBroadcastSnap;
- (_Bool)isCashMessage;
- (_Bool)isChatMediaMessage;
- (_Bool)isChatMentionForUsername:(id)arg1;
- (_Bool)isErasableBy:(id)arg1 chatMessageHandlerMap:(id)arg2;
- (_Bool)isErased;
- (_Bool)isExpired;
- (_Bool)isForwardable;
- (_Bool)isGroupMessage;
- (_Bool)isLagunaMessage;
- (_Bool)isMapSnapMessage;
- (_Bool)isMediaContentMessage;
- (_Bool)isMediaSaveMessage;
- (_Bool)isMemoryStoryMessage;
- (_Bool)isMessageOnBirthday:(id)arg1;
- (_Bool)isMissedAudioCallMessage;
- (_Bool)isMissedVideoCallMessage;
- (_Bool)isOpenedBy:(id)arg1;
- (_Bool)isOpenedByAtleastOneRecipient;
- (_Bool)isParticipantLeftMessage;
@property(readonly, nonatomic) _Bool isPendingSnap;
- (_Bool)isPreservableType;
- (_Bool)isPreservedBy:(id)arg1;
- (_Bool)isReadBy:(id)arg1;
- (_Bool)isReceivedOneOnOneSnapSentToSelf;
- (_Bool)isReleased;
- (_Bool)isReleasedBy:(id)arg1;
- (_Bool)isReplayed;
- (_Bool)isRepostSharedSnap;
- (_Bool)isSaved;
- (_Bool)isSavedByParticipant:(id)arg1;
- (_Bool)isSavedSnapMessage;
@property(readonly, nonatomic) _Bool isSavedToMemories;
@property(readonly, nonatomic) _Bool isScreenRecording;
- (_Bool)isScreenshotted;
- (_Bool)isSearchDynamicStoriesMessage;
- (_Bool)isSearchStoryMessage;
- (_Bool)isSendingOrCanBeRetried;
- (_Bool)isSendingOrHasFailed;
- (_Bool)isSent;
- (_Bool)isSentBy:(id)arg1;
- (_Bool)isSilentMessage;
@property(readonly, nonatomic) _Bool isSnapEnvelopeReleased;
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
- (_Bool)isUpdateMessageFrom:(id)arg1;
- (_Bool)isViewedOneOnOneOrSentGroupSnapBy:(id)arg1 messageMetadata:(id)arg2;
- (_Bool)isViewing;
@property(readonly, copy, nonatomic) NSString *iterToken;
@property(readonly, copy, nonatomic) SOJUKhaleesiShare *khaleesiShare;
@property(readonly, copy, nonatomic) NSDictionary *knownChatSequenceNumbers;
- (id)lastToReplay;
- (id)lastToScreenshot;
@property(readonly, nonatomic) _Bool markedForDeletionByServer;
@property(readonly, copy, nonatomic) SCChatMediaContent *media;
@property(readonly, copy, nonatomic) NSArray *mediaCardAttributes;
- (_Bool)mediaHasLoaded;
- (id)mediaList;
@property(readonly, copy, nonatomic) SCChatMediaSave *mediaSave;
@property(readonly, copy, nonatomic) NSString *mediaSendTaskId;
- (long long)mediaType;
@property(readonly, copy, nonatomic) NSArray *medias;
@property(readonly, nonatomic) SCNMessagingMessageContent *messageContent; // @synthesize messageContent=_messageContent;
@property(readonly, copy, nonatomic) SCChatMessageParcel *messageParcel;
- (id)messageRecipientIdentifierForOneOnOne;
@property(readonly, copy, nonatomic) NSString *messageSender;
- (id)messageSenderIdentifier;
@property(readonly, copy, nonatomic) NSDate *messageTimestamp;
- (id)messageTimestampForOrdering;
- (long long)messageType;
@property(readonly, nonatomic) SCNMessagingMessageMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) unsigned long long mischiefVersion;
- (unsigned long long)numMedias;
@property(readonly, copy, nonatomic) SOJUNycShare *nycShare;
@property(readonly, copy, nonatomic) SCChatMediaContent *overlayMedia;
@property(readonly, copy, nonatomic) NSDictionary *preserveState;
- (id)readByParticipants;
- (id)recipient;
@property(readonly, copy, nonatomic) NSString *recipientForOneOnOneChat;
@property(readonly, nonatomic) long long releasePolicy; // @synthesize releasePolicy=_releasePolicy;
@property(readonly, copy, nonatomic) NSDictionary *releaseState;
- (id)replayParticipants;
- (long long)replayStateForViewer:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *replyMedias;
@property(readonly, nonatomic) unsigned long long retentionInMinutes;
- (id)savedParticipants;
@property(readonly, copy, nonatomic) NSDictionary *savedState;
@property(readonly, nonatomic) long long screenCaptureSource;
- (id)screenRecordingState;
- (id)screenshotState;
@property(readonly, copy, nonatomic) SOJUSearchShareStorySnap *searchSnapShare;
@property(readonly, copy, nonatomic) SOJUSearchShareStory *searchStoryShare;
@property(readonly, copy, nonatomic) NSDate *sendStartTimestamp;
@property(readonly, nonatomic) long long sendStatus;
@property(readonly, nonatomic) SCNMessagingUUID *senderId; // @synthesize senderId=_senderId;
- (_Bool)sending;
@property(readonly, copy, nonatomic) NSDate *sentTimestamp;
- (id)sequenceNumber;
- (_Bool)shouldHideSendState;
@property(readonly, nonatomic) _Bool shouldRetryMediaSendTask;
- (_Bool)shouldShowReplayAnimation;
- (_Bool)shouldShowUnreadChatIcon;
@property(readonly, copy, nonatomic) SOJUSnapMetadata *snapMetadata;
- (id)snapNewestOpenTimestamp;
- (id)snapOldestOpenTimestamp;
@property(readonly, copy, nonatomic) NSString *snapServerId;
@property(readonly, copy, nonatomic) SCSnapState *snapState;
@property(readonly, copy, nonatomic) SOJUSnapchatter *snapchatterShare;
- (id)snapchatterUserId;
@property(readonly, nonatomic) long long speedwayStoryV2Source;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) SOJUStoryShare *storyShare;
@property(readonly, copy, nonatomic) NSString *storyTitle;
@property(readonly, copy, nonatomic) NSString *text;
- (id)textFormatAttributes;
- (id)textMediaAttributes;
- (id)textMessageSignature;
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSNumber *typeVersion;
- (_Bool)wouldBeExpiredIfNotSaved;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

