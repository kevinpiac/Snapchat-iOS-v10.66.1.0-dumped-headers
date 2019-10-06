//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCTPresenceParticipant.h"

#import "SCTChatPresencePillDelegate-Protocol.h"
#import "SCTSortableChatPresenceParticipant-Protocol.h"

@class NSString, SCTChatPresencePill, SCTV3SpeechActivityListenerAnnouncer;

@interface SCTChatPresenceParticipant : SCTPresenceParticipant <SCTSortableChatPresenceParticipant, SCTChatPresencePillDelegate>
{
    SCTV3SpeechActivityListenerAnnouncer *_speechActivityAnnouncer;
    unsigned long long _media;
    long long _typingState;
    SCTChatPresencePill *_pill;
}

- (void).cxx_destruct;
- (void)_commonInit;
- (id)audioViewForPresencePill:(id)arg1;
- (id)bitmojiForPresencePill:(id)arg1;
- (id)colorForPresencePill:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithUsername:(id)arg1 displayName:(id)arg2 presenceColor:(id)arg3;
- (id)initWithUsername:(id)arg1 displayName:(id)arg2 uniqueLabel:(id)arg3 presenceColor:(id)arg4 bitmojiAvatarId:(id)arg5 pill:(id)arg6 speechActivityAnnouncer:(id)arg7;
- (id)labelTextForPresencePill:(id)arg1;
@property(nonatomic) unsigned long long media; // @synthesize media=_media;
@property(readonly, nonatomic) SCTChatPresencePill *pill; // @synthesize pill=_pill;
@property(readonly, nonatomic) long long typingState; // @synthesize typingState=_typingState;
- (void)updateMedia:(unsigned long long)arg1;
- (void)updateTypingState:(long long)arg1;
- (void)updateUniqueLabel:(id)arg1;
- (id)videoViewForPresencePill:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
