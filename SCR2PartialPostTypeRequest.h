//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCR2GeoLocation;

@interface SCR2PartialPostTypeRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(retain, nonatomic) SCR2GeoLocation *location; // @dynamic location;
@property(copy, nonatomic) NSString *queryText; // @dynamic queryText;

@end

