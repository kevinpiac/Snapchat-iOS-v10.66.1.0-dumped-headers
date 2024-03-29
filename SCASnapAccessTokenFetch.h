//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCASnapAccessTokenFetch : SCAUserTrackedEvent
{
    NSNumber *fetchLatencyMs;
    NSNumber *cacheHit;
    NSString *scope;
    NSString *getMode;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)getCacheHit;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFetchLatencyMs;
- (id)getGetMode;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (id)getScope;
- (void)setCacheHit:(_Bool)arg1;
- (void)setFetchLatencyMs:(long long)arg1;
- (void)setGetMode:(id)arg1;
- (void)setScope:(id)arg1;

@end

