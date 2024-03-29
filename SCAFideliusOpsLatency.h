//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAFideliusOpsLatency : SCAUserTrackedEvent
{
    NSNumber *operationTimeMs;
    NSNumber *rewrapCount;
    long long eventType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getEventType;
- (long long)getOperationTimeMs;
- (double)getPerUserSamplingRate;
- (long long)getRewrapCount;
- (id)init;
- (void)setEventType:(long long)arg1;
- (void)setOperationTimeMs:(long long)arg1;
- (void)setRewrapCount:(long long)arg1;

@end

