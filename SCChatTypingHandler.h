//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCRequest;
@protocol SCChatConversationAPI, SCTalkSession;

@interface SCChatTypingHandler : NSObject
{
    id <SCChatConversationAPI> _conversationAPI;
    NSString *_currentTypingState;
    SCRequest *_currentRequest;
    id <SCTalkSession> _talkSession;
}

- (void).cxx_destruct;
- (void)_resetCurrentRequest;
- (_Bool)_shouldTriggerNotificationAfterTypingStateUpdate:(id)arg1;
- (void)_updateTalkSessionWithTypingState:(id)arg1;
- (id)initWithConversationAPI:(id)arg1;
@property(nonatomic) __weak id <SCTalkSession> talkSession; // @synthesize talkSession=_talkSession;
- (void)updateTypingStateWithState:(id)arg1 groupConversationId:(id)arg2 sequenceNumbers:(id)arg3;
- (void)updateTypingStateWithState:(id)arg1 recipient:(id)arg2 sequenceNumbers:(id)arg3;

@end
