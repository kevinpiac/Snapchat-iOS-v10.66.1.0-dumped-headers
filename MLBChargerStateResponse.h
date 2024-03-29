//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@interface MLBChargerStateResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int batteryTemperatureLeft; // @dynamic batteryTemperatureLeft;
@property(nonatomic) int batteryTemperatureRight; // @dynamic batteryTemperatureRight;
@property(nonatomic) int chargingCurrent; // @dynamic chargingCurrent;
@property(nonatomic) int chargingLimit; // @dynamic chargingLimit;
@property(nonatomic) _Bool hasBatteryTemperatureLeft; // @dynamic hasBatteryTemperatureLeft;
@property(nonatomic) _Bool hasBatteryTemperatureRight; // @dynamic hasBatteryTemperatureRight;
@property(nonatomic) _Bool hasChargingCurrent; // @dynamic hasChargingCurrent;
@property(nonatomic) _Bool hasChargingLimit; // @dynamic hasChargingLimit;
@property(nonatomic) _Bool hasIsChargerConnected; // @dynamic hasIsChargerConnected;
@property(nonatomic) _Bool hasIsFullyCharged; // @dynamic hasIsFullyCharged;
@property(nonatomic) _Bool isChargerConnected; // @dynamic isChargerConnected;
@property(nonatomic) _Bool isFullyCharged; // @dynamic isFullyCharged;

@end

