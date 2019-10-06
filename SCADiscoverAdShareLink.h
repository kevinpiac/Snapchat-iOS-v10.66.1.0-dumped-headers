//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCADiscoverAdShareLink : SCAUserTrackedEvent
{
    long long pageSection;
    NSString *publisherId;
    NSString *editionId;
    NSString *adsnapId;
    NSString *adId;
    NSString *adsnapPlacementId;
    NSString *adsnapLineItemId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAdId;
- (id)getAdsnapId;
- (id)getAdsnapLineItemId;
- (id)getAdsnapPlacementId;
- (id)getEditionId;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getPageSection;
- (double)getPerUserSamplingRate;
- (id)getPublisherId;
- (id)init;
- (void)setAdId:(id)arg1;
- (void)setAdsnapId:(id)arg1;
- (void)setAdsnapLineItemId:(id)arg1;
- (void)setAdsnapPlacementId:(id)arg1;
- (void)setEditionId:(id)arg1;
- (void)setPageSection:(long long)arg1;
- (void)setPublisherId:(id)arg1;

@end

