//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SPCGPoint;

@interface SCMEMapReplyContext_LocationUpdate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(copy, nonatomic) NSString *localityName; // @dynamic localityName;
@property(retain, nonatomic) SPCGPoint *location; // @dynamic location;

@end
