//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCSCOREUUID, SCSFFSStoryOwner_GroupChatGroupStoryOwner, SCSFFSStoryOwner_PrivateGroupStoryOwner;

@interface SCSFFSStoryOwner : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSFFSStoryOwner_GroupChatGroupStoryOwner *groupChatGroupStoryOwner; // @dynamic groupChatGroupStoryOwner;
@property(readonly, nonatomic) int ownerOneOfCase; // @dynamic ownerOneOfCase;
@property(retain, nonatomic) SCSFFSStoryOwner_PrivateGroupStoryOwner *privateGroupStoryOwner; // @dynamic privateGroupStoryOwner;
@property(retain, nonatomic) SCSCOREUUID *userId; // @dynamic userId;

@end

