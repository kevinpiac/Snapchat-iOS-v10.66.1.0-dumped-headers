//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCProfileChatMediaSequenceNumberEntry : NSObject <NSCopying>
{
    NSString *_participant;
    long long _sequenceNumber;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithParticipant:(id)arg1 sequenceNumber:(long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *participant; // @synthesize participant=_participant;
@property(readonly, nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;

@end

