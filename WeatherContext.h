//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface WeatherContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *city; // @dynamic city;
@property(copy, nonatomic) NSString *observationTime; // @dynamic observationTime;
@property(nonatomic) double tempC; // @dynamic tempC;
@property(nonatomic) double tempF; // @dynamic tempF;
@property(copy, nonatomic) NSString *weather; // @dynamic weather;
@property(copy, nonatomic) NSString *wind; // @dynamic wind;

@end

