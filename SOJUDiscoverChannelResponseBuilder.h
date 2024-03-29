//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, SOJUAdPlacementMetadata, SOJUBroadcastArticleMetadataList, SOJUDiscoverModerationStoryModeration, SOJUSponsoredSlugPosAndText;

@interface SOJUDiscoverChannelResponseBuilder : NSObject
{
    NSString *_name;
    NSNumber *_position;
    NSNumber *_storiesPagePosition;
    NSNumber *_promotedStoriesPagePosition;
    NSString *_publisherName;
    NSString *_publisherFormalName;
    NSString *_publisherDescription;
    NSString *_publisherDeeplink;
    NSString *_filledIcon;
    NSString *_invertedIcon;
    NSString *_loadingIcon;
    NSString *_introMovie;
    NSString *_primaryColor;
    NSString *_secondaryColor;
    NSNumber *_editionId;
    NSString *_editionPublishingTimestamp;
    NSArray *_dsnapsData;
    SOJUAdPlacementMetadata *_introVideoAdMetadata;
    NSNumber *_sponsored;
    SOJUSponsoredSlugPosAndText *_sponsoredSlug;
    NSNumber *_subscribable;
    SOJUBroadcastArticleMetadataList *_tileList;
    NSString *_subscribedImage;
    NSString *_horizontalIcon;
    NSString *_region;
    NSString *_promoteDemoteStatus;
    NSString *_hashValue;
    NSString *_searchIcon;
    NSNumber *_isShow;
    NSNumber *_editionVersion;
    NSNumber *_rollingNewsEnabled;
    NSNumber *_isHiddenInStoryScreen;
    NSNumber *_isSubscribed;
    NSArray *_publisherFeatures;
    NSArray *_contentTags;
    NSArray *_segments;
    NSDictionary *_tags;
    NSDictionary *_contentAccessWhitelists;
    NSArray *_localContent;
    NSNumber *_publisherId;
    NSString *_showId;
    NSString *_businessId;
    NSNumber *_shareable;
    NSNumber *_hasCuratedSnaps;
    NSNumber *_viewableOnWeb;
    NSDictionary *_contentAccessLists;
    NSString *_contentType;
    SOJUDiscoverModerationStoryModeration *_moderation;
}

+ (id)withJUDiscoverChannelResponse:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setBusinessId:(id)arg1;
- (id)setContentAccessLists:(id)arg1;
- (id)setContentAccessWhitelists:(id)arg1;
- (id)setContentTags:(id)arg1;
- (id)setContentType:(id)arg1;
- (id)setContentTypeEnum:(long long)arg1;
- (id)setDsnapsData:(id)arg1;
- (id)setEditionId:(id)arg1;
- (id)setEditionIdValue:(long long)arg1;
- (id)setEditionPublishingTimestamp:(id)arg1;
- (id)setEditionVersion:(id)arg1;
- (id)setEditionVersionValue:(long long)arg1;
- (id)setFilledIcon:(id)arg1;
- (id)setHasCuratedSnaps:(id)arg1;
- (id)setHasCuratedSnapsValue:(_Bool)arg1;
- (id)setHashValue:(id)arg1;
- (id)setHorizontalIcon:(id)arg1;
- (id)setIntroMovie:(id)arg1;
- (id)setIntroVideoAdMetadata:(id)arg1;
- (id)setInvertedIcon:(id)arg1;
- (id)setIsHiddenInStoryScreen:(id)arg1;
- (id)setIsHiddenInStoryScreenValue:(_Bool)arg1;
- (id)setIsShow:(id)arg1;
- (id)setIsShowValue:(_Bool)arg1;
- (id)setIsSubscribed:(id)arg1;
- (id)setIsSubscribedValue:(_Bool)arg1;
- (id)setLoadingIcon:(id)arg1;
- (id)setLocalContent:(id)arg1;
- (id)setModeration:(id)arg1;
- (id)setName:(id)arg1;
- (id)setPosition:(id)arg1;
- (id)setPositionValue:(int)arg1;
- (id)setPrimaryColor:(id)arg1;
- (id)setPromoteDemoteStatus:(id)arg1;
- (id)setPromoteDemoteStatusEnum:(long long)arg1;
- (id)setPromotedStoriesPagePosition:(id)arg1;
- (id)setPromotedStoriesPagePositionValue:(int)arg1;
- (id)setPublisherDeeplink:(id)arg1;
- (id)setPublisherDescription:(id)arg1;
- (id)setPublisherFeatures:(id)arg1;
- (id)setPublisherFormalName:(id)arg1;
- (id)setPublisherId:(id)arg1;
- (id)setPublisherIdValue:(long long)arg1;
- (id)setPublisherName:(id)arg1;
- (id)setRegion:(id)arg1;
- (id)setRollingNewsEnabled:(id)arg1;
- (id)setRollingNewsEnabledValue:(_Bool)arg1;
- (id)setSearchIcon:(id)arg1;
- (id)setSecondaryColor:(id)arg1;
- (id)setSegments:(id)arg1;
- (id)setShareable:(id)arg1;
- (id)setShareableValue:(_Bool)arg1;
- (id)setShowId:(id)arg1;
- (id)setSponsored:(id)arg1;
- (id)setSponsoredSlug:(id)arg1;
- (id)setSponsoredValue:(_Bool)arg1;
- (id)setStoriesPagePosition:(id)arg1;
- (id)setStoriesPagePositionValue:(int)arg1;
- (id)setSubscribable:(id)arg1;
- (id)setSubscribableValue:(_Bool)arg1;
- (id)setSubscribedImage:(id)arg1;
- (id)setTags:(id)arg1;
- (id)setTileList:(id)arg1;
- (id)setViewableOnWeb:(id)arg1;
- (id)setViewableOnWebValue:(_Bool)arg1;

@end

