//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, SCQueuePerformer;

@interface SCRetainCycleDetectorLogger : NSObject
{
    NSMutableSet *_permanentRetainCycles;
    NSMutableSet *_temporaryRetainCycles;
    SCQueuePerformer *_queuePerformer;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_detectRetainCyclesWithVC:(id)arg1 filterBlocks:(id)arg2;
- (void)detectRetainCyclesWhenViewDidFullyAppear:(id)arg1;
- (id)init;

@end

