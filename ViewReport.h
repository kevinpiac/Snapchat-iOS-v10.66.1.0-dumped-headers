//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, ReadReceiptState, SCSCOREUUID;

@interface ViewReport : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long expirationTimestampMs; // @dynamic expirationTimestampMs;
@property(nonatomic) _Bool hasReadReceiptState; // @dynamic hasReadReceiptState;
@property(nonatomic) _Bool hasSnapOwnerId; // @dynamic hasSnapOwnerId;
@property(retain, nonatomic) ReadReceiptState *readReceiptState; // @dynamic readReceiptState;
@property(copy, nonatomic) NSString *snapId; // @dynamic snapId;
@property(retain, nonatomic) SCSCOREUUID *snapOwnerId; // @dynamic snapOwnerId;

@end

