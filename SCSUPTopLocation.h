//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCSCOREGeoAddress, SCSCOREGeoPoint;

@interface SCSUPTopLocation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSCOREGeoAddress *geoAddress; // @dynamic geoAddress;
@property(retain, nonatomic) SCSCOREGeoPoint *geoPoint; // @dynamic geoPoint;
@property(nonatomic) _Bool hasGeoAddress; // @dynamic hasGeoAddress;
@property(nonatomic) _Bool hasGeoPoint; // @dynamic hasGeoPoint;
@property(copy, nonatomic) NSString *placeId; // @dynamic placeId;
@property(copy, nonatomic) NSString *placeName; // @dynamic placeName;
@property(copy, nonatomic) NSString *s2CellToken; // @dynamic s2CellToken;
@property(nonatomic) float score; // @dynamic score;

@end

