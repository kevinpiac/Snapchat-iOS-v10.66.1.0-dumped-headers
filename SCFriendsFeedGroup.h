//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SCFriendsFeedGroup : NSObject <NSCopying>
{
    _Bool _isStoryMuted;
    NSString *_groupName;
    NSArray *_participants;
    NSDictionary *_usernameToParticipantsMap;
    NSDictionary *_userIdToParticipantsMap;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (unsigned long long)hash;
- (id)initWithGroupName:(id)arg1 participants:(id)arg2 usernameToParticipantsMap:(id)arg3 userIdToParticipantsMap:(id)arg4 isStoryMuted:(_Bool)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isStoryMuted; // @synthesize isStoryMuted=_isStoryMuted;
@property(readonly, copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, copy, nonatomic) NSDictionary *userIdToParticipantsMap; // @synthesize userIdToParticipantsMap=_userIdToParticipantsMap;
@property(readonly, copy, nonatomic) NSDictionary *usernameToParticipantsMap; // @synthesize usernameToParticipantsMap=_usernameToParticipantsMap;

@end

