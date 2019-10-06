//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, SCExperimentManager, SCGCDTimer, SCQueuePerformer;
@protocol SCChatMessageSender;

@interface SCChatMessageSendQueue : NSObject
{
    SCQueuePerformer *_performer;
    SCExperimentManager *_experimentManager;
    id <SCChatMessageSender> _messageSender;
    long long _maxRetryTimeInterval;
    long long _nextRetryDelay;
    SCGCDTimer *_timeoutTimer;
    SCGCDTimer *_resendTimer;
    NSMutableDictionary *_failedMessageResult;
    NSMutableDictionary *_lastFailedMessageResult;
    NSMutableArray *_chatMessageQueue;
    NSMutableDictionary *_messageCompletionHandlers;
}

- (void).cxx_destruct;
- (void)_invokeHandlerForMessageWithId:(id)arg1 result:(long long)arg2 response:(id)arg3;
- (void)_message:(id)arg1 handleSendMessageResult:(long long)arg2 response:(id)arg3;
- (void)_sendChatMessages;
- (void)_sendMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_sentMessagesTimedOut;
@property(retain, nonatomic) NSMutableArray *chatMessageQueue; // @synthesize chatMessageQueue=_chatMessageQueue;
- (id)initWithMaxRetryInterval:(long long)arg1 messageSender:(id)arg2 experimentManager:(id)arg3 performer:(id)arg4;
- (id)initWithMessageSender:(id)arg1 experimentManager:(id)arg2;
- (void)message:(id)arg1 handleSendMessageResult:(long long)arg2 response:(id)arg3;
@property(retain, nonatomic) NSMutableDictionary *messageCompletionHandlers; // @synthesize messageCompletionHandlers=_messageCompletionHandlers;
- (void)sendMessage:(id)arg1 withHandler:(CDUnknownBlockType)arg2;

@end
