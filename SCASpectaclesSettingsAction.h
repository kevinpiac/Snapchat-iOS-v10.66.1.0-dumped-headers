//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCASpectaclesSettingsAction : SCAUserTrackedEvent
{
    NSNumber *numDevices;
    long long deviceState;
    long long settingsAction;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getDeviceState;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getNumDevices;
- (double)getPerUserSamplingRate;
- (long long)getSettingsAction;
- (id)init;
- (void)setDeviceState:(long long)arg1;
- (void)setNumDevices:(long long)arg1;
- (void)setSettingsAction:(long long)arg1;

@end
