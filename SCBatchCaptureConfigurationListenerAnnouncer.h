//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBatchCaptureConfigurationListener-Protocol.h"

@class NSString;

@interface SCBatchCaptureConfigurationListenerAnnouncer : NSObject <SCBatchCaptureConfigurationListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCBatchCaptureConfigurationListener>, std::__1::allocator<__weak id<SCBatchCaptureConfigurationListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)addListener:(id)arg1;
- (void)batchCaptureConfiguration:(id)arg1 didAddSegment:(id)arg2;
- (void)batchCaptureConfiguration:(id)arg1 didDeleteSegment:(id)arg2 atIndex:(long long)arg3;
- (void)batchCaptureConfiguration:(id)arg1 didDeleteSnapAtIndexPath:(id)arg2;
- (void)batchCaptureConfiguration:(id)arg1 didSplitSnapAtIndexPath:(id)arg2 splitTime:(CDStruct_1b6d18a9)arg3;
- (void)batchCaptureConfigurationDidDeleteAllSegments:(id)arg1;
- (void)batchCaptureConfigurationWillDeleteAllSegments:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
