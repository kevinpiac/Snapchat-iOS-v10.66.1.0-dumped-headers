//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCQueuePerformer, SCTimeProvider;
@protocol OS_dispatch_queue;

@interface SCLensThrottledActionPerformer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    SCTimeProvider *_currentDateProvider;
    NSMutableDictionary *_jobs;
    SCQueuePerformer *_schedulePerformer;
}

- (void).cxx_destruct;
- (void)completedActionForKey:(id)arg1 creationDate:(id)arg2;
- (id)initWithActionQueue:(id)arg1 currentDateProvider:(id)arg2;
- (id)initWithActionQueue:(id)arg1 currentDateProvider:(id)arg2 qualityOfService:(unsigned int)arg3;
- (void)performAction:(CDUnknownBlockType)arg1 forKey:(id)arg2 throttleInterval:(double)arg3;

@end
