//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCScopeGraph.h"

@class SCScopeLifecycleContext, SCSystemScope_Lifecycle;

@interface SCSnapchatScopeGraph : SCScopeGraph
{
    SCScopeLifecycleContext *_lifecycleContext;
    SCSystemScope_Lifecycle *_rootLifecycle;
}

+ (id)scopes;
+ (id)shared;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)init;
- (id)scopes;
- (void)setRootScope:(id)arg1;

@end
