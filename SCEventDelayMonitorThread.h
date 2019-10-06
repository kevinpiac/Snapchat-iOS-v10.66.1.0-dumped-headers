//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSThread.h>

@class NSMutableArray, SCImageProcessQueueHealthChecker;

@interface SCEventDelayMonitorThread : NSThread
{
    NSMutableArray *_buckets;
    unsigned long long _currentBucket;
    _Atomic double _end;
    double _sampleIntervalSeconds;
    struct mutex _bucketMutex;
    struct atomic<bool> _isRunning;
    SCImageProcessQueueHealthChecker *_imageProcessQueueHealthChecker;
    _Bool _appInBackground;
    _Bool _shouldCrashAppOnANR;
    double _ANRThreshold;
}

+ (id)shared;
- (id).cxx_construct;
- (void).cxx_destruct;
@property double ANRThreshold; // @synthesize ANRThreshold=_ANRThreshold;
- (id)arrayValueForDelaySummaryInTheLastIntervals:(unsigned long long)arg1;
- (void)dealloc;
- (double)defaultANRThreshold;
- (void)didBecomeActive;
- (void)didEnterBackground;
- (id)init;
- (_Bool)isRunning;
- (void)logMainThreadDelays;
- (void)main;
- (void)mainThreadUnResponsiveFor:(double)arg1;
- (void)pause;
- (void)resume;
@property _Bool shouldCrashAppOnANR; // @synthesize shouldCrashAppOnANR=_shouldCrashAppOnANR;
- (id)stringValueDelaySummaryInTheLastIntervals:(unsigned long long)arg1;
- (void)tickTime;
- (void)transformReport:(id)arg1 toBucket:(unsigned long long)arg2;
- (void)updateANRThresholdWithServerConfig:(id)arg1;
- (void)willTerminateApplication;

@end
