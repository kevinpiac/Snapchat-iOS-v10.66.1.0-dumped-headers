//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber;

@interface AMPExperimentProvider : NSObject
{
    NSNumber *_enableReliableUploads;
    NSNumber *_enableCriticalReliableUploads;
    NSNumber *_enableNullSequenceId;
    NSNumber *_enableNullFirstUploadAttemptDate;
    NSNumber *_enablePrefetchHighPriorityQueues;
    NSNumber *_enablePrefetchLowPriorityQueues;
    NSNumber *_prefetchLowPriorityQueuesThreshold;
    NSNumber *_turnOffAppBlizzardRequestLogs;
    NSNumber *_abExposureCacheEnabled;
    NSNumber *_abExposureCacheTTLHours;
    NSNumber *_abExposureCacheResetIntervalInDays;
    NSMutableDictionary *_abExposureCacheEnabledForStudy;
    NSNumber *_useScopedUserSessionInfo;
}

- (void).cxx_destruct;
- (_Bool)abExposureCacheEnabled;
- (_Bool)abExposureCacheEnabledForStudy:(id)arg1;
- (double)abExposureCacheResetIntervalInDays;
- (double)abExposureCacheTTLHours;
- (_Bool)enableCriticalReliableUploads;
- (_Bool)enableNullFirstUploadAttemptDate;
- (_Bool)enableNullSequenceId;
- (_Bool)enablePrefetchHighPriorityQueues;
- (_Bool)enablePrefetchLowPriorityQueues;
- (_Bool)enableReliableUploads;
- (id)init;
- (unsigned long long)prefetchLowPriorityQueuesThreshold;
- (_Bool)turnOffAppBlizzardRequestLogs;
- (_Bool)useScopedUserSessionInfo;

@end

