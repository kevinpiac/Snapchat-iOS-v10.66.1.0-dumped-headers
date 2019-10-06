//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString, SOJUGalleryAltitudeInfoFilterStyle, SOJUGalleryDateInfoFilter, SOJUGalleryGroupInfoFilterStyle, SOJUGalleryMentionStickerStyle, SOJUGalleryRatingStickerStyle, SOJUGalleryRequestStickerStyle, SOJUGallerySnapcodeStickerStyle, SOJUGalleryTopicStickerStyle, SOJUGalleryVenueFilterInfoStyle;

@protocol SOJUGalleryInfoStickerStyle <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUGalleryAltitudeInfoFilterStyle *altitude;
@property(readonly, copy, nonatomic) SOJUGalleryDateInfoFilter *date;
@property(readonly, copy, nonatomic) SOJUGalleryGroupInfoFilterStyle *group;
@property(readonly, copy, nonatomic) SOJUGalleryMentionStickerStyle *mention;
@property(readonly, copy, nonatomic) SOJUGalleryRatingStickerStyle *rating;
@property(readonly, copy, nonatomic) SOJUGalleryRequestStickerStyle *request;
@property(readonly, copy, nonatomic) SOJUGallerySnapcodeStickerStyle *snapcode;
@property(readonly, copy, nonatomic) SOJUGalleryTopicStickerStyle *topic;
@property(readonly, copy, nonatomic) SOJUGalleryVenueFilterInfoStyle *venue;
@property(readonly, copy, nonatomic) NSString *weather;
@end

