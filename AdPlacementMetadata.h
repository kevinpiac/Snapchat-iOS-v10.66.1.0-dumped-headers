//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, TargetingParam;

@interface AdPlacementMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *adUnitId; // @dynamic adUnitId;
@property(nonatomic) _Bool hasTargetingParameters; // @dynamic hasTargetingParameters;
@property(retain, nonatomic) TargetingParam *targetingParameters; // @dynamic targetingParameters;

@end
