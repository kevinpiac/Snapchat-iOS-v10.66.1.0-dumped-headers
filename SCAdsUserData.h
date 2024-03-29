//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Value, GPBInt64Value, NSData, NSString, SCAdsABTest, SCAdsDebugConfig;

@interface SCAdsUserData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCAdsABTest *abTest; // @dynamic abTest;
@property(retain, nonatomic) GPBInt32Value *age; // @dynamic age;
@property(retain, nonatomic) GPBInt64Value *createdTimestampMillis; // @dynamic createdTimestampMillis;
@property(retain, nonatomic) SCAdsDebugConfig *debugConfig; // @dynamic debugConfig;
@property(nonatomic) int gender; // @dynamic gender;
@property(nonatomic) _Bool hasAbTest; // @dynamic hasAbTest;
@property(nonatomic) _Bool hasAge; // @dynamic hasAge;
@property(nonatomic) _Bool hasCreatedTimestampMillis; // @dynamic hasCreatedTimestampMillis;
@property(nonatomic) _Bool hasDebugConfig; // @dynamic hasDebugConfig;
@property(nonatomic) _Bool isAdsHoldout; // @dynamic isAdsHoldout;
@property(nonatomic) _Bool isEmployee; // @dynamic isEmployee;
@property(nonatomic) _Bool isNewUser; // @dynamic isNewUser;
@property(copy, nonatomic) NSData *said; // @dynamic said;
@property(nonatomic) int snapUserStatus; // @dynamic snapUserStatus;
@property(nonatomic) _Bool storyAdsInUserStoriesEnabled; // @dynamic storyAdsInUserStoriesEnabled;
@property(copy, nonatomic) NSString *targetingToken; // @dynamic targetingToken;

@end

