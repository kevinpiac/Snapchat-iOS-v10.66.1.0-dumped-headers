//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCSFFSChatsState, SCSFFSSnapsState;

@interface SCSFFSConversationState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSFFSChatsState *chatsState; // @dynamic chatsState;
@property(nonatomic) _Bool hasChatsState; // @dynamic hasChatsState;
@property(nonatomic) _Bool hasSnapsState; // @dynamic hasSnapsState;
@property(nonatomic) _Bool isConversationPending; // @dynamic isConversationPending;
@property(retain, nonatomic) SCSFFSSnapsState *snapsState; // @dynamic snapsState;

@end

