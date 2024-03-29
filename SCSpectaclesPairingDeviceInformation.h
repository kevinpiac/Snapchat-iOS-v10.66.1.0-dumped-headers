//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SCSpectaclesFirmwareVersion, SCSpectaclesHardwareVersion;

@interface SCSpectaclesPairingDeviceInformation : NSObject
{
    NSString *_serialNumber;
    NSString *_displayName;
    id <SCSpectaclesFirmwareVersion> _firmwareVersion;
    id <SCSpectaclesHardwareVersion> _hardwareVersion;
    unsigned long long _bleState;
    unsigned long long _btcState;
    long long _deviceColor;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bleState; // @synthesize bleState=_bleState;
@property(nonatomic) unsigned long long btcState; // @synthesize btcState=_btcState;
@property(nonatomic) long long deviceColor; // @synthesize deviceColor=_deviceColor;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) id <SCSpectaclesFirmwareVersion> firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(retain, nonatomic) id <SCSpectaclesHardwareVersion> hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;

@end

