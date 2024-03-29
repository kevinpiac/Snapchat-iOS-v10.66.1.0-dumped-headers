//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatConversationStoreListener-Protocol.h"

@class NSString, SCConversationPrefetchResponses, SCExtensionSharedFile, SCQueuePerformer;
@protocol SCChatPrefetchResponseProcessing;

@interface SCConversationPrefetchReader : NSObject <SCChatConversationStoreListener>
{
    SCQueuePerformer *_performer;
    SCExtensionSharedFile *_sharedFile;
    SCConversationPrefetchResponses *_responses;
    id <SCChatPrefetchResponseProcessing> _prefetchResponseProcessor;
    NSString *_userId;
}

- (void).cxx_destruct;
- (void)_processAndClearResponsesWithTriggerType:(long long)arg1;
- (void)_willEnterForeground;
- (void)conversationDidUpdate:(id)arg1;
- (void)diskLoadFinishedWithConversations:(id)arg1;
- (id)initWithUserId:(id)arg1 prefetchResponseProcessor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

