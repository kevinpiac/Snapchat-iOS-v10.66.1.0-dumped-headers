//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUpdateMediaLoadStateHandler-Protocol.h"

@class NSString, SCChatMediaReferenceManager, SCChatV3ConversationStore, SCChatV3MessageStateHandler, SCChatV3MetadataStore;
@protocol SCChatLogger;

@interface SCChatMediaStateManager : NSObject <SCUpdateMediaLoadStateHandler>
{
    SCChatV3ConversationStore *_conversationStore;
    SCChatV3MetadataStore *_metadataStore;
    SCChatMediaReferenceManager *_mediaReferenceManager;
    SCChatV3MessageStateHandler *_messageStateHandler;
    id <SCChatLogger> _logger;
}

- (void).cxx_destruct;
- (void)_updateMediaStateForMediaId:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 mediaLoadState:(long long)arg4;
- (id)initWithConversationStore:(id)arg1 withMetadataStore:(id)arg2 withMessageStateHandler:(id)arg3 withMediaReferenceManager:(id)arg4 withLogger:(id)arg5;
- (void)updateAllMessagesForMediaId:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 messageBodyType:(long long)arg4 mediaLoadState:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
