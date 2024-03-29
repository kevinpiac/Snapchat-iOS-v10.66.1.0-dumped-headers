//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverFeedLoggingSessionManaging-Protocol.h"

@class NSString, SCDiscoverFeedRankingEventLogger;
@protocol OS_dispatch_queue;

@interface SCDiscoverFeedLogger : NSObject <SCDiscoverFeedLoggingSessionManaging>
{
    SCDiscoverFeedRankingEventLogger *_rankingEventLogger;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_flushWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_logEvent:(id)arg1 data:(id)arg2;
- (id)_makeEventCriticalIfNecessary:(id)arg1 data:(id)arg2;
- (void)flushWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2 extraData:(id)arg3;
- (id)initWithQueue:(id)arg1 snapTokenManager:(id)arg2 requestManager:(id)arg3;
- (void)logEvent:(id)arg1 data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

