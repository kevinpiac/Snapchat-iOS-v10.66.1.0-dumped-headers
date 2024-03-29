//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapStatusViewedStateListener-Protocol.h"

@class NSString;

@interface SCMapStatusViewedStateListenerAnnouncer : NSObject <SCMapStatusViewedStateListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCMapStatusViewedStateListener>, std::__1::allocator<__weak id<SCMapStatusViewedStateListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)mapStatusViewedStateProvider:(id)arg1 didUpdateStatusIds:(id)arg2;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

