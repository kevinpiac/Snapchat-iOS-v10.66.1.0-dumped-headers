//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCR2GeoLocation;

@interface SCR2GoToMapAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCR2GeoLocation *geoLocation; // @dynamic geoLocation;
@property(nonatomic) _Bool hasGeoLocation; // @dynamic hasGeoLocation;
@property(nonatomic) float zoomLevel; // @dynamic zoomLevel;

@end

