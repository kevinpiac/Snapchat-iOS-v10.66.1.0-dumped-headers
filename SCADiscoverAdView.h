//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCADiscoverSnapViewBase.h"

@class NSNumber, NSString;

@interface SCADiscoverAdView : SCADiscoverSnapViewBase
{
    NSNumber *fullView;
    NSNumber *adIndexCount;
    NSNumber *adIndexPos;
    NSNumber *snapTimeSec;
    NSNumber *mediaDisplayTimeSec;
    NSNumber *rollMaxDegree;
    NSNumber *rollMinDegree;
    NSNumber *pinchToZoom;
    NSNumber *isArchived;
    NSNumber *webviewLoadedOnEntry;
    NSNumber *webviewLoadedOnExit;
    NSNumber *deepLinkFromCard;
    NSNumber *deepLinkFallbackToAppStore;
    NSNumber *deepLinkFallbackToWebview;
    NSNumber *cardVisibleTime;
    NSNumber *cardAppInstalled;
    NSNumber *isCameraAd;
    NSNumber *interactionIndexPos;
    NSNumber *interactionIndexCount;
    NSNumber *interactionViewCount;
    NSNumber *interactionDistinctViewCount;
    NSNumber *interactionMaxViewPos;
    NSNumber *isFullViewAd;
    NSNumber *mediaLoadedOnEntry;
    NSNumber *mediaLoadedOnExit;
    NSNumber *loadingScreenTimeSec;
    NSNumber *editionEntrySnapIndex;
    long long viewSource;
    long long mediaType;
    long long cardExitEvent;
    long long interactionType;
    long long entryEvent;
    NSString *adsnapId;
    NSString *adId;
    NSString *adUnitId;
    NSString *adRequestClientId;
    NSString *adsnapPlacementId;
    NSString *adsnapLineItemId;
    NSString *userAdId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAdId;
- (long long)getAdIndexCount;
- (long long)getAdIndexPos;
- (id)getAdRequestClientId;
- (id)getAdUnitId;
- (id)getAdsnapId;
- (id)getAdsnapLineItemId;
- (id)getAdsnapPlacementId;
- (_Bool)getCardAppInstalled;
- (long long)getCardExitEvent;
- (double)getCardVisibleTime;
- (_Bool)getDeepLinkFallbackToAppStore;
- (_Bool)getDeepLinkFallbackToWebview;
- (_Bool)getDeepLinkFromCard;
- (long long)getEditionEntrySnapIndex;
- (long long)getEntryEvent;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getFullView;
- (long long)getInteractionDistinctViewCount;
- (long long)getInteractionIndexCount;
- (long long)getInteractionIndexPos;
- (long long)getInteractionMaxViewPos;
- (long long)getInteractionType;
- (long long)getInteractionViewCount;
- (_Bool)getIsArchived;
- (_Bool)getIsCameraAd;
- (_Bool)getIsFullViewAd;
- (double)getLoadingScreenTimeSec;
- (double)getMediaDisplayTimeSec;
- (_Bool)getMediaLoadedOnEntry;
- (_Bool)getMediaLoadedOnExit;
- (long long)getMediaType;
- (double)getPerUserSamplingRate;
- (double)getPinchToZoom;
- (double)getRollMaxDegree;
- (double)getRollMinDegree;
- (double)getSnapTimeSec;
- (id)getUserAdId;
- (long long)getViewSource;
- (_Bool)getWebviewLoadedOnEntry;
- (_Bool)getWebviewLoadedOnExit;
- (id)init;
- (void)setAdId:(id)arg1;
- (void)setAdIndexCount:(long long)arg1;
- (void)setAdIndexPos:(long long)arg1;
- (void)setAdRequestClientId:(id)arg1;
- (void)setAdUnitId:(id)arg1;
- (void)setAdsnapId:(id)arg1;
- (void)setAdsnapLineItemId:(id)arg1;
- (void)setAdsnapPlacementId:(id)arg1;
- (void)setCardAppInstalled:(_Bool)arg1;
- (void)setCardExitEvent:(long long)arg1;
- (void)setCardVisibleTime:(double)arg1;
- (void)setDeepLinkFallbackToAppStore:(_Bool)arg1;
- (void)setDeepLinkFallbackToWebview:(_Bool)arg1;
- (void)setDeepLinkFromCard:(_Bool)arg1;
- (void)setEditionEntrySnapIndex:(long long)arg1;
- (void)setEntryEvent:(long long)arg1;
- (void)setFullView:(_Bool)arg1;
- (void)setInteractionDistinctViewCount:(long long)arg1;
- (void)setInteractionIndexCount:(long long)arg1;
- (void)setInteractionIndexPos:(long long)arg1;
- (void)setInteractionMaxViewPos:(long long)arg1;
- (void)setInteractionType:(long long)arg1;
- (void)setInteractionViewCount:(long long)arg1;
- (void)setIsArchived:(_Bool)arg1;
- (void)setIsCameraAd:(_Bool)arg1;
- (void)setIsFullViewAd:(_Bool)arg1;
- (void)setLoadingScreenTimeSec:(double)arg1;
- (void)setMediaDisplayTimeSec:(double)arg1;
- (void)setMediaLoadedOnEntry:(_Bool)arg1;
- (void)setMediaLoadedOnExit:(_Bool)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setPinchToZoom:(double)arg1;
- (void)setRollMaxDegree:(double)arg1;
- (void)setRollMinDegree:(double)arg1;
- (void)setSnapTimeSec:(double)arg1;
- (void)setUserAdId:(id)arg1;
- (void)setViewSource:(long long)arg1;
- (void)setWebviewLoadedOnEntry:(_Bool)arg1;
- (void)setWebviewLoadedOnExit:(_Bool)arg1;

@end

