//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCSNTFNotificationEntityId;

@interface SCSNTFOptInNotification : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(retain, nonatomic) SCSNTFNotificationEntityId *id_p; // @dynamic id_p;
@property(nonatomic) int state; // @dynamic state;
@property(nonatomic) long long stateExpireTimestampMsecs; // @dynamic stateExpireTimestampMsecs;
@property(nonatomic) long long stateTimestampMsecs; // @dynamic stateTimestampMsecs;

@end

