//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBBoolValue, GPBInt64Value, NSMutableArray, SCAdsAdFlagData, SCAdsAdToLensImpressionTrack, SCAdsAppInstallImpressionTrack, SCAdsCognacMetadata, SCAdsCollectionImpressionTrack, SCAdsDeepLinkImpressionTrack, SCAdsFilterCarouselImpressionTrack, SCAdsFilterImpressionTrack, SCAdsLensCarouselImpressionTrack, SCAdsLensImpressionTrack, SCAdsLocalWebpageImpressionTrack, SCAdsLongformVideoImpressionTrack, SCAdsRemoteWebpageImpressionTrack, SCAdsStoryImpressionTrack, SCAdsSubscribeImpressionTrack, SCAdsThreeVImpressionTrack, SCAdsUnlockableViewImpressionTrack, SCAdsViewContext;

@interface SCAdsImpressionData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCAdsAdFlagData *adFlagData; // @dynamic adFlagData;
@property(retain, nonatomic) SCAdsAdToLensImpressionTrack *adToLens; // @dynamic adToLens;
@property(nonatomic) int adType; // @dynamic adType;
@property(retain, nonatomic) SCAdsAppInstallImpressionTrack *appInstall; // @dynamic appInstall;
@property(retain, nonatomic) SCAdsCognacMetadata *cognac; // @dynamic cognac;
@property(retain, nonatomic) SCAdsCollectionImpressionTrack *collection; // @dynamic collection;
@property(retain, nonatomic) GPBInt64Value *creativeHeight; // @dynamic creativeHeight;
@property(retain, nonatomic) GPBInt64Value *creativeWidth; // @dynamic creativeWidth;
@property(retain, nonatomic) SCAdsDeepLinkImpressionTrack *deepLink; // @dynamic deepLink;
@property(retain, nonatomic) SCAdsFilterImpressionTrack *filter; // @dynamic filter;
@property(retain, nonatomic) SCAdsFilterCarouselImpressionTrack *filterCarousel; // @dynamic filterCarousel;
@property(nonatomic) _Bool hasAdFlagData; // @dynamic hasAdFlagData;
@property(nonatomic) _Bool hasCognac; // @dynamic hasCognac;
@property(nonatomic) _Bool hasCreativeHeight; // @dynamic hasCreativeHeight;
@property(nonatomic) _Bool hasCreativeWidth; // @dynamic hasCreativeWidth;
@property(nonatomic) _Bool hasIsUnskippableAd; // @dynamic hasIsUnskippableAd;
@property(nonatomic) _Bool hasScreenHeight; // @dynamic hasScreenHeight;
@property(nonatomic) _Bool hasScreenWidth; // @dynamic hasScreenWidth;
@property(nonatomic) _Bool hasViewContext; // @dynamic hasViewContext;
@property(retain, nonatomic) GPBBoolValue *isUnskippableAd; // @dynamic isUnskippableAd;
@property(retain, nonatomic) SCAdsLensImpressionTrack *lens; // @dynamic lens;
@property(retain, nonatomic) SCAdsLensCarouselImpressionTrack *lensCarousel; // @dynamic lensCarousel;
@property(retain, nonatomic) SCAdsLocalWebpageImpressionTrack *localWebpage; // @dynamic localWebpage;
@property(retain, nonatomic) SCAdsLongformVideoImpressionTrack *longformVideo; // @dynamic longformVideo;
@property(retain, nonatomic) SCAdsRemoteWebpageImpressionTrack *remoteWebpage; // @dynamic remoteWebpage;
@property(retain, nonatomic) GPBInt64Value *screenHeight; // @dynamic screenHeight;
@property(retain, nonatomic) GPBInt64Value *screenWidth; // @dynamic screenWidth;
@property(retain, nonatomic) SCAdsStoryImpressionTrack *story; // @dynamic story;
@property(retain, nonatomic) SCAdsSubscribeImpressionTrack *subscribe; // @dynamic subscribe;
@property(retain, nonatomic) NSMutableArray *thirdPartyUrlsArray; // @dynamic thirdPartyUrlsArray;
@property(readonly, nonatomic) unsigned long long thirdPartyUrlsArray_Count; // @dynamic thirdPartyUrlsArray_Count;
@property(retain, nonatomic) SCAdsThreeVImpressionTrack *threeV; // @dynamic threeV;
@property(readonly, nonatomic) int typedTrackDataOneOfCase; // @dynamic typedTrackDataOneOfCase;
@property(retain, nonatomic) SCAdsUnlockableViewImpressionTrack *unlockableView; // @dynamic unlockableView;
@property(retain, nonatomic) SCAdsViewContext *viewContext; // @dynamic viewContext;

@end

