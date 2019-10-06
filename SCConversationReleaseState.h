//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCConversationReleaseState : NSObject <NSCopying>
{
    NSString *_participant;
    NSArray *_messageReleases;
    NSArray *_snapReleases;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithParticipant:(id)arg1 messageReleases:(id)arg2 snapReleases:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *messageReleases; // @synthesize messageReleases=_messageReleases;
@property(readonly, copy, nonatomic) NSString *participant; // @synthesize participant=_participant;
@property(readonly, copy, nonatomic) NSArray *snapReleases; // @synthesize snapReleases=_snapReleases;

@end

