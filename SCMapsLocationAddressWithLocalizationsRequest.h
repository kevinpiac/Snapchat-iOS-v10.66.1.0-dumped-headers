//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCMapsLatLng, SCMapsRequestOptions;

@interface SCMapsLocationAddressWithLocalizationsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(nonatomic) _Bool includeIds; // @dynamic includeIds;
@property(retain, nonatomic) NSMutableArray *localesArray; // @dynamic localesArray;
@property(readonly, nonatomic) unsigned long long localesArray_Count; // @dynamic localesArray_Count;
@property(retain, nonatomic) SCMapsLatLng *location; // @dynamic location;
@property(retain, nonatomic) SCMapsRequestOptions *options; // @dynamic options;

@end

