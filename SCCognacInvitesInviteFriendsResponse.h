//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, SCCognacInvitesInviteError;

@interface SCCognacInvitesInviteFriendsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSenderError; // @dynamic hasSenderError;
@property(retain, nonatomic) NSMutableDictionary *recipientErrors; // @dynamic recipientErrors;
@property(readonly, nonatomic) unsigned long long recipientErrors_Count; // @dynamic recipientErrors_Count;
@property(retain, nonatomic) SCCognacInvitesInviteError *senderError; // @dynamic senderError;

@end

