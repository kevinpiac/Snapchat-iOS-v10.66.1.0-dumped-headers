//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCR2GeoLocation;

@interface SCR2PlaceDataFetchRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(retain, nonatomic) SCR2GeoLocation *location; // @dynamic location;
@property(nonatomic) unsigned int numPlaces; // @dynamic numPlaces;
@property(retain, nonatomic) NSMutableArray *placeIdArray; // @dynamic placeIdArray;
@property(readonly, nonatomic) unsigned long long placeIdArray_Count; // @dynamic placeIdArray_Count;
@property(nonatomic) double radiusInMeters; // @dynamic radiusInMeters;

@end

