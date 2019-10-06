//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface SCStateTransitionGraph : NSObject
{
    NSMutableSet *_pendingStates;
    NSMutableSet *_visitedPaths;
    NSMutableSet *_paths;
}

- (void).cxx_destruct;
- (void)_addPath:(id)arg1;
- (_Bool)_hasPath:(id)arg1 to:(id)arg2;
- (void)_init;
- (void)_markTransitionsUnvisitedFrom:(id)arg1;
- (id)_newVisitedTransitionsTo:(id)arg1;
- (void)_updatePendingStates:(id)arg1;
- (void)addPath:(id)arg1 to:(id)arg2;
- (id)init;
- (void)reset;
- (id)visit:(id)arg1 by:(id)arg2;

@end
