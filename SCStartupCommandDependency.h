//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStartupCommandDependencyProtocol-Protocol.h"

@class NSMapTable, NSMutableSet, NSString;

@interface SCStartupCommandDependency : NSObject <SCStartupCommandDependencyProtocol>
{
    NSMapTable *_dependencyGraph;
    NSMutableSet *_noDependencyNodes;
}

- (void).cxx_destruct;
- (id)dependencyGraph;
- (id)dependencySetForCommand:(id)arg1;
- (id)init;
- (void)markCommand:(id)arg1 dependUpon:(id)arg2;
- (void)markCommandHasNoDependency:(id)arg1;
- (id)noDependencyNodes;
- (void)upgradeCommandPriority:(id)arg1 priority:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

