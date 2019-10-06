//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SCSpectaclesFirmwareVersion, SCSpectaclesHardwareVersion;

@interface SCLagunaGetHdSessionInfo : NSObject
{
    NSString *_deviceId;
    id <SCSpectaclesFirmwareVersion> _firmwareVersion;
    id <SCSpectaclesHardwareVersion> _hardwareVersion;
    long long _deviceColor;
    long long _deviceStatusState;
    NSString *_transferSessionId;
    long long _numHdVideos;
    double _durationSec;
}

+ (id)initWithTransferSession:(id)arg1 device:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long deviceColor; // @synthesize deviceColor=_deviceColor;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(nonatomic) long long deviceStatusState; // @synthesize deviceStatusState=_deviceStatusState;
@property(nonatomic) double durationSec; // @synthesize durationSec=_durationSec;
@property(retain, nonatomic) id <SCSpectaclesFirmwareVersion> firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(retain, nonatomic) id <SCSpectaclesHardwareVersion> hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(nonatomic) long long numHdVideos; // @synthesize numHdVideos=_numHdVideos;
@property(copy, nonatomic) NSString *transferSessionId; // @synthesize transferSessionId=_transferSessionId;

@end
