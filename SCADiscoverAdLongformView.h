//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCADiscoverSnapViewBase.h"

@class NSNumber, NSString;

@interface SCADiscoverAdLongformView : SCADiscoverSnapViewBase
{
    NSNumber *fullView;
    NSNumber *adIndexCount;
    NSNumber *adIndexPos;
    NSNumber *withCaptionOnStart;
    NSNumber *captionTimeSec;
    NSNumber *landscapeTimeSec;
    NSNumber *durationSec;
    NSNumber *aspectRatio;
    NSNumber *loadingScreenTimeSec;
    NSNumber *pageHeightTotalPixel;
    NSNumber *pageHeightSeenPixel;
    NSNumber *pageIsLoadedOnEntry;
    NSNumber *pageIsLoadedOnExit;
    NSNumber *pageUrlCount;
    NSNumber *pageLoadErrorCount;
    NSNumber *inlineVideoTimeViewed;
    NSNumber *inlineVideoViewCount;
    NSNumber *inlineVideoTotalCount;
    NSNumber *userPermissionPromptCount;
    NSNumber *userPermissionPromptAllowedCount;
    NSNumber *deepLinkedToAppCount;
    NSNumber *deepLinkedToAppInstallCount;
    NSNumber *withSubscription;
    NSNumber *rollMaxDegree;
    NSNumber *rollMinDegree;
    NSNumber *pinchToZoom;
    NSNumber *isArchived;
    NSNumber *isCameraAd;
    NSNumber *lensIsLoadedOnEntry;
    NSNumber *lensIsLoadedOnExit;
    NSNumber *interactionIndexPos;
    NSNumber *interactionIndexCount;
    NSNumber *editionEntrySnapIndex;
    long long viewSource;
    long long longformType;
    long long interactionType;
    NSString *adsnapId;
    NSString *adRequestClientId;
    NSString *adId;
    NSString *adsnapPlacementId;
    NSString *adsnapLineItemId;
    NSString *userAdId;
    NSString *videoPartnerId;
    NSString *webpageFieldsAutofillDetected;
    NSString *webpageFieldsDetected;
    NSString *onEditAutofilledFields;
    NSString *lensSessionId;
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
- (double)getAspectRatio;
- (double)getCaptionTimeSec;
- (long long)getDeepLinkedToAppCount;
- (long long)getDeepLinkedToAppInstallCount;
- (double)getDurationSec;
- (long long)getEditionEntrySnapIndex;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getFullView;
- (double)getInlineVideoTimeViewed;
- (long long)getInlineVideoTotalCount;
- (long long)getInlineVideoViewCount;
- (long long)getInteractionIndexCount;
- (long long)getInteractionIndexPos;
- (long long)getInteractionType;
- (_Bool)getIsArchived;
- (_Bool)getIsCameraAd;
- (double)getLandscapeTimeSec;
- (_Bool)getLensIsLoadedOnEntry;
- (_Bool)getLensIsLoadedOnExit;
- (id)getLensSessionId;
- (double)getLoadingScreenTimeSec;
- (long long)getLongformType;
- (id)getOnEditAutofilledFields;
- (long long)getPageHeightSeenPixel;
- (long long)getPageHeightTotalPixel;
- (_Bool)getPageIsLoadedOnEntry;
- (_Bool)getPageIsLoadedOnExit;
- (long long)getPageLoadErrorCount;
- (long long)getPageUrlCount;
- (double)getPerUserSamplingRate;
- (double)getPinchToZoom;
- (double)getRollMaxDegree;
- (double)getRollMinDegree;
- (id)getUserAdId;
- (long long)getUserPermissionPromptAllowedCount;
- (long long)getUserPermissionPromptCount;
- (id)getVideoPartnerId;
- (long long)getViewSource;
- (id)getWebpageFieldsAutofillDetected;
- (id)getWebpageFieldsDetected;
- (_Bool)getWithCaptionOnStart;
- (_Bool)getWithSubscription;
- (id)init;
- (void)setAdId:(id)arg1;
- (void)setAdIndexCount:(long long)arg1;
- (void)setAdIndexPos:(long long)arg1;
- (void)setAdRequestClientId:(id)arg1;
- (void)setAdsnapId:(id)arg1;
- (void)setAdsnapLineItemId:(id)arg1;
- (void)setAdsnapPlacementId:(id)arg1;
- (void)setAspectRatio:(double)arg1;
- (void)setCaptionTimeSec:(double)arg1;
- (void)setDeepLinkedToAppCount:(long long)arg1;
- (void)setDeepLinkedToAppInstallCount:(long long)arg1;
- (void)setDurationSec:(double)arg1;
- (void)setEditionEntrySnapIndex:(long long)arg1;
- (void)setFullView:(_Bool)arg1;
- (void)setInlineVideoTimeViewed:(double)arg1;
- (void)setInlineVideoTotalCount:(long long)arg1;
- (void)setInlineVideoViewCount:(long long)arg1;
- (void)setInteractionIndexCount:(long long)arg1;
- (void)setInteractionIndexPos:(long long)arg1;
- (void)setInteractionType:(long long)arg1;
- (void)setIsArchived:(_Bool)arg1;
- (void)setIsCameraAd:(_Bool)arg1;
- (void)setLandscapeTimeSec:(double)arg1;
- (void)setLensIsLoadedOnEntry:(_Bool)arg1;
- (void)setLensIsLoadedOnExit:(_Bool)arg1;
- (void)setLensSessionId:(id)arg1;
- (void)setLoadingScreenTimeSec:(double)arg1;
- (void)setLongformType:(long long)arg1;
- (void)setOnEditAutofilledFields:(id)arg1;
- (void)setPageHeightSeenPixel:(long long)arg1;
- (void)setPageHeightTotalPixel:(long long)arg1;
- (void)setPageIsLoadedOnEntry:(_Bool)arg1;
- (void)setPageIsLoadedOnExit:(_Bool)arg1;
- (void)setPageLoadErrorCount:(long long)arg1;
- (void)setPageUrlCount:(long long)arg1;
- (void)setPinchToZoom:(double)arg1;
- (void)setRollMaxDegree:(double)arg1;
- (void)setRollMinDegree:(double)arg1;
- (void)setUserAdId:(id)arg1;
- (void)setUserPermissionPromptAllowedCount:(long long)arg1;
- (void)setUserPermissionPromptCount:(long long)arg1;
- (void)setVideoPartnerId:(id)arg1;
- (void)setViewSource:(long long)arg1;
- (void)setWebpageFieldsAutofillDetected:(id)arg1;
- (void)setWebpageFieldsDetected:(id)arg1;
- (void)setWithCaptionOnStart:(_Bool)arg1;
- (void)setWithSubscription:(_Bool)arg1;

@end

