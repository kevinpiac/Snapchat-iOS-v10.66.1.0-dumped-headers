//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCArchiveTaskDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSMutableArray, NSString;
@protocol SCPerforming;

@interface SCArchiveManager : NSObject <SCArchiveTaskDelegate, SCTraceEnabled>
{
    id <SCPerforming> _schedulingQueue;
    long long _numberOfRunningTasks;
    NSMutableArray *_tasks;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_run;
- (void)didRunTask:(id)arg1;
- (id)init;
- (id)initWithSchedulingQueue:(id)arg1;
- (long long)maxNumOfRunningTasks;
@property(nonatomic) long long numberOfRunningTasks; // @synthesize numberOfRunningTasks=_numberOfRunningTasks;
@property(retain, nonatomic) NSMutableArray *tasks; // @synthesize tasks=_tasks;
- (void)submitItem:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

