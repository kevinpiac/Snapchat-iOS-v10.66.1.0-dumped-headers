//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCQueuePerformer, SCSnapAdsSerializingNetworkManager;
@protocol SCSnapAdsConfigAdapter, SCSnapAdsNetworkUserAgentAdapter, SCSnapAdsOperationMetricsAdapter, SCSnapAdsPersistedDataAdapter;

@interface SCSnapAdsPixelTrackingCookieManager : NSObject
{
    SCQueuePerformer *_performer;
    id <SCSnapAdsConfigAdapter> _configAdapter;
    _Bool _isLoadingCookie;
    SCSnapAdsSerializingNetworkManager *_networkManager;
    id <SCSnapAdsNetworkUserAgentAdapter> _userAgentAdapter;
    id <SCSnapAdsPersistedDataAdapter> _persistedDataAdapter;
    id <SCSnapAdsOperationMetricsAdapter> _metricsManager;
}

+ (_Bool)_isCookieSetWithCookieName:(id)arg1 cookieDomain:(id)arg2;
+ (id)cookieStorage;
+ (_Bool)isPixelCookieAvailable;
- (void).cxx_destruct;
- (void)_handleNetworkResponse:(id)arg1 error:(id)arg2 requestEndpoint:(id)arg3 requestStartTimestamp:(double)arg4;
- (void)_handlePixelCookieResponse:(id)arg1;
- (void)_requestPixelCookie;
- (id)initWithNetworkManager:(id)arg1 userAgentAdapter:(id)arg2 configAdapter:(id)arg3 persistedDataAdapter:(id)arg4 metricsManager:(id)arg5;
@property(nonatomic) _Bool isLoadingCookie; // @synthesize isLoadingCookie=_isLoadingCookie;
@property(readonly, nonatomic) __weak id <SCSnapAdsOperationMetricsAdapter> metricsManager; // @synthesize metricsManager=_metricsManager;
@property(readonly, nonatomic) SCSnapAdsSerializingNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
@property(readonly, nonatomic) __weak id <SCSnapAdsPersistedDataAdapter> persistedDataAdapter; // @synthesize persistedDataAdapter=_persistedDataAdapter;
- (void)setClientTTLCookie;
- (void)updatePixelCookieIfNecessary;
@property(readonly, nonatomic) __weak id <SCSnapAdsNetworkUserAgentAdapter> userAgentAdapter; // @synthesize userAgentAdapter=_userAgentAdapter;

@end

