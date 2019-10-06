//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, SCSSMOurStoryMetadata_LensMetaData, SCSSMStoryThumbnail;

@interface SCSSMOurStoryMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *adPlacementMetadata; // @dynamic adPlacementMetadata;
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(copy, nonatomic) NSString *displayGeoInfo; // @dynamic displayGeoInfo;
@property(nonatomic) long long displayTimestampSecs; // @dynamic displayTimestampSecs;
@property(copy, nonatomic) NSString *emoji; // @dynamic emoji;
@property(nonatomic) _Bool hasLensMetadata; // @dynamic hasLensMetadata;
@property(nonatomic) _Bool hasStoryThumbnail; // @dynamic hasStoryThumbnail;
@property(nonatomic) _Bool isCampusStory; // @dynamic isCampusStory;
@property(nonatomic) _Bool isNews; // @dynamic isNews;
@property(nonatomic) _Bool isPartnered; // @dynamic isPartnered;
@property(nonatomic) _Bool isSensitive; // @dynamic isSensitive;
@property(nonatomic) _Bool isShareable; // @dynamic isShareable;
@property(retain, nonatomic) SCSSMOurStoryMetadata_LensMetaData *lensMetadata; // @dynamic lensMetadata;
@property(copy, nonatomic) NSString *logoURL; // @dynamic logoURL;
@property(copy, nonatomic) NSString *miniProfileIconURL; // @dynamic miniProfileIconURL;
@property(copy, nonatomic) NSString *miniProfileTitle; // @dynamic miniProfileTitle;
@property(retain, nonatomic) SCSSMStoryThumbnail *storyThumbnail; // @dynamic storyThumbnail;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) double totalDurationSecs; // @dynamic totalDurationSecs;
@property(nonatomic) int totalNumSnaps; // @dynamic totalNumSnaps;

@end
