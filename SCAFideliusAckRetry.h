//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAFideliusAckRetry : SCAUserTrackedEvent
{
    NSNumber *withBackground;
    NSNumber *withRetryInClear;
    NSNumber *operationTimeMs;
    long long eventType;
    NSString *source;
    NSString *failureReason;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getEventType;
- (id)getFailureReason;
- (long long)getOperationTimeMs;
- (double)getPerUserSamplingRate;
- (id)getSource;
- (_Bool)getWithBackground;
- (_Bool)getWithRetryInClear;
- (id)init;
- (void)setEventType:(long long)arg1;
- (void)setFailureReason:(id)arg1;
- (void)setOperationTimeMs:(long long)arg1;
- (void)setSource:(id)arg1;
- (void)setWithBackground:(_Bool)arg1;
- (void)setWithRetryInClear:(_Bool)arg1;

@end

