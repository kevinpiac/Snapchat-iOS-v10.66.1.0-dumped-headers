//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface IMPIncrementSubscriberCountRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long delta; // @dynamic delta;
@property(copy, nonatomic) NSString *profileId; // @dynamic profileId;
@property(nonatomic) long long windowTimestamp; // @dynamic windowTimestamp;

@end
