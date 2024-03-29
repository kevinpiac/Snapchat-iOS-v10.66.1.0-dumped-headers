//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTempSnapchatterDataCoordinating-Protocol.h"

@class NSMutableSet;
@protocol SCSnapchattersDataMutating;

@interface SCTempSnapchatterDataCoordinator : NSObject <SCTempSnapchatterDataCoordinating>
{
    id <SCSnapchattersDataMutating> _snapchattersDataMutator;
    NSMutableSet *_inProcessingSnapchatterUsernames;
    struct mutex _actionProcessingDictLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addProcessingSnapchatterUsername:(id)arg1;
- (void)_removeProcessingSnapchatterUsername:(id)arg1;
- (void)addTempSnapchatter:(id)arg1 addSource:(long long)arg2 placement:(long long)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)blockTempSnapchatter:(id)arg1 blockReasonId:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)inProcessingSnapchatterUsernames;
- (id)initWithSnapchattersDataMutator:(id)arg1;

@end

