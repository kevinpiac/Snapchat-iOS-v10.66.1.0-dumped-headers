//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAppNotificationProcessor-Protocol.h"

@class NSMutableSet, SCChatConversationManager, SCChatMediaRequestManager, SCChatV3ConversationStore, SCChatV3MediaPrefetcher, SCChatV3MessageReceiver, SCLazy, SCUserSession;
@protocol SCChatMessageActionHandling, SCFideliusProtocol, SCNotificationManager, SCSnapLogger;

@interface SCChatV3NotificationProcessor : NSObject <SCAppNotificationProcessor>
{
    id <SCNotificationManager> _notificationManager;
    SCChatConversationManager *_conversationManager;
    SCChatV3ConversationStore *_conversationStore;
    id <SCSnapLogger> _snapLogger;
    SCLazy *_receiveFlowLogger;
    id <SCFideliusProtocol> _fideliusManager;
    SCChatMediaRequestManager *_mediaRequestManager;
    SCChatV3MediaPrefetcher *_mediaPrefetcher;
    id <SCChatMessageActionHandling> _actionHandler;
    SCChatV3MessageReceiver *_messageReceiver;
    SCLazy *_snapchattersDataFetcher;
    SCUserSession *_userSession;
    NSMutableSet *_repostedSnapIds;
}

- (void).cxx_destruct;
- (void)_addNotification:(id)arg1 completion:(CDUnknownBlockType)arg2 systemCompletion:(id)arg3;
- (void)_applyBestFriendsNotificationSoundIfNecessaryAndAddNotification:(id)arg1 conversationId:(id)arg2 messageId:(id)arg3 completion:(CDUnknownBlockType)arg4 systemCompletion:(id)arg5;
- (void)_conversation:(id)arg1 processNotification:(id)arg2 message:(id)arg3 groupVersion:(id)arg4 systemCompletion:(id)arg5;
- (void)_fetchConversation:(id)arg1 existingConversation:(id)arg2 messageId:(id)arg3 notification:(id)arg4 fetchReason:(long long)arg5 systemCompletion:(id)arg6;
- (void)_handleSnapchatterFetchCompletionWithSnapchatters:(id)arg1 notification:(id)arg2 completion:(CDUnknownBlockType)arg3 systemCompletion:(id)arg4;
- (void)_repostNotification:(id)arg1 messageId:(id)arg2 conversation:(id)arg3 completion:(CDUnknownBlockType)arg4 systemCompletion:(id)arg5;
- (void)_saveStateAndProcessNotificationForMessageId:(id)arg1 conversation:(id)arg2 messageMetadata:(id)arg3 notification:(id)arg4 fetchReason:(long long)arg5 completion:(CDUnknownBlockType)arg6 systemCompletion:(id)arg7;
- (id)initWithNotificationManager:(id)arg1 conversationManager:(id)arg2 conversationStore:(id)arg3 snapLogger:(id)arg4 fideliusManager:(id)arg5 mediaRequestManager:(id)arg6 mediaPrefetcher:(id)arg7 messageActionHandler:(id)arg8 messageReceiver:(id)arg9 receiveFlowLogger:(id)arg10 snapchattersDataFetcher:(id)arg11 userSession:(id)arg12;
- (void)processNotification:(id)arg1;
- (long long)shouldFilterNotification:(id)arg1;
- (long long)shouldFilterNotification:(id)arg1 withSystemCompletion:(id)arg2;

@end

