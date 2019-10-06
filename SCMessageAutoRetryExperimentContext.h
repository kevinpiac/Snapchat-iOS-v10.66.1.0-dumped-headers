//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCMessageAutoRetryExperimentContext : SCExperimentContext
{
    _Bool _retryOnSCCPMessageReceived;
    _Bool _retryOnNetworkRequestSucceed;
    _Bool _retryOnSCCPConnected;
    double _minSecondsElapsedToRetry;
    double _minSecondsElapsedToReset;
    long long _retryCountPerSession;
}

- (id)experimentName;
@property(readonly, nonatomic) double minSecondsElapsedToReset; // @synthesize minSecondsElapsedToReset=_minSecondsElapsedToReset;
@property(readonly, nonatomic) double minSecondsElapsedToRetry; // @synthesize minSecondsElapsedToRetry=_minSecondsElapsedToRetry;
@property(readonly, nonatomic) long long retryCountPerSession; // @synthesize retryCountPerSession=_retryCountPerSession;
@property(readonly, nonatomic) _Bool retryOnNetworkRequestSucceed; // @synthesize retryOnNetworkRequestSucceed=_retryOnNetworkRequestSucceed;
@property(readonly, nonatomic) _Bool retryOnSCCPConnected; // @synthesize retryOnSCCPConnected=_retryOnSCCPConnected;
@property(readonly, nonatomic) _Bool retryOnSCCPMessageReceived; // @synthesize retryOnSCCPMessageReceived=_retryOnSCCPMessageReceived;
- (void)setupParameters;

@end
