//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface MLBWifiParams : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *country; // @dynamic country;
@property(nonatomic) unsigned int frequency; // @dynamic frequency;
@property(nonatomic) int frequencyStrategy; // @dynamic frequencyStrategy;
@property(nonatomic) _Bool hasCountry; // @dynamic hasCountry;
@property(nonatomic) _Bool hasFrequency; // @dynamic hasFrequency;
@property(nonatomic) _Bool hasFrequencyStrategy; // @dynamic hasFrequencyStrategy;
@property(nonatomic) _Bool hasPassword; // @dynamic hasPassword;
@property(nonatomic) _Bool hasSsid; // @dynamic hasSsid;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(copy, nonatomic) NSString *password; // @dynamic password;
@property(copy, nonatomic) NSString *ssid; // @dynamic ssid;
@property(nonatomic) int type; // @dynamic type;

@end

