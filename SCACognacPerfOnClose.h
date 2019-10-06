//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCACognacActionEventBase.h"

@class NSNumber;

@interface SCACognacPerfOnClose : SCACognacActionEventBase
{
    NSNumber *cognacTimeSec;
    NSNumber *maxParticipantCount;
    NSNumber *currentParticipantCount;
    NSNumber *worstScenarioAvgFps;
    NSNumber *generalAvgFps;
    long long source;
    long long exitEvent;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)getCognacTimeSec;
- (long long)getCurrentParticipantCount;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getExitEvent;
- (double)getGeneralAvgFps;
- (long long)getMaxParticipantCount;
- (double)getPerUserSamplingRate;
- (long long)getSource;
- (double)getWorstScenarioAvgFps;
- (id)init;
- (void)setCognacTimeSec:(double)arg1;
- (void)setCurrentParticipantCount:(long long)arg1;
- (void)setExitEvent:(long long)arg1;
- (void)setGeneralAvgFps:(double)arg1;
- (void)setMaxParticipantCount:(long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setWorstScenarioAvgFps:(double)arg1;

@end

