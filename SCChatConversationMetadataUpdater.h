//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatConversationStoreListener-Protocol.h"
#import "SCChatMetadataStoreListener-Protocol.h"
#import "SCConversationWithMetadataAnnouncer-Protocol.h"

@class NSString, SCChatConversationMetadataUpdaterListenerAnnouncer, SCChatV3ConversationStore, SCChatV3MetadataStore;

@interface SCChatConversationMetadataUpdater : NSObject <SCChatConversationStoreListener, SCChatMetadataStoreListener, SCConversationWithMetadataAnnouncer>
{
    SCChatV3ConversationStore *_conversationStore;
    SCChatV3MetadataStore *_metadataStore;
    SCChatConversationMetadataUpdaterListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)_announceUpdateWithConversation:(id)arg1 metadata:(id)arg2;
- (_Bool)addListener:(id)arg1;
- (void)conversationDidUpdate:(id)arg1;
- (void)diskLoadFinishedWithConversations:(id)arg1;
- (id)initWithConversationStore:(id)arg1 metadataStore:(id)arg2;
- (void)metadataDidUpdate:(id)arg1 conversationId:(id)arg2;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

