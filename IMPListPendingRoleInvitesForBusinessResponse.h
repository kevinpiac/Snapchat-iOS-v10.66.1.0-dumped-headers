//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface IMPListPendingRoleInvitesForBusinessResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *invitesArray; // @dynamic invitesArray;
@property(readonly, nonatomic) unsigned long long invitesArray_Count; // @dynamic invitesArray_Count;
@property(copy, nonatomic) NSString *nextPageId; // @dynamic nextPageId;
@property(copy, nonatomic) NSString *pageId; // @dynamic pageId;

@end
