//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCMEMapReplyContext_ExploreUpdate, SCMEMapReplyContext_LocationUpdate, SCMEMapReplyContext_Status;

@interface SCMEMapReplyContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int activityOneOfCase; // @dynamic activityOneOfCase;
@property(copy, nonatomic) NSString *avatarId; // @dynamic avatarId;
@property(retain, nonatomic) SCMEMapReplyContext_ExploreUpdate *explore; // @dynamic explore;
@property(retain, nonatomic) SCMEMapReplyContext_LocationUpdate *location; // @dynamic location;
@property(retain, nonatomic) SCMEMapReplyContext_Status *status; // @dynamic status;
@property(copy, nonatomic) NSString *stickerId; // @dynamic stickerId;
@property(nonatomic) long long timestampMs; // @dynamic timestampMs;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

