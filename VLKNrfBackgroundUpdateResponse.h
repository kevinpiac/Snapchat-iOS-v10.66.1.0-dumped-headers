//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface VLKNrfBackgroundUpdateResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long elapsedTimeMillis; // @dynamic elapsedTimeMillis;
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(nonatomic) _Bool hasElapsedTimeMillis; // @dynamic hasElapsedTimeMillis;
@property(nonatomic) _Bool hasErrorCode; // @dynamic hasErrorCode;
@property(nonatomic) _Bool hasIsBackgroundStateValid; // @dynamic hasIsBackgroundStateValid;
@property(nonatomic) _Bool hasLastFailureReason; // @dynamic hasLastFailureReason;
@property(nonatomic) _Bool hasTargetHash; // @dynamic hasTargetHash;
@property(nonatomic) _Bool hasTargetVersionTag; // @dynamic hasTargetVersionTag;
@property(nonatomic) _Bool hasTimeUntilWindowMillis; // @dynamic hasTimeUntilWindowMillis;
@property(nonatomic) _Bool hasWindowLengthMillis; // @dynamic hasWindowLengthMillis;
@property(nonatomic) _Bool isBackgroundStateValid; // @dynamic isBackgroundStateValid;
@property(nonatomic) int lastFailureReason; // @dynamic lastFailureReason;
@property(copy, nonatomic) NSString *targetHash; // @dynamic targetHash;
@property(copy, nonatomic) NSString *targetVersionTag; // @dynamic targetVersionTag;
@property(nonatomic) unsigned int timeUntilWindowMillis; // @dynamic timeUntilWindowMillis;
@property(nonatomic) unsigned int windowLengthMillis; // @dynamic windowLengthMillis;

@end

