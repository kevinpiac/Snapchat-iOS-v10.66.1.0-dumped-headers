//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, SCNMessagingConversation, SCNMessagingSendMessageResult, SCNMessagingUUID;

@protocol SCNMessagingConversationManagerDelegate
- (void)onConversationCreated:(SCNMessagingConversation *)arg1;
- (void)onConversationRemoved:(SCNMessagingUUID *)arg1;
- (void)onConversationUpdated:(SCNMessagingUUID *)arg1 conversation:(SCNMessagingConversation *)arg2 updatedMessages:(NSArray *)arg3 removedMessages:(NSArray *)arg4;
- (void)onSendComplete:(SCNMessagingSendMessageResult *)arg1;
@end
