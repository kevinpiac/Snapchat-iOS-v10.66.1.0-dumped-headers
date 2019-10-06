//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCADiscoverSnapScreenshotBase.h"

@class NSNumber, NSString;

@interface SCADiscoverAdLongformScreenshot : SCADiscoverSnapScreenshotBase
{
    NSNumber *adIndexCount;
    NSNumber *adIndexPos;
    long long longformType;
    NSString *adsnapId;
    NSString *adRequestClientId;
    NSString *adId;
    NSString *adsnapPlacementId;
    NSString *adsnapLineItemId;
    NSString *videoPartnerId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAdId;
- (long long)getAdIndexCount;
- (long long)getAdIndexPos;
- (id)getAdRequestClientId;
- (id)getAdsnapId;
- (id)getAdsnapLineItemId;
- (id)getAdsnapPlacementId;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getLongformType;
- (double)getPerUserSamplingRate;
- (id)getVideoPartnerId;
- (id)init;
- (void)setAdId:(id)arg1;
- (void)setAdIndexCount:(long long)arg1;
- (void)setAdIndexPos:(long long)arg1;
- (void)setAdRequestClientId:(id)arg1;
- (void)setAdsnapId:(id)arg1;
- (void)setAdsnapLineItemId:(id)arg1;
- (void)setAdsnapPlacementId:(id)arg1;
- (void)setLongformType:(long long)arg1;
- (void)setVideoPartnerId:(id)arg1;

@end
