//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBObjectGraphConfiguration, NSMutableArray, NSMutableSet;

@interface FBRetainCycleDetector : NSObject
{
    NSMutableArray *_candidates;
    FBObjectGraphConfiguration *_configuration;
    NSMutableSet *_objectSet;
}

- (void).cxx_destruct;
- (long long)_compareStringArray:(id)arg1 withArray:(id)arg2;
- (id)_extractClassNamesFromGraphObjects:(id)arg1;
- (id)_findRetainCyclesInObject:(id)arg1 stackDepth:(unsigned long long)arg2;
- (id)_shiftBufferToLowestAddress:(id)arg1;
- (id)_shiftToLowestLexicographically:(id)arg1;
- (id)_shiftToUnifiedCycle:(id)arg1;
- (id)_unwrapCycle:(id)arg1;
- (void)addCandidate:(id)arg1;
- (id)findRetainCycles;
- (id)findRetainCyclesWithMaxCycleLength:(unsigned long long)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

@end
