//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCBehaviorSubject, SCObservable;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SCRealtimeMemoryMonitor : NSObject <SCTraceEnabled>
{
    NSObject<OS_dispatch_queue> *_trackQueue;
    NSObject<OS_dispatch_source> *_trackTimer;
    SCBehaviorSubject *_memoryUsageSnapshot;
}

- (void).cxx_destruct;
- (void)_trackMemoryUsage;
- (id)init;
@property(readonly, nonatomic) SCObservable *memoryUsageSnapshot;
- (void)startRealtimeTracking;
- (void)stopRealtimeTracking;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

