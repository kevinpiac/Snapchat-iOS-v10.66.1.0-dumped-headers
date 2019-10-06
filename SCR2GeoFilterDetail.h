//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCR2GeoFence;

@interface SCR2GeoFilterDetail : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long createdTimeTsSecs; // @dynamic createdTimeTsSecs;
@property(nonatomic) unsigned long long endTimeTsSecs; // @dynamic endTimeTsSecs;
@property(retain, nonatomic) SCR2GeoFence *geofence; // @dynamic geofence;
@property(nonatomic) _Bool hasGeofence; // @dynamic hasGeofence;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *imageLink; // @dynamic imageLink;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int origin; // @dynamic origin;
@property(nonatomic) unsigned long long startTimeTsSecs; // @dynamic startTimeTsSecs;
@property(retain, nonatomic) NSMutableArray *tagsArray; // @dynamic tagsArray;
@property(readonly, nonatomic) unsigned long long tagsArray_Count; // @dynamic tagsArray_Count;
@property(retain, nonatomic) NSMutableArray *targetingFenceIdsArray; // @dynamic targetingFenceIdsArray;
@property(readonly, nonatomic) unsigned long long targetingFenceIdsArray_Count; // @dynamic targetingFenceIdsArray_Count;

@end

