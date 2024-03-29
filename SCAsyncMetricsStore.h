//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCQueuePerformer;

@interface SCAsyncMetricsStore : NSObject
{
    SCQueuePerformer *_queue;
    NSMutableDictionary *_trackedMetrics;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)_latencyMetricForUniqueEventKey:(id)arg1;
- (void)_removeLatencyMetricForUniqueEventKey:(id)arg1;
- (void)_setLatencyMetric:(id)arg1 forUniqueEventKey:(id)arg2;
- (id)_uniqueEventKeyWithEventName:(id)arg1 andUniqueId:(id)arg2;
- (void)cancelLatencyMetric:(id)arg1 withUniqueId:(id)arg2;
- (double)endLatencyMetric:(id)arg1 withUniqueId:(id)arg2;
- (id)init;
- (void)startLatencyMetric:(id)arg1 withUniqueId:(id)arg2;

@end

