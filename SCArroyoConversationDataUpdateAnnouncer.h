//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCArroyoConversationDataUpdateAnnouncer-Protocol.h"
#import "SCNMessagingConversationManagerDelegate-Protocol.h"

@class SCArroyoConversationDataUpdateListenerAnnouncer;

@interface SCArroyoConversationDataUpdateAnnouncer : NSObject <SCNMessagingConversationManagerDelegate, SCArroyoConversationDataUpdateAnnouncer>
{
    SCArroyoConversationDataUpdateListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (id)init;
- (void)onConversationCreated:(id)arg1;
- (void)onConversationRemoved:(id)arg1;
- (void)onConversationUpdated:(id)arg1 conversation:(id)arg2 updatedMessages:(id)arg3 removedMessages:(id)arg4;
- (void)onSendComplete:(id)arg1;
- (void)removeListener:(id)arg1;

@end

