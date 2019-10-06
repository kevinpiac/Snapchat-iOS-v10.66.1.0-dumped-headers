//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@protocol SOJUBlizzardClientConfig <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSArray *blacklistedEvents;
@property(readonly, copy, nonatomic) NSArray *criticalEventNames;
@property(readonly, copy, nonatomic) NSArray *defaultLoggers;
@property(readonly, copy, nonatomic) NSDictionary *eventPrefixToLoggersMap;
@property(readonly, copy, nonatomic) NSNumber *eventUploadIntervalMillis;
@property(readonly, copy, nonatomic) NSNumber *eventUploadMaxBatchSize;
@property(readonly, copy, nonatomic) NSNumber *eventUploadTimeoutMillis;
@property(readonly, copy, nonatomic) NSDictionary *eventnameToLoggersMap;
@property(readonly, copy, nonatomic) NSNumber *fireAndForgetLogEnabled;
@property(readonly, copy, nonatomic) NSNumber *gceCollectorTrafficPercent;
@property(readonly, copy, nonatomic) NSString *gceCollectorUrl;
@property(readonly, copy, nonatomic) NSArray *loggers;
@property(readonly, copy, nonatomic) NSNumber *lowPriorityThread;
@property(readonly, copy, nonatomic) NSNumber *overflowRemoveBatchSize;
@property(readonly, copy, nonatomic) NSNumber *overflowThresholdEventCount;
@property(readonly, copy, nonatomic) NSNumber *saveBatchSize;
@property(readonly, copy, nonatomic) NSNumber *uploadEventThreshold;
@property(readonly, copy, nonatomic) NSString *version;
@end

