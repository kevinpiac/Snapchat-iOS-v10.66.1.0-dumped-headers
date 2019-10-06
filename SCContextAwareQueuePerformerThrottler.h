//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;
@protocol OS_dispatch_queue, SCContextAwareThrottleRequest;

@interface SCContextAwareQueuePerformerThrottler : NSObject
{
    id <SCContextAwareThrottleRequest> _currentThrottleRequest;
    NSMutableArray *_pendingThrottleRequests;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_registeredPerformers;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_handleCurrentRequest;
- (void)_handleNextRequest;
- (id)_initializePerformerDict;
- (void)clearCurrentRequest:(const char *)arg1;
- (void)enqueueStartThrottlingRequest:(id)arg1;
- (void)enqueueStopThrottlingRequest:(id)arg1;
- (id)init;
- (void)registerPerformer:(id)arg1;
- (void)unregisterPerformer:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
