//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@protocol SCChatRenderingConversation <NSObject>
- (_Bool)doNotDisturb;
- (_Bool)doNotDisturbMentions;
- (_Bool)earlierContentExists;
- (_Bool)hadAnyMessages;
- (_Bool)hasUnreadMessagesForUser:(NSString *)arg1;
- (long long)historyLoadingStatus;
- (NSString *)id;
- (_Bool)isArroyoConversation;
- (_Bool)isGroupConversation;
- (_Bool)isPending;
- (struct NSDictionary *)knownChatSequenceNumsForViewing;
- (NSNumber *)lastCommitedMessageId;
- (NSDate *)lastInteractionTimestamp;
- (NSNumber *)lastSeenMessageIdForUserId:(NSString *)arg1;
- (NSDate *)lastSeenMessageTimestamp;
- (unsigned long long)messageRetentionInMinutes;
- (NSDictionary *)messagesDictionary;
- (NSArray *)messagesForRendering;
- (long long)migrationState;
- (NSArray *)participants;
- (NSString *)recipientUsernameForOneOnOneWithCurrentUser:(NSString *)arg1;
- (NSDictionary *)seenChatSequenceNums;
- (struct NSDictionary *)stickerUsageHistory;
- (NSString *)title;
@end
