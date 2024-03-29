//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface MLBBackgroundUpdateRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasTargetHash; // @dynamic hasTargetHash;
@property(nonatomic) _Bool hasTargetVersionTag; // @dynamic hasTargetVersionTag;
@property(nonatomic) _Bool hasTimeUntilWindowMillis; // @dynamic hasTimeUntilWindowMillis;
@property(nonatomic) _Bool hasWindowLengthMillis; // @dynamic hasWindowLengthMillis;
@property(copy, nonatomic) NSString *targetHash; // @dynamic targetHash;
@property(copy, nonatomic) NSString *targetVersionTag; // @dynamic targetVersionTag;
@property(nonatomic) unsigned int timeUntilWindowMillis; // @dynamic timeUntilWindowMillis;
@property(nonatomic) unsigned int windowLengthMillis; // @dynamic windowLengthMillis;

@end

