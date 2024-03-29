//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class Location, NSMutableArray, NSString;

@interface ContextualServiceRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *applicationId; // @dynamic applicationId;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(retain, nonatomic) Location *location; // @dynamic location;
@property(nonatomic) int mode; // @dynamic mode;
@property(nonatomic) float speed; // @dynamic speed;
@property(nonatomic) long long timestamp; // @dynamic timestamp;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;
@property(copy, nonatomic) NSString *version; // @dynamic version;
@property(retain, nonatomic) NSMutableArray *verticalsArray; // @dynamic verticalsArray;
@property(readonly, nonatomic) unsigned long long verticalsArray_Count; // @dynamic verticalsArray_Count;

@end

