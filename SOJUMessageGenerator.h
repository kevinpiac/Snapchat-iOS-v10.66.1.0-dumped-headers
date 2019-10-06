//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCExperimentManager;

@interface SOJUMessageGenerator : NSObject
{
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (id)_bumpChatSeqNumForSender:(id)arg1 forConversation:(id)arg2;
- (id)_bumpStateUpdateSeqNumForSender:(id)arg1 forConversation:(id)arg2;
- (id)_conversation:(id)arg1 createHeaderForSender:(id)arg2;
- (id)_conversation:(id)arg1 createHeaderForSender:(id)arg2 recipients:(id)arg3;
- (id)_conversation:(id)arg1 createHeaderForSender:(id)arg2 toRecipients:(id)arg3;
- (id)_createBodyFromChatMessage:(id)arg1;
- (id)_createSOJUMediasFromChatMediaContents:(id)arg1;
- (id)_createSignedPayloadFromConversation:(id)arg1;
- (id)_updateSequenceNumberInMessage:(id)arg1 conversation:(id)arg2;
- (id)bumpSeqNumIfNecessaryForSender:(id)arg1 forConversation:(id)arg2 messageType:(long long)arg3;
- (id)createConnectedCallMessageForSender:(id)arg1 conversation:(id)arg2 audio:(_Bool)arg3 time:(id)arg4;
- (id)createMessageEraseMessageForMessageId:(id)arg1 messageSeqNum:(id)arg2 modifyConversation:(id)arg3 withParticipant:(id)arg4 time:(id)arg5;
- (id)createMessageFromChatMessage:(id)arg1 modifyConversation:(id)arg2;
- (id)createMessagePreservationMessageForMessageId:(id)arg1 modifyConversation:(id)arg2 withParticipant:(id)arg3 preserved:(_Bool)arg4 time:(id)arg5 originalMessageSeqNum:(id)arg6;
- (id)createMessageStateMessageForMessageId:(id)arg1 modifyConversation:(id)arg2 withParticipant:(id)arg3 messageState:(long long)arg4 version:(unsigned long long)arg5 originalMessageSender:(id)arg6 originalMessageSeqNum:(id)arg7 time:(id)arg8;
- (id)createPresenceMessageForConversation:(id)arg1 sender:(id)arg2 recipients:(id)arg3 legacyPresences:(id)arg4 extendedPresences:(id)arg5 presencesMetadata:(id)arg6 sequenceNumber:(id)arg7 time:(id)arg8;
- (id)createReleaseTypeReleaseMessageForParticipant:(id)arg1 modifyConversation:(id)arg2 atTime:(id)arg3;
- (id)createSnapStateMessageForSender:(id)arg1 modifyConversation:(id)arg2 snapId:(id)arg3 snapSeqNum:(id)arg4 chatMediaId:(id)arg5 state:(long long)arg6 replayState:(long long)arg7 screenshotCount:(id)arg8 screenCaptureShotCount:(id)arg9 screenCaptureRecordingCount:(id)arg10 time:(id)arg11;
- (id)createV2SnapStateMessageForSnapId:(id)arg1 conversation:(id)arg2 sender:(id)arg3 viewed:(_Bool)arg4 replayState:(long long)arg5 screenshotCount:(long long)arg6 screenCaptureShotCount:(long long)arg7 screenCaptureRecordingCount:(long long)arg8 viewedDate:(id)arg9;
- (id)createV2TypeReleaseMessageForParticipant:(id)arg1 modifyConversation:(id)arg2 releaseType:(long long)arg3 knownChatSequenceNumbers:(struct NSDictionary *)arg4 snapIdsToRelease:(id)arg5;
- (id)createV3TypeReleaseMessageForParticipant:(id)arg1 modifyConversation:(id)arg2 atTime:(id)arg3;
- (id)createVolatileMessageForSender:(id)arg1 conversation:(id)arg2 toRecipients:(id)arg3 talkCorePayload:(id)arg4 time:(id)arg5;
- (id)initWithExperimentManager:(id)arg1;
- (id)nextSeqNumForSender:(id)arg1 conversation:(id)arg2 messageType:(long long)arg3;
- (id)regenerateSequenceNumberForMessage:(id)arg1 inConversation:(id)arg2;
- (id)snapStateSnapIdFromLocalSnapId:(id)arg1;

@end

