//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAPresenceSessionEnd : SCAUserTrackedEvent
{
    NSNumber *groupParticipantCount;
    NSNumber *userWithBitmojiCount;
    NSNumber *presenceMaxCount;
    NSNumber *withGroup;
    NSNumber *durationSec;
    NSNumber *presenceDuration2OrMoreUsers;
    NSNumber *presenceDuration3OrMoreUsers;
    NSNumber *presenceDuration4OrMoreUsers;
    NSNumber *presenceDuration5OrMoreUsers;
    NSNumber *presenceDuration6OrMoreUsers;
    NSNumber *presenceDuration7OrMoreUsers;
    NSNumber *presenceDuration8OrMoreUsers;
    NSNumber *presenceDuration9OrMoreUsers;
    NSNumber *presenceDuration10OrMoreUsers;
    NSNumber *presenceDuration11OrMoreUsers;
    NSNumber *presenceDuration12OrMoreUsers;
    NSNumber *presenceDuration13OrMoreUsers;
    NSNumber *presenceDuration14OrMoreUsers;
    NSNumber *presenceDuration15OrMoreUsers;
    NSNumber *cellViewPosition;
    long long friendshipStatus;
    long long correspondentType;
    NSString *subpageName;
    NSString *conversationId;
    NSString *mischiefId;
    NSString *correspondentId;
    NSString *ghost_correspondent_id;
    NSString *rankingModelId;
    NSString *rankingId;
    NSString *serverRankingId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getCellViewPosition;
- (id)getConversationId;
- (id)getCorrespondentId;
- (long long)getCorrespondentType;
- (double)getDurationSec;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFriendshipStatus;
- (id)getGhost_correspondent_id;
- (long long)getGroupParticipantCount;
- (id)getMischiefId;
- (double)getPerUserSamplingRate;
- (double)getPresenceDuration10OrMoreUsers;
- (double)getPresenceDuration11OrMoreUsers;
- (double)getPresenceDuration12OrMoreUsers;
- (double)getPresenceDuration13OrMoreUsers;
- (double)getPresenceDuration14OrMoreUsers;
- (double)getPresenceDuration15OrMoreUsers;
- (double)getPresenceDuration2OrMoreUsers;
- (double)getPresenceDuration3OrMoreUsers;
- (double)getPresenceDuration4OrMoreUsers;
- (double)getPresenceDuration5OrMoreUsers;
- (double)getPresenceDuration6OrMoreUsers;
- (double)getPresenceDuration7OrMoreUsers;
- (double)getPresenceDuration8OrMoreUsers;
- (double)getPresenceDuration9OrMoreUsers;
- (long long)getPresenceMaxCount;
- (id)getRankingId;
- (id)getRankingModelId;
- (id)getServerRankingId;
- (id)getSubpageName;
- (long long)getUserWithBitmojiCount;
- (_Bool)getWithGroup;
- (id)init;
- (id)initWithUsersPresentAtLeastOnce:(id)arg1 parameters:(id)arg2 correspondentId:(id)arg3;
- (void)setCellViewPosition:(long long)arg1;
- (void)setConversationId:(id)arg1;
- (void)setCorrespondentId:(id)arg1;
- (void)setCorrespondentType:(long long)arg1;
- (void)setDurationSec:(double)arg1;
- (void)setFriendshipStatus:(long long)arg1;
- (void)setGhost_correspondent_id:(id)arg1;
- (void)setGroupParticipantCount:(long long)arg1;
- (void)setMischiefId:(id)arg1;
- (void)setPresenceDuration10OrMoreUsers:(double)arg1;
- (void)setPresenceDuration11OrMoreUsers:(double)arg1;
- (void)setPresenceDuration12OrMoreUsers:(double)arg1;
- (void)setPresenceDuration13OrMoreUsers:(double)arg1;
- (void)setPresenceDuration14OrMoreUsers:(double)arg1;
- (void)setPresenceDuration15OrMoreUsers:(double)arg1;
- (void)setPresenceDuration2OrMoreUsers:(double)arg1;
- (void)setPresenceDuration3OrMoreUsers:(double)arg1;
- (void)setPresenceDuration4OrMoreUsers:(double)arg1;
- (void)setPresenceDuration5OrMoreUsers:(double)arg1;
- (void)setPresenceDuration6OrMoreUsers:(double)arg1;
- (void)setPresenceDuration7OrMoreUsers:(double)arg1;
- (void)setPresenceDuration8OrMoreUsers:(double)arg1;
- (void)setPresenceDuration9OrMoreUsers:(double)arg1;
- (void)setPresenceMaxCount:(long long)arg1;
- (void)setRankingId:(id)arg1;
- (void)setRankingModelId:(id)arg1;
- (void)setServerRankingId:(id)arg1;
- (void)setSubpageName:(id)arg1;
- (void)setUserWithBitmojiCount:(long long)arg1;
- (void)setWithGroup:(_Bool)arg1;

@end

