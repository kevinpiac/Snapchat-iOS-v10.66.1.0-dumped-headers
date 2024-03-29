//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCASpectaclesDeviceInfoEventBase.h"

@class NSNumber;

@interface SCASpectaclesSettingsDeviceAction : SCASpectaclesDeviceInfoEventBase
{
    NSNumber *numDevices;
    long long settingsAction;
    long long promptAction;
    long long failureReason;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFailureReason;
- (long long)getNumDevices;
- (double)getPerUserSamplingRate;
- (long long)getPromptAction;
- (long long)getSettingsAction;
- (id)init;
- (void)setFailureReason:(long long)arg1;
- (void)setNumDevices:(long long)arg1;
- (void)setPromptAction:(long long)arg1;
- (void)setSettingsAction:(long long)arg1;

@end

