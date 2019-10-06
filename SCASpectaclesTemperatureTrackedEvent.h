//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCASpectaclesTrackedEvent.h"

@class NSNumber;

@interface SCASpectaclesTemperatureTrackedEvent : SCASpectaclesTrackedEvent
{
    NSNumber *ambaTemperature;
    NSNumber *nordicTemperature;
    NSNumber *coulombCtrlTemperature;
    NSNumber *wifiTemperature;
    NSNumber *qcaTemperature;
    NSNumber *temperatureReportUtc;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAmbaTemperature;
- (long long)getCoulombCtrlTemperature;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getNordicTemperature;
- (double)getPerUserSamplingRate;
- (long long)getQcaTemperature;
- (long long)getTemperatureReportUtc;
- (long long)getWifiTemperature;
- (void)setAmbaTemperature:(long long)arg1;
- (void)setCoulombCtrlTemperature:(long long)arg1;
- (void)setNordicTemperature:(long long)arg1;
- (void)setQcaTemperature:(long long)arg1;
- (void)setTemperatureReportUtc:(long long)arg1;
- (void)setWifiTemperature:(long long)arg1;

@end
