//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCStoryLocation;

@interface SCStoryGeofencedGroupStoryExtraData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCStoryLocation *center; // @dynamic center;
@property(nonatomic) _Bool hasCenter; // @dynamic hasCenter;
@property(nonatomic) int privacyType; // @dynamic privacyType;
@property(nonatomic) double radius; // @dynamic radius;

@end

