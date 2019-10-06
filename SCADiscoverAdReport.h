//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCADiscoverSnapViewBase.h"

@class NSNumber, NSString;

@interface SCADiscoverAdReport : SCADiscoverSnapViewBase
{
    NSNumber *adIndexCount;
    NSNumber *adIndexPos;
    NSNumber *exitLevel;
    long long adFlaggedReason;
    long long exitType;
    NSString *adsnapId;
    NSString *adId;
    NSString *adUnitId;
    NSString *adRequestClientId;
    NSString *adsnapPlacementId;
    NSString *adsnapLineItemId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAdFlaggedReason;
- (id)getAdId;
- (long long)getAdIndexCount;
- (long long)getAdIndexPos;
- (id)getAdRequestClientId;
- (id)getAdUnitId;
- (id)getAdsnapId;
- (id)getAdsnapLineItemId;
- (id)getAdsnapPlacementId;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getExitLevel;
- (long long)getExitType;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setAdFlaggedReason:(long long)arg1;
- (void)setAdId:(id)arg1;
- (void)setAdIndexCount:(long long)arg1;
- (void)setAdIndexPos:(long long)arg1;
- (void)setAdRequestClientId:(id)arg1;
- (void)setAdUnitId:(id)arg1;
- (void)setAdsnapId:(id)arg1;
- (void)setAdsnapLineItemId:(id)arg1;
- (void)setAdsnapPlacementId:(id)arg1;
- (void)setExitLevel:(long long)arg1;
- (void)setExitType:(long long)arg1;

@end
