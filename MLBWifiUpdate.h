//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface MLBWifiUpdate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int frequency; // @dynamic frequency;
@property(nonatomic) _Bool hasFrequency; // @dynamic hasFrequency;
@property(nonatomic) _Bool hasIpAddress; // @dynamic hasIpAddress;
@property(nonatomic) _Bool hasUpdateType; // @dynamic hasUpdateType;
@property(copy, nonatomic) NSString *ipAddress; // @dynamic ipAddress;
@property(nonatomic) int updateType; // @dynamic updateType;

@end

