//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSSet, NSString, SCChatDraft, SOJULastMischiefContent;
@protocol SCChatGroup;

@interface SCChatConversationV3Builder : NSObject
{
    NSString *_id;
    id <SCChatGroup> _group;
    long long _historyLoadingStatus;
    long long _loadingStatus;
    NSArray *_messages;
    long long _sequenceSyncState;
    struct NSDictionary *_knownChatSequenceNums;
    struct NSDictionary *_knownStateUpdateSequenceNums;
    struct NSDictionary *_knownSnapSequenceNums;
    struct NSDictionary *_pageKnownChatSequenceNums;
    struct NSDictionary *_earliestKnownChatSequenceNums;
    NSDictionary *_seenChatSequenceNums;
    _Bool _earlierContentExists;
    struct NSDictionary *_stickerUsageHistory;
    NSArray *_failedSilentWireMessages;
    NSDictionary *_pendingSnapUpdates;
    SCChatDraft *_chatDraft;
    NSDate *_lastInteractionTimestamp;
    NSDate *_lastClearedTimestamp;
    _Bool _notificationStatus;
    NSDictionary *_lastReleasedSnapTimestamp;
    NSDictionary *_lastReleasedSnapId;
    SOJULastMischiefContent *_lastMischiefContent;
    long long _lastSyncContentType;
    NSDate *_lastOpenSnapTimestamp;
    NSDate *_lastOpenChatTimestamp;
    NSArray *_participantUsernames;
    NSString *_iterToken;
    NSString *_authMac;
    NSString *_authPayload;
    NSString *_conversationAuthType;
    unsigned long long _messageRetentionInMinutes;
    NSSet *_unknownMessageTypes;
    _Bool _isCognacNotificationMuted;
    long long _migrationState;
}

+ (id)forConversationGroup:(id)arg1;
+ (id)setDefaultsForParticipants:(id)arg1 withConversationBuilder:(id)arg2;
+ (id)withChatConversationV3:(id)arg1;
+ (id)withChatConversationV3:(id)arg1 addMessages:(id)arg2;
+ (id)withChatConversationV3:(id)arg1 modifyAllMessageswithMutationBlock:(CDUnknownBlockType)arg2;
+ (id)withChatConversationV3:(id)arg1 removeMessageIds:(id)arg2;
+ (id)withChatConversationV3:(id)arg1 removeMessages:(id)arg2;
- (void).cxx_destruct;
- (id)build;
- (id)setAuthMac:(id)arg1;
- (id)setAuthPayload:(id)arg1;
- (id)setChatDraft:(id)arg1;
- (id)setConversationAuthType:(id)arg1;
- (id)setEarlierContentExists:(_Bool)arg1;
- (id)setEarliestKnownChatSequenceNums:(struct NSDictionary *)arg1;
- (id)setFailedSilentWireMessages:(id)arg1;
- (id)setGroup:(id)arg1;
- (id)setHistoryLoadingStatus:(long long)arg1;
- (id)setId:(id)arg1;
- (id)setIsCognacNotificationMuted:(_Bool)arg1;
- (id)setIterToken:(id)arg1;
- (id)setKnownChatSequenceNums:(struct NSDictionary *)arg1;
- (id)setKnownSnapSequenceNums:(struct NSDictionary *)arg1;
- (id)setKnownStateUpdateSequenceNums:(struct NSDictionary *)arg1;
- (id)setLastClearedTimestamp:(id)arg1;
- (id)setLastInteractionTimestamp:(id)arg1;
- (id)setLastMischiefContent:(id)arg1;
- (id)setLastOpenChatTimestamp:(id)arg1;
- (id)setLastOpenSnapTimestamp:(id)arg1;
- (id)setLastReleasedSnapId:(id)arg1;
- (id)setLastReleasedSnapTimestamp:(id)arg1;
- (id)setLastSyncContentType:(long long)arg1;
- (id)setLoadingStatus:(long long)arg1;
- (id)setMessageRetentionInMinutes:(unsigned long long)arg1;
- (id)setMessages:(id)arg1;
- (id)setMigrationState:(long long)arg1;
- (id)setNotificationStatus:(_Bool)arg1;
- (id)setPageKnownChatSequenceNums:(struct NSDictionary *)arg1;
- (id)setParticipantUsernames:(id)arg1;
- (id)setPendingSnapUpdates:(id)arg1;
- (id)setSeenChatSequenceNums:(id)arg1;
- (id)setSequenceSyncState:(long long)arg1;
- (id)setStickerUsageHistory:(struct NSDictionary *)arg1;
- (id)setUnknownMessageTypes:(id)arg1;

@end

