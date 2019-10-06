//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserNotTrackedEvent.h"

@class NSNumber;

@interface SCASearchrankingLatency : SCAUserNotTrackedEvent
{
    NSNumber *searchLatencyMilliseconds;
    long long searchLatencyType;
    long long searchCacheStatus;
    long long source;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getSearchCacheStatus;
- (long long)getSearchLatencyMilliseconds;
- (long long)getSearchLatencyType;
- (long long)getSource;
- (id)init;
- (void)setSearchCacheStatus:(long long)arg1;
- (void)setSearchLatencyMilliseconds:(long long)arg1;
- (void)setSearchLatencyType:(long long)arg1;
- (void)setSource:(long long)arg1;

@end
