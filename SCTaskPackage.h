//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SCTaskPackage : NSObject
{
    NSMutableArray *_afterStartupUrgentPriorityTasks;
    NSMutableArray *_afterStartupHighPriorityTasks;
    NSMutableArray *_afterStartupDefaultPriorityTasks;
}

- (void).cxx_destruct;
- (void)addTask:(id)arg1 priority:(unsigned long long)arg2;
- (_Bool)containsTaskToBeExecuted;
- (id)init;
- (id)nextTask;
- (unsigned long long)nextTaskPriority;

@end

