//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAppLifeCycleTask-Protocol.h"

@class NSString, SCQueuePerformer;
@protocol SCAppLifeCycleTaskDelegate;

@interface SCAfterStartupCriticalTask : NSObject <SCAppLifeCycleTask>
{
    SCQueuePerformer *_performer;
    CDUnknownBlockType _taskBlock;
    const char *_taskDescription;
    id <SCAppLifeCycleTaskDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SCAppLifeCycleTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithExecutionBlock:(CDUnknownBlockType)arg1 taskDescription:(const char *)arg2 delegate:(id)arg3;
- (void)performViaToken:(_Bool)arg1;
- (id)taskDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

