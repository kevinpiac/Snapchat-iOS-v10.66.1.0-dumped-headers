//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAdSource-Protocol.h"

@class NSString, SCSnapAdsAdSource;

@interface SCSnapAdsCompositeAdSource : NSObject <SCAdSource>
{
    _Bool _isPrimaryEnabled;
    _Bool _isShadowEnabled;
    SCSnapAdsAdSource *_primary;
    SCSnapAdsAdSource *_shadow;
}

- (void).cxx_destruct;
- (void)adExpired:(id)arg1;
- (id)initWithPrimaryNetworkManager:(id)arg1 shadowNetworkManager:(id)arg2 pixelTrackingCookieManager:(id)arg3 requestInfoProvider:(id)arg4 primayServeResponseDataStore:(id)arg5 persistedDataAdapter:(id)arg6 configAdapter:(id)arg7 networkMetricsManager:(id)arg8 renderDataParserMetricsManager:(id)arg9 thirdPartyTrackGenerator:(id)arg10;
- (void)initializeWithAdPreferences:(id)arg1 compositeAdSourceConfig:(id)arg2 rawUserDataV2:(id)arg3;
@property(nonatomic) _Bool isPrimaryEnabled; // @synthesize isPrimaryEnabled=_isPrimaryEnabled;
@property(nonatomic) _Bool isShadowEnabled; // @synthesize isShadowEnabled=_isShadowEnabled;
@property(retain, nonatomic) SCSnapAdsAdSource *primary; // @synthesize primary=_primary;
- (void)request:(id)arg1;
@property(retain, nonatomic) SCSnapAdsAdSource *shadow; // @synthesize shadow=_shadow;
- (void)track:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

