//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCR2GeoFence;

@interface SCR2GeoFenceDetail : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long createdTimeTsSecs; // @dynamic createdTimeTsSecs;
@property(copy, nonatomic) NSString *dataSource; // @dynamic dataSource;
@property(retain, nonatomic) SCR2GeoFence *geofence; // @dynamic geofence;
@property(nonatomic) _Bool hasGeofence; // @dynamic hasGeofence;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSMutableArray *tagsArray; // @dynamic tagsArray;
@property(readonly, nonatomic) unsigned long long tagsArray_Count; // @dynamic tagsArray_Count;

@end

