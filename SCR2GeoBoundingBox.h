//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCR2GeoLocation;

@interface SCR2GeoBoundingBox : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNePoint; // @dynamic hasNePoint;
@property(nonatomic) _Bool hasSwPoint; // @dynamic hasSwPoint;
@property(retain, nonatomic) SCR2GeoLocation *nePoint; // @dynamic nePoint;
@property(retain, nonatomic) SCR2GeoLocation *swPoint; // @dynamic swPoint;

@end
