//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCPBUnlockablesGtqUnlockablesResponse, SCPBUnlockablesGtqVenuesResponse;

@interface SCPBUnlockablesGtqServeResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasUnlockables; // @dynamic hasUnlockables;
@property(nonatomic) _Bool hasVenues; // @dynamic hasVenues;
@property(retain, nonatomic) SCPBUnlockablesGtqUnlockablesResponse *unlockables; // @dynamic unlockables;
@property(retain, nonatomic) SCPBUnlockablesGtqVenuesResponse *venues; // @dynamic venues;

@end

