//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@interface SCWWeather : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int condition; // @dynamic condition;
@property(nonatomic) long long epochMs; // @dynamic epochMs;
@property(nonatomic) float pressureMb; // @dynamic pressureMb;
@property(nonatomic) long long relativeHumidityPerc; // @dynamic relativeHumidityPerc;
@property(nonatomic) float temperatureF; // @dynamic temperatureF;

@end
