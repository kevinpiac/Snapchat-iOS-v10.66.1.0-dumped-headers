//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCACHIncrementCountRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int countType; // @dynamic countType;
@property(nonatomic) long long delta; // @dynamic delta;
@property(nonatomic) long long timestampMs; // @dynamic timestampMs;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

