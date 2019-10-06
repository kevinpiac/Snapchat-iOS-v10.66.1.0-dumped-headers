//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EAAccessory, NSData, NSNumber, NSString;
@protocol SCSpectaclesFirmwareVersion, SCSpectaclesHardwareVersion, SCSpectaclesNetworkClient, SCSpectaclesPeripheral;

@interface SCSpectaclesBabyDevice : NSObject
{
    _Bool _locationEnabled;
    id <SCSpectaclesPeripheral> _peripheral;
    id <SCSpectaclesNetworkClient> _networkClient;
    EAAccessory *_accessory;
    NSData *_encryptionKey;
    NSString *_fullDisplayName;
    NSString *_shortDisplayName;
    long long _deviceNumber;
    NSString *_serialNumber;
    id <SCSpectaclesFirmwareVersion> _firmwareVersion;
    id <SCSpectaclesHardwareVersion> _hardwareVersion;
    NSNumber *_batteryLevel;
    NSNumber *_voltageLevel;
    NSNumber *_mediaCount;
    unsigned long long _bleState;
    unsigned long long _btcState;
    long long _deviceColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EAAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSNumber *batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(nonatomic) unsigned long long bleState; // @synthesize bleState=_bleState;
@property(nonatomic) unsigned long long btcState; // @synthesize btcState=_btcState;
@property(nonatomic) long long deviceColor; // @synthesize deviceColor=_deviceColor;
- (id)deviceInformation;
@property(nonatomic) long long deviceNumber; // @synthesize deviceNumber=_deviceNumber;
@property(retain, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(retain, nonatomic) id <SCSpectaclesFirmwareVersion> firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(copy, nonatomic) NSString *fullDisplayName; // @synthesize fullDisplayName=_fullDisplayName;
@property(retain, nonatomic) id <SCSpectaclesHardwareVersion> hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
- (id)init;
@property(nonatomic, getter=isLocationEnabled) _Bool locationEnabled; // @synthesize locationEnabled=_locationEnabled;
- (_Bool)isReadyToGrowUp;
@property(retain, nonatomic) NSNumber *mediaCount; // @synthesize mediaCount=_mediaCount;
@property(retain, nonatomic) id <SCSpectaclesNetworkClient> networkClient; // @synthesize networkClient=_networkClient;
@property(retain, nonatomic) id <SCSpectaclesPeripheral> peripheral; // @synthesize peripheral=_peripheral;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *shortDisplayName; // @synthesize shortDisplayName=_shortDisplayName;
@property(retain, nonatomic) NSNumber *voltageLevel; // @synthesize voltageLevel=_voltageLevel;

@end

