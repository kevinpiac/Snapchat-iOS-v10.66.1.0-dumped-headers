//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCConversationSequenceState : NSObject <NSCopying>
{
    NSString *_participant;
    unsigned long long _chatSequence;
    unsigned long long _stateUpdateSequence;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long chatSequence; // @synthesize chatSequence=_chatSequence;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithParticipant:(id)arg1 chatSequence:(unsigned long long)arg2 stateUpdateSequence:(unsigned long long)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *participant; // @synthesize participant=_participant;
@property(readonly, nonatomic) unsigned long long stateUpdateSequence; // @synthesize stateUpdateSequence=_stateUpdateSequence;

@end
