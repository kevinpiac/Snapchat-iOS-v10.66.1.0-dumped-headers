//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCR2GeoLocation;

@interface SCR2ShazamRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *artistNamesArray; // @dynamic artistNamesArray;
@property(readonly, nonatomic) unsigned long long artistNamesArray_Count; // @dynamic artistNamesArray_Count;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(retain, nonatomic) SCR2GeoLocation *location; // @dynamic location;
@property(copy, nonatomic) NSString *songTitle; // @dynamic songTitle;

@end

