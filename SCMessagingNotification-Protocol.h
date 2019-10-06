//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@protocol SCMessagingNotification <NSObject>
@property(readonly, nonatomic) _Bool alreadyProcessedByChat;
@property(readonly, nonatomic) NSString *chatMessageId;
@property(readonly, nonatomic) NSArray *chatMessages;
@property(readonly, nonatomic) NSNumber *chatSeqNum;
@property(readonly, nonatomic) NSDictionary *conversation;
@property(readonly, nonatomic) _Bool conversationFetchSucceeded;
@property(readonly, nonatomic) NSString *conversationID;
@property(readonly, nonatomic) NSString *entryExternalId;
@property(readonly, nonatomic) NSNumber *entrySource;
@property(readonly, nonatomic) NSDictionary *fideliusUpdatePackages;
@property(readonly, nonatomic, getter=isForChatV3) _Bool forChatV3;
@property(readonly, nonatomic, getter=isForMessaging) _Bool forMessaging;
@property(readonly, nonatomic, getter=isForTyping) _Bool forTyping;
@property(readonly, nonatomic) NSString *rawSnapId;
@property(readonly, nonatomic) NSString *snapId;
@property(readonly, nonatomic) NSDictionary *snapMetadata;
@end

