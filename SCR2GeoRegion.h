//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCR2GeoBoundingBox;

@interface SCR2GeoRegion : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCR2GeoBoundingBox *boundingBox; // @dynamic boundingBox;
@property(nonatomic) _Bool hasBoundingBox; // @dynamic hasBoundingBox;
@property(copy, nonatomic) NSString *regionId; // @dynamic regionId;

@end
