//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCGraphene;

@interface SCChatSyncLatencyLogger : NSObject
{
    id <SCGraphene> _graphene;
}

- (void).cxx_destruct;
- (id)initWithGraphene:(id)arg1;
- (void)logConversationSyncsTriggered:(long long)arg1 ghostToFeedLogger:(id)arg2 forDataRequest:(id)arg3;
- (void)logFeedSyncLatency:(double)arg1 service:(long long)arg2 triggerType:(long long)arg3;
- (void)logSyncLatencyForEmptyUpdateWithEndTime:(double)arg1 ghostToFeedLogger:(id)arg2 fetchContext:(id)arg3;
- (void)logSyncResultsWithStartTime:(double)arg1 fetchResults:(id)arg2;

@end

