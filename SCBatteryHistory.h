//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SCBatteryHistory : NSObject
{
    NSMutableDictionary *_trackingCount;
    double _lastSampleTime;
    int _networkEventOccurred;
    int _diskEventOccurred;
    int _locationEventOccurred;
    NSObject *_eventLock;
    CDUnknownBlockType _cpuUsageListener;
}

- (void).cxx_destruct;
- (double)_deltaSinceLastSample;
- (int)_encodedCpuUsage;
- (_Bool)_readyForNewSample;
- (void)_updateBitsForEvent:(int)arg1 baseName:(id)arg2 numberBits:(int)arg3;
- (void)_updateTrackingCount:(id)arg1 to:(_Bool)arg2;
- (void)_visualize;
- (void)addPerformanceEvent:(id)arg1;
- (_Bool)addSample:(id)arg1;
- (id)collection;
@property(copy, nonatomic) CDUnknownBlockType cpuUsageListener; // @synthesize cpuUsageListener=_cpuUsageListener;
- (id)init;
- (void)resume;

@end

