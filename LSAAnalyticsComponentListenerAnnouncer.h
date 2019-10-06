//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSAAnalyticsComponentListener-Protocol.h"

@class NSString;

@interface LSAAnalyticsComponentListenerAnnouncer : NSObject <LSAAnalyticsComponentListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<LSAAnalyticsComponentListener>, std::__1::allocator<__weak id<LSAAnalyticsComponentListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (void)analyticsComponent:(id)arg1 didChangeContent:(id)arg2 effectId:(id)arg3;
- (void)analyticsComponent:(id)arg1 didPrepareEventAnalyticsReport:(id)arg2 effectId:(id)arg3;
- (void)analyticsComponent:(id)arg1 didPreparePerformanceAnalyticsReport:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

