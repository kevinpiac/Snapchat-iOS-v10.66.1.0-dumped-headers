//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAAdWebViewLoadBase.h"

@class NSNumber;

@interface SCAAdWebViewIosLoad : SCAAdWebViewLoadBase
{
    NSNumber *navigationStartTimestampMillis;
    NSNumber *unloadEventStartTimestampMillis;
    NSNumber *unloadEventEndTimestampMillis;
    NSNumber *redirectStartTimestampMillis;
    NSNumber *redirectEndTimestampMillis;
    NSNumber *fetchStartTimestampMillis;
    NSNumber *domainLookupStartTimestampMillis;
    NSNumber *domainLookupEndTimestampMillis;
    NSNumber *connectStartTimestampMillis;
    NSNumber *connectEndTimestampMillis;
    NSNumber *secureConnectionStartTimestampMillis;
    NSNumber *requestStartTimestampMillis;
    NSNumber *responseStartTimestampMillis;
    NSNumber *responseEndTimestampMillis;
    NSNumber *domLoadingTimestampMillis;
    NSNumber *domInteractiveTimestampMillis;
    NSNumber *domContentLoadedEventStartTimestampMillis;
    NSNumber *domContentLoadedEventEndTimestampMillis;
    NSNumber *domCompleteTimestampMillis;
    NSNumber *loadEventStartTimestampMillis;
    NSNumber *loadEventEndTimestampMillis;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getConnectEndTimestampMillis;
- (long long)getConnectStartTimestampMillis;
- (long long)getDomCompleteTimestampMillis;
- (long long)getDomContentLoadedEventEndTimestampMillis;
- (long long)getDomContentLoadedEventStartTimestampMillis;
- (long long)getDomInteractiveTimestampMillis;
- (long long)getDomLoadingTimestampMillis;
- (long long)getDomainLookupEndTimestampMillis;
- (long long)getDomainLookupStartTimestampMillis;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFetchStartTimestampMillis;
- (long long)getLoadEventEndTimestampMillis;
- (long long)getLoadEventStartTimestampMillis;
- (long long)getNavigationStartTimestampMillis;
- (double)getPerUserSamplingRate;
- (long long)getRedirectEndTimestampMillis;
- (long long)getRedirectStartTimestampMillis;
- (long long)getRequestStartTimestampMillis;
- (long long)getResponseEndTimestampMillis;
- (long long)getResponseStartTimestampMillis;
- (long long)getSecureConnectionStartTimestampMillis;
- (long long)getUnloadEventEndTimestampMillis;
- (long long)getUnloadEventStartTimestampMillis;
- (void)setConnectEndTimestampMillis:(long long)arg1;
- (void)setConnectStartTimestampMillis:(long long)arg1;
- (void)setDomCompleteTimestampMillis:(long long)arg1;
- (void)setDomContentLoadedEventEndTimestampMillis:(long long)arg1;
- (void)setDomContentLoadedEventStartTimestampMillis:(long long)arg1;
- (void)setDomInteractiveTimestampMillis:(long long)arg1;
- (void)setDomLoadingTimestampMillis:(long long)arg1;
- (void)setDomainLookupEndTimestampMillis:(long long)arg1;
- (void)setDomainLookupStartTimestampMillis:(long long)arg1;
- (void)setFetchStartTimestampMillis:(long long)arg1;
- (void)setLoadEventEndTimestampMillis:(long long)arg1;
- (void)setLoadEventStartTimestampMillis:(long long)arg1;
- (void)setNavigationStartTimestampMillis:(long long)arg1;
- (void)setRedirectEndTimestampMillis:(long long)arg1;
- (void)setRedirectStartTimestampMillis:(long long)arg1;
- (void)setRequestStartTimestampMillis:(long long)arg1;
- (void)setResponseEndTimestampMillis:(long long)arg1;
- (void)setResponseStartTimestampMillis:(long long)arg1;
- (void)setSecureConnectionStartTimestampMillis:(long long)arg1;
- (void)setUnloadEventEndTimestampMillis:(long long)arg1;
- (void)setUnloadEventStartTimestampMillis:(long long)arg1;

@end
