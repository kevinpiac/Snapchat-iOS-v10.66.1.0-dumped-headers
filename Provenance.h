//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SDMOwner_ID;

@interface Provenance : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOwnerId; // @dynamic hasOwnerId;
@property(retain, nonatomic) SDMOwner_ID *ownerId; // @dynamic ownerId;
@property(retain, nonatomic) NSMutableArray *secondaryOwnersArray; // @dynamic secondaryOwnersArray;
@property(readonly, nonatomic) unsigned long long secondaryOwnersArray_Count; // @dynamic secondaryOwnersArray_Count;
@property(copy, nonatomic) NSString *sourceId; // @dynamic sourceId;
@property(nonatomic) int sourceSystem; // @dynamic sourceSystem;
@property(copy, nonatomic) NSString *sourceVersion; // @dynamic sourceVersion;

@end

