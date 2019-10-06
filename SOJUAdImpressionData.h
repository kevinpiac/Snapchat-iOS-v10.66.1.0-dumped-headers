//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdImpressionData-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUAdAdFlagData, SOJUAdAdToLensImpressionTrack, SOJUAdAppInstallImpressionTrack, SOJUAdCognacMetadata, SOJUAdCollectionImpressionTrack, SOJUAdDeepLinkImpressionTrack, SOJUAdFilterCarouselImpressionTrack, SOJUAdFilterImpressionTrack, SOJUAdLensCarouselImpressionTrack, SOJUAdLensImpressionTrack, SOJUAdLensSlotImpressionTrack, SOJUAdLocalWebpageImpressionTrack, SOJUAdLongformVideoImpressionTrack, SOJUAdRemoteWebpageImpressionTrack, SOJUAdStoryImpressionTrack, SOJUAdSubscribeImpressionTrack, SOJUAdThreeVImpressionTrack, SOJUAdUnlockableViewImpressionTrack;

@interface SOJUAdImpressionData : NSObject <SOJUAdImpressionData>
{
    NSString *_adType;
    SOJUAdThreeVImpressionTrack *_threeV;
    SOJUAdAppInstallImpressionTrack *_appInstall;
    SOJUAdLongformVideoImpressionTrack *_longformVideo;
    SOJUAdRemoteWebpageImpressionTrack *_remoteWebpage;
    SOJUAdLocalWebpageImpressionTrack *_localWebpage;
    SOJUAdStoryImpressionTrack *_story;
    NSArray *_thirdPartyUrls;
    NSDictionary *_viewContext;
    SOJUAdLensSlotImpressionTrack *_lensSlot;
    SOJUAdLensCarouselImpressionTrack *_lensCarousel;
    SOJUAdFilterCarouselImpressionTrack *_filterCarousel;
    SOJUAdDeepLinkImpressionTrack *_deepLink;
    SOJUAdAdFlagData *_adFlagData;
    SOJUAdFilterImpressionTrack *_filter;
    SOJUAdUnlockableViewImpressionTrack *_unlockableView;
    SOJUAdLensImpressionTrack *_lens;
    SOJUAdSubscribeImpressionTrack *_subscribe;
    NSNumber *_screenWidth;
    NSNumber *_screenHeight;
    NSNumber *_creativeHeight;
    NSNumber *_creativeWidth;
    SOJUAdAdToLensImpressionTrack *_adToLens;
    NSNumber *_isUnskippableAd;
    SOJUAdCollectionImpressionTrack *_collection;
    SOJUAdCognacMetadata *_cognac;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SOJUAdAdFlagData *adFlagData; // @synthesize adFlagData=_adFlagData;
@property(readonly, copy, nonatomic) SOJUAdAdToLensImpressionTrack *adToLens; // @synthesize adToLens=_adToLens;
@property(readonly, copy, nonatomic) NSString *adType; // @synthesize adType=_adType;
- (long long)adTypeEnum;
@property(readonly, copy, nonatomic) SOJUAdAppInstallImpressionTrack *appInstall; // @synthesize appInstall=_appInstall;
@property(readonly, copy, nonatomic) SOJUAdCognacMetadata *cognac; // @synthesize cognac=_cognac;
@property(readonly, copy, nonatomic) SOJUAdCollectionImpressionTrack *collection; // @synthesize collection=_collection;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSNumber *creativeHeight; // @synthesize creativeHeight=_creativeHeight;
- (long long)creativeHeightValue;
@property(readonly, copy, nonatomic) NSNumber *creativeWidth; // @synthesize creativeWidth=_creativeWidth;
- (long long)creativeWidthValue;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy, nonatomic) SOJUAdDeepLinkImpressionTrack *deepLink; // @synthesize deepLink=_deepLink;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) SOJUAdFilterImpressionTrack *filter; // @synthesize filter=_filter;
@property(readonly, copy, nonatomic) SOJUAdFilterCarouselImpressionTrack *filterCarousel; // @synthesize filterCarousel=_filterCarousel;
@property(readonly) unsigned long long hash;
- (id)initWithAdType:(id)arg1 threeV:(id)arg2 appInstall:(id)arg3 longformVideo:(id)arg4 remoteWebpage:(id)arg5 localWebpage:(id)arg6 story:(id)arg7 thirdPartyUrls:(id)arg8 viewContext:(id)arg9 lensSlot:(id)arg10 lensCarousel:(id)arg11 filterCarousel:(id)arg12 deepLink:(id)arg13 adFlagData:(id)arg14 filter:(id)arg15 unlockableView:(id)arg16 lens:(id)arg17 subscribe:(id)arg18 screenWidth:(id)arg19 screenHeight:(id)arg20 creativeHeight:(id)arg21 creativeWidth:(id)arg22 adToLens:(id)arg23 isUnskippableAd:(id)arg24 collection:(id)arg25 cognac:(id)arg26;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isUnskippableAd; // @synthesize isUnskippableAd=_isUnskippableAd;
- (_Bool)isUnskippableAdValue;
@property(readonly, copy, nonatomic) SOJUAdLensImpressionTrack *lens; // @synthesize lens=_lens;
@property(readonly, copy, nonatomic) SOJUAdLensCarouselImpressionTrack *lensCarousel; // @synthesize lensCarousel=_lensCarousel;
@property(readonly, copy, nonatomic) SOJUAdLensSlotImpressionTrack *lensSlot; // @synthesize lensSlot=_lensSlot;
@property(readonly, copy, nonatomic) SOJUAdLocalWebpageImpressionTrack *localWebpage; // @synthesize localWebpage=_localWebpage;
@property(readonly, copy, nonatomic) SOJUAdLongformVideoImpressionTrack *longformVideo; // @synthesize longformVideo=_longformVideo;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) SOJUAdRemoteWebpageImpressionTrack *remoteWebpage; // @synthesize remoteWebpage=_remoteWebpage;
@property(readonly, copy, nonatomic) NSNumber *screenHeight; // @synthesize screenHeight=_screenHeight;
- (long long)screenHeightValue;
@property(readonly, copy, nonatomic) NSNumber *screenWidth; // @synthesize screenWidth=_screenWidth;
- (long long)screenWidthValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) SOJUAdStoryImpressionTrack *story; // @synthesize story=_story;
@property(readonly, copy, nonatomic) SOJUAdSubscribeImpressionTrack *subscribe; // @synthesize subscribe=_subscribe;
@property(readonly, copy, nonatomic) NSArray *thirdPartyUrls; // @synthesize thirdPartyUrls=_thirdPartyUrls;
@property(readonly, copy, nonatomic) SOJUAdThreeVImpressionTrack *threeV; // @synthesize threeV=_threeV;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) SOJUAdUnlockableViewImpressionTrack *unlockableView; // @synthesize unlockableView=_unlockableView;
@property(readonly, copy, nonatomic) NSDictionary *viewContext; // @synthesize viewContext=_viewContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

