//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAAdWebViewLoadBase.h"

@class NSNumber;

@interface SCAAdWebViewAndroidLoad : SCAAdWebViewLoadBase
{
    NSNumber *startTimeMillis;
    NSNumber *unloadEventStartTimeMillis;
    NSNumber *unloadEventEndTimeMillis;
    NSNumber *redirectStartTimeMillis;
    NSNumber *redirectEndTimeMillis;
    NSNumber *fetchStartTimeMillis;
    NSNumber *domainLookupStartTimeMillis;
    NSNumber *domainLookupEndTimeMillis;
    NSNumber *connectStartTimeMillis;
    NSNumber *connectEndTimeMillis;
    NSNumber *secureConnectionStartTimeMillis;
    NSNumber *requestStartTimeMillis;
    NSNumber *responseStartTimeMillis;
    NSNumber *responseEndTimeMillis;
    NSNumber *domInteractiveTimeMillis;
    NSNumber *domContentLoadedEventStartTimeMillis;
    NSNumber *domContentLoadedEventEndTimeMillis;
    NSNumber *domCompleteTimeMillis;
    NSNumber *loadEventStartTimeMillis;
    NSNumber *loadEventEndTimeMillis;
    NSNumber *encodedBodySize;
    NSNumber *decodedBodySize;
    NSNumber *firstPaintTimeMillis;
    NSNumber *firstContentfulPaintTimeMillis;
    NSNumber *usedJSHeapSize;
    NSNumber *totalJSHeapSize;
    NSNumber *jsHeapSizeLimit;
    NSNumber *totalResourceRequestSize;
    long long webViewType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getConnectEndTimeMillis;
- (long long)getConnectStartTimeMillis;
- (long long)getDecodedBodySize;
- (long long)getDomCompleteTimeMillis;
- (long long)getDomContentLoadedEventEndTimeMillis;
- (long long)getDomContentLoadedEventStartTimeMillis;
- (long long)getDomInteractiveTimeMillis;
- (long long)getDomainLookupEndTimeMillis;
- (long long)getDomainLookupStartTimeMillis;
- (long long)getEncodedBodySize;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFetchStartTimeMillis;
- (long long)getFirstContentfulPaintTimeMillis;
- (long long)getFirstPaintTimeMillis;
- (long long)getJsHeapSizeLimit;
- (long long)getLoadEventEndTimeMillis;
- (long long)getLoadEventStartTimeMillis;
- (double)getPerUserSamplingRate;
- (long long)getRedirectEndTimeMillis;
- (long long)getRedirectStartTimeMillis;
- (long long)getRequestStartTimeMillis;
- (long long)getResponseEndTimeMillis;
- (long long)getResponseStartTimeMillis;
- (long long)getSecureConnectionStartTimeMillis;
- (long long)getStartTimeMillis;
- (long long)getTotalJSHeapSize;
- (long long)getTotalResourceRequestSize;
- (long long)getUnloadEventEndTimeMillis;
- (long long)getUnloadEventStartTimeMillis;
- (long long)getUsedJSHeapSize;
- (long long)getWebViewType;
- (id)init;
- (void)setConnectEndTimeMillis:(long long)arg1;
- (void)setConnectStartTimeMillis:(long long)arg1;
- (void)setDecodedBodySize:(long long)arg1;
- (void)setDomCompleteTimeMillis:(long long)arg1;
- (void)setDomContentLoadedEventEndTimeMillis:(long long)arg1;
- (void)setDomContentLoadedEventStartTimeMillis:(long long)arg1;
- (void)setDomInteractiveTimeMillis:(long long)arg1;
- (void)setDomainLookupEndTimeMillis:(long long)arg1;
- (void)setDomainLookupStartTimeMillis:(long long)arg1;
- (void)setEncodedBodySize:(long long)arg1;
- (void)setFetchStartTimeMillis:(long long)arg1;
- (void)setFirstContentfulPaintTimeMillis:(long long)arg1;
- (void)setFirstPaintTimeMillis:(long long)arg1;
- (void)setJsHeapSizeLimit:(long long)arg1;
- (void)setLoadEventEndTimeMillis:(long long)arg1;
- (void)setLoadEventStartTimeMillis:(long long)arg1;
- (void)setRedirectEndTimeMillis:(long long)arg1;
- (void)setRedirectStartTimeMillis:(long long)arg1;
- (void)setRequestStartTimeMillis:(long long)arg1;
- (void)setResponseEndTimeMillis:(long long)arg1;
- (void)setResponseStartTimeMillis:(long long)arg1;
- (void)setSecureConnectionStartTimeMillis:(long long)arg1;
- (void)setStartTimeMillis:(long long)arg1;
- (void)setTotalJSHeapSize:(long long)arg1;
- (void)setTotalResourceRequestSize:(long long)arg1;
- (void)setUnloadEventEndTimeMillis:(long long)arg1;
- (void)setUnloadEventStartTimeMillis:(long long)arg1;
- (void)setUsedJSHeapSize:(long long)arg1;
- (void)setWebViewType:(long long)arg1;

@end

