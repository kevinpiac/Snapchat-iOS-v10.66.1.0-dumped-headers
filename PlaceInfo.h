//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GeoLocation, NSString, SCR2PlaceNames;

@interface PlaceInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *city; // @dynamic city;
@property(copy, nonatomic) NSString *country; // @dynamic country;
@property(retain, nonatomic) SCR2PlaceNames *deprecatedAlternativeNames; // @dynamic deprecatedAlternativeNames;
@property(retain, nonatomic) GeoLocation *geoLocation; // @dynamic geoLocation;
@property(nonatomic) _Bool hasDeprecatedAlternativeNames; // @dynamic hasDeprecatedAlternativeNames;
@property(nonatomic) _Bool hasGeoLocation; // @dynamic hasGeoLocation;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *neighborhood; // @dynamic neighborhood;
@property(copy, nonatomic) NSString *placesApiId; // @dynamic placesApiId;
@property(copy, nonatomic) NSString *route; // @dynamic route;
@property(nonatomic) double score; // @dynamic score;
@property(copy, nonatomic) NSString *state; // @dynamic state;
@property(copy, nonatomic) NSString *street; // @dynamic street;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end

