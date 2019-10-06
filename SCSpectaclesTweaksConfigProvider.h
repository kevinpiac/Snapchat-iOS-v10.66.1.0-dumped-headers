//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesTweaksConfigProvider-Protocol.h"

@class NSString;

@interface SCSpectaclesTweaksConfigProvider : NSObject <SCSpectaclesTweaksConfigProvider>
{
}

- (_Bool)ancsEnabled;
- (_Bool)disableBluetooth;
- (_Bool)disableContentDeletion;
- (_Bool)disableEncryption;
- (_Bool)disableProdAuthentication;
- (_Bool)gateLowEndDevices;
- (_Bool)gpsEnabled;
- (_Bool)keepAliveInBackground;
- (unsigned long long)mockBatteryLevelStatus;
- (long long)mockCoulombCounterTemperature;
- (long long)mockDeviceBatteryLevel;
- (long long)mockGuppyBatteryLevel;
- (unsigned long long)mockStorageLevelStatus;
- (unsigned long long)mockTemperatureStatus;
- (id)newportBurstFrame;
- (_Bool)newportEnableBurst;
- (_Bool)newportEnabled;
- (_Bool)restrictRSSIWhenScanning;
- (_Bool)setupBleNotifications;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
