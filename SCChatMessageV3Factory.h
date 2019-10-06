//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCChatMessageV3Factory : NSObject
{
}

+ (id)_createChatMediaContentFromGenericSnap:(id)arg1 key:(id)arg2;
+ (id)_createChatMediaContentFromReceivedSnapMessage:(id)arg1 key:(id)arg2;
+ (id)_createFideliusEncryptionFromGenericReceivedSnap:(id)arg1;
+ (id)_createFideliusEncryptionFromReceivedSnapMessage:(id)arg1;
+ (id)_messageBuilderFromConversationMessage:(id)arg1;
+ (void)_setBatchedMediaProps:(id)arg1 onMessageBuilder:(id)arg2;
+ (void)_setMediaPropsWithMediaType:(long long)arg1 body:(id)arg2 onMessageBuilder:(id)arg3;
+ (void)_setParcelContentWithBody:(id)arg1 onMessageBuilder:(id)arg2;
+ (void)_setParticipantForOneOnOneChatForConversation:(id)arg1 sender:(id)arg2 messageBuilder:(id)arg3;
+ (void)_setParticipantPreserves:(id)arg1 onMessageBuilder:(id)arg2 fromDictionary:(id)arg3;
+ (void)_setParticipantReleasesForConversation:(id)arg1 onMessageBuilder:(id)arg2 withSender:(id)arg3 timestamp:(id)arg4;
+ (void)_setParticipantSavesForConversation:(id)arg1 onMessageBuilder:(id)arg2 fromDictionary:(id)arg3;
+ (void)_setParticipantsInformationForConversation:(id)arg1 messageBuilder:(id)arg2 message:(id)arg3;
+ (void)_setParticipantsInformationForConversation:(id)arg1 messageBuilder:(id)arg2 recievedMessage:(id)arg3;
+ (void)_setParticipantsInformationForConversation:(id)arg1 messageBuilder:(id)arg2 sender:(id)arg3 timestamp:(id)arg4 preservationDictionary:(id)arg5 saveDictionary:(id)arg6;
+ (void)_setParticipantsInformationForConversation:(id)arg1 messageBuilder:(id)arg2 snap:(id)arg3 sender:(id)arg4;
+ (void)_setReplyMedias:(id)arg1 onMessageBuilder:(id)arg2;
+ (void)_setStickerProps:(id)arg1 onMessageBuilder:(id)arg2;
+ (void)_setTextProps:(id)arg1 onMessageBuilder:(id)arg2;
+ (id)_snapMetadataWithDecryptedLensMetadata:(id)arg1 usingKey:(id)arg2 iv:(id)arg3;
+ (id)conversation:(id)arg1 createCallMessageForType:(long long)arg2 sender:(id)arg3;
+ (id)conversation:(id)arg1 createCameraRollSaveWithMessageId:(id)arg2 messageSender:(id)arg3 messageBodyType:(long long)arg4 mediaList:(id)arg5 username:(id)arg6;
+ (id)conversation:(id)arg1 createMediaMessageWithBodyType:(long long)arg2 preferredMessageId:(id)arg3 fromSender:(id)arg4 withMedias:(id)arg5 messageMetadata:(id)arg6;
+ (id)conversation:(id)arg1 createScreenCaptureMessageWithType:(long long)arg2 withSource:(long long)arg3 fromSender:(id)arg4;
+ (id)conversation:(id)arg1 createStatusMessageWithBodyType:(long long)arg2 fromSender:(id)arg3;
+ (id)conversation:(id)arg1 createStickerMessage:(id)arg2 fromSender:(id)arg3;
+ (id)conversation:(id)arg1 createTextMessage:(id)arg2 fromSender:(id)arg3 withAttributes:(id)arg4 customMediaCardAttributes:(id)arg5;
+ (id)conversation:(id)arg1 newMessageBuilderFromSender:(id)arg2;
+ (id)conversation:(id)arg1 newMessageBuilderFromSender:(id)arg2 messageTimestamp:(id)arg3;
+ (id)createMessageFromSOJU:(id)arg1 withConversation:(id)arg2;
+ (id)createMessageFromSOJUUpdateMessage:(id)arg1 withConversation:(id)arg2;
+ (id)createMessageIfUnwrappingSucceedFromGenericSnap:(id)arg1 withConversation:(id)arg2 username:(id)arg3 fideliusHelper:(id)arg4 cachedKey:(id)arg5 source:(id)arg6 autoShakeToReporter:(id)arg7;
+ (id)createMessageIfUnwrappingSucceedFromReceivedSnapMessage:(id)arg1 withConversation:(id)arg2 withFideliusHelper:(id)arg3 source:(id)arg4 autoShakeToReporter:(id)arg5;
+ (id)createSDKParcelMessageWithContent:(id)arg1 conversation:(id)arg2 type:(id)arg3 media:(id)arg4 tag:(id)arg5 tagVersion:(id)arg6 fromSender:(id)arg7;
+ (id)eraseMessageContentsFromMessage:(id)arg1;
+ (id)releaseMessage:(id)arg1 forUsername:(id)arg2 atTime:(id)arg3;
+ (id)releaseSnapEnvelope:(id)arg1;
+ (id)removeMediaId:(id)arg1 fromMessage:(id)arg2;
+ (id)removeReleaseStateForUsername:(id)arg1 forMessage:(id)arg2;
+ (id)resetReplayStateInSnap:(id)arg1;
+ (id)setMediaLoadState:(long long)arg1 forMessage:(id)arg2 forMediaId:(id)arg3;
+ (id)setMediaUploadState:(long long)arg1 forMessage:(id)arg2 forMediaId:(id)arg3;
+ (id)setMessageAsUnpreservedByAllParticipants:(id)arg1;
+ (id)setMessageAsUnsavedByAllParticipants:(id)arg1;
+ (id)setPreserved:(_Bool)arg1 forUsername:(id)arg2 forMessage:(id)arg3;
+ (id)setSaved:(_Bool)arg1 forUsername:(id)arg2 forMessage:(id)arg3;
+ (id)setSavedToMemories:(id)arg1;
+ (id)snapIdFromReceivedSnapId:(id)arg1;
+ (id)updatePlaybackStateAfterFinishViewingForSnap:(id)arg1 viewerUsername:(id)arg2 hasAvailableReplayCredits:(_Bool)arg3;
+ (id)updatePlaybackStateToLoadedReplayForSnap:(id)arg1 withViewer:(id)arg2;
+ (id)updatePlaybackStateToViewingOrReplayingForSnap:(id)arg1 withOpenTimestamp:(id)arg2 stackId:(id)arg3 isFirstSnapInStack:(_Bool)arg4;
+ (id)updateSnapStateAfterFinishViewingSnap:(id)arg1 playbackState:(long long)arg2 viewerUsername:(id)arg3;
+ (id)updateSnapStateForOpeningSnap:(id)arg1 withOpenTimestamp:(id)arg2 stackId:(id)arg3 isFirstSnapInStack:(_Bool)arg4;
+ (id)updateSnapStateWithNewScreenRecordingsForSnap:(id)arg1 withViewer:(id)arg2;
+ (id)updateSnapStateWithNewScreenshotForSnap:(id)arg1 withViewer:(id)arg2;
+ (id)updateSnapStateWithReplayAnimationState:(long long)arg1 forSnap:(id)arg2;

@end

