//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Value, GPBInt64Value, NSData, SCAdsInventoryTrackRequest;

@interface SCAdsSingleTrack : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt64Value *creationTimestampMs; // @dynamic creationTimestampMs;
@property(copy, nonatomic) NSData *encryptedUserTrackData; // @dynamic encryptedUserTrackData;
@property(nonatomic) _Bool hasCreationTimestampMs; // @dynamic hasCreationTimestampMs;
@property(nonatomic) _Bool hasInventoryTrackRequest; // @dynamic hasInventoryTrackRequest;
@property(nonatomic) _Bool hasNumberOfAttempts; // @dynamic hasNumberOfAttempts;
@property(retain, nonatomic) SCAdsInventoryTrackRequest *inventoryTrackRequest; // @dynamic inventoryTrackRequest;
@property(retain, nonatomic) GPBInt32Value *numberOfAttempts; // @dynamic numberOfAttempts;

@end

