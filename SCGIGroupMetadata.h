//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SPCGPoint;

@interface SCGIGroupMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long endEpoch; // @dynamic endEpoch;
@property(copy, nonatomic) NSString *groupDescription; // @dynamic groupDescription;
@property(nonatomic) _Bool hasLocationLatLng; // @dynamic hasLocationLatLng;
@property(copy, nonatomic) NSString *locationAddressInfo; // @dynamic locationAddressInfo;
@property(copy, nonatomic) NSString *locationDisplayString; // @dynamic locationDisplayString;
@property(retain, nonatomic) SPCGPoint *locationLatLng; // @dynamic locationLatLng;
@property(copy, nonatomic) NSString *locationVenueId; // @dynamic locationVenueId;
@property(nonatomic) long long startEpoch; // @dynamic startEpoch;

@end

