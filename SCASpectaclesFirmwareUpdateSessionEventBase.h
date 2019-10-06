//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCASpectaclesTrackedEvent.h"

@class NSNumber, NSString;

@interface SCASpectaclesFirmwareUpdateSessionEventBase : SCASpectaclesTrackedEvent
{
    NSNumber *durationSec;
    long long updateType;
    NSString *updateSessionId;
    NSString *targetFirmwareVersion;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)getDurationSec;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)getTargetFirmwareVersion;
- (id)getUpdateSessionId;
- (long long)getUpdateType;
- (id)init;
- (void)setDurationSec:(double)arg1;
- (void)setTargetFirmwareVersion:(id)arg1;
- (void)setUpdateSessionId:(id)arg1;
- (void)setUpdateType:(long long)arg1;

@end
