//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCSessionBuilder : NSObject
{
    NSString *_type;
    NSString *_name;
    double _startTime;
    double _endTime;
    NSString *_referrer;
    long long _exitEvent;
    NSString *_previousSessionName;
    double _lastGPSOnTime;
    double _totalGPSOnTime;
    double _lastCameraOnTime;
    double _totalCameraOnTime;
}

+ (id)withSession:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setEndTime:(double)arg1;
- (id)setExitEvent:(long long)arg1;
- (id)setLastCameraOnTime:(double)arg1;
- (id)setLastGPSOnTime:(double)arg1;
- (id)setName:(id)arg1;
- (id)setPreviousSessionName:(id)arg1;
- (id)setReferrer:(id)arg1;
- (id)setStartTime:(double)arg1;
- (id)setTotalCameraOnTime:(double)arg1;
- (id)setTotalGPSOnTime:(double)arg1;
- (id)setType:(id)arg1;

@end

