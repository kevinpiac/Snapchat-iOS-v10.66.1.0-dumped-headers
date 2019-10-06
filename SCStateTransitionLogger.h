//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCStateTransitionGraph;
@protocol SCTransitionEventLogger;

@interface SCStateTransitionLogger : NSObject
{
    id <SCTransitionEventLogger> _transitionEventLogger;
    SCStateTransitionGraph *_graph;
}

- (void).cxx_destruct;
- (id)initWithEventLogger:(id)arg1 transitionGraph:(id)arg2;
- (void)logState:(id)arg1;
- (void)logState:(id)arg1 triggeredBy:(id)arg2;

@end

