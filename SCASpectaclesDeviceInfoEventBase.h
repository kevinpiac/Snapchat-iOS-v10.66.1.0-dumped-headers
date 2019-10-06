//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCASpectaclesTrackedEvent.h"

@class NSNumber;

@interface SCASpectaclesDeviceInfoEventBase : SCASpectaclesTrackedEvent
{
    NSNumber *isCharging;
    NSNumber *deviceBattery;
    NSNumber *deviceStorage;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getDeviceBattery;
- (long long)getDeviceStorage;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getIsCharging;
- (double)getPerUserSamplingRate;
- (void)setDeviceBattery:(long long)arg1;
- (void)setDeviceStorage:(long long)arg1;
- (void)setIsCharging:(_Bool)arg1;

@end

