//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCSFFSConversationState, SCSFFSFriendEntity, SCSFFSGroupEntity;

@interface SCSFFSFeedEntry : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSFFSConversationState *conversationState; // @dynamic conversationState;
@property(nonatomic) _Bool deleted; // @dynamic deleted;
@property(readonly, nonatomic) int entityOneOfCase; // @dynamic entityOneOfCase;
@property(retain, nonatomic) SCSFFSFriendEntity *friendEntity; // @dynamic friendEntity;
@property(retain, nonatomic) SCSFFSGroupEntity *groupEntity; // @dynamic groupEntity;
@property(nonatomic) _Bool hasConversationState; // @dynamic hasConversationState;
@property(retain, nonatomic) NSMutableArray *storyStateArray; // @dynamic storyStateArray;
@property(readonly, nonatomic) unsigned long long storyStateArray_Count; // @dynamic storyStateArray_Count;

@end

