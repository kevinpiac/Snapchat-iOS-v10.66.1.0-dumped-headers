//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAAppDelegateWorkflowLatency : SCAUserTrackedEvent
{
    NSNumber *durationUs;
    NSNumber *numberOfCommands;
    NSNumber *numberOfCriticalCommands;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getDurationUs;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getNumberOfCommands;
- (long long)getNumberOfCriticalCommands;
- (double)getPerUserSamplingRate;
- (void)setDurationUs:(long long)arg1;
- (void)setNumberOfCommands:(long long)arg1;
- (void)setNumberOfCriticalCommands:(long long)arg1;

@end

