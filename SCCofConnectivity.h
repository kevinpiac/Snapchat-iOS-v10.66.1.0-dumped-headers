//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBBoolValue;

@interface SCCofConnectivity : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIsMetered; // @dynamic hasIsMetered;
@property(nonatomic) _Bool hasIsRoaming; // @dynamic hasIsRoaming;
@property(retain, nonatomic) GPBBoolValue *isMetered; // @dynamic isMetered;
@property(retain, nonatomic) GPBBoolValue *isRoaming; // @dynamic isRoaming;
@property(nonatomic) int networkType; // @dynamic networkType;

@end

