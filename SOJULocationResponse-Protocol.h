//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUAdIdentityResponse, SOJUAdOpportunityRequestIds, SOJUCarouselConfig, SOJUUnlockablesPrecacheInfoForLocData, SOJUWeatherResponse;

@protocol SOJULocationResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUAdIdentityResponse *adIdentity;
@property(readonly, copy, nonatomic) NSArray *bitmojiFilters;
@property(readonly, copy, nonatomic) SOJUCarouselConfig *carousel;
@property(readonly, copy, nonatomic) NSNumber *clearCacheOurStoryAuths;
@property(readonly, copy, nonatomic) NSString *encGeocell;
@property(readonly, copy, nonatomic) NSArray *filters;
@property(readonly, copy, nonatomic) NSArray *geoStickerPacks;
@property(readonly, copy, nonatomic) NSArray *invalidFilterIds;
@property(readonly, copy, nonatomic) NSArray *lensFilters;
@property(readonly, copy, nonatomic) NSArray *mobStoryAuths;
@property(readonly, copy, nonatomic) SOJUAdOpportunityRequestIds *opportunityRequestIds;
@property(readonly, copy, nonatomic) NSArray *ourStoryAuths;
@property(readonly, copy, nonatomic) NSArray *preCacheGeofilters;
@property(readonly, copy, nonatomic) NSArray *preCacheGeolenses;
@property(readonly, copy, nonatomic) SOJUUnlockablesPrecacheInfoForLocData *precacheServingInfo;
@property(readonly, copy, nonatomic) NSArray *purposes;
@property(readonly, copy, nonatomic) NSArray *stickers;
@property(readonly, copy, nonatomic) NSArray *venueFilters;
@property(readonly, copy, nonatomic) SOJUWeatherResponse *weather;
@end

