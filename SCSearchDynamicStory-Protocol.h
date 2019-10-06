//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString, SCMedia, SCSearchDynamicStoryReportingInfo, SCSearchStoryIcon, SCSearchThumbnail;

@protocol SCSearchDynamicStory <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSData *adPlacementMetadata;
@property(readonly, copy, nonatomic) NSDictionary *attachmentsByType;
@property(readonly, nonatomic) unsigned long long corpus;
@property(readonly, copy, nonatomic) NSString *coverSnapId;
@property(readonly, copy, nonatomic) NSDictionary *debugInfo;
@property(readonly, nonatomic) double displayTimestampSecs;
@property(readonly, nonatomic) long long dynamicStoryType;
@property(readonly, copy, nonatomic) NSString *emoji;
@property(readonly, copy, nonatomic) SCSearchStoryIcon *icon;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) _Bool isCampusStory;
@property(readonly, nonatomic) _Bool isHidden;
@property(readonly, nonatomic) _Bool isSubscribable;
@property(readonly, nonatomic) _Bool isSubscribed;
@property(readonly, nonatomic) float latitude;
@property(readonly, nonatomic) float longitude;
@property(readonly, copy, nonatomic) NSString *placeId;
@property(readonly, copy, nonatomic) NSString *placeRating;
@property(readonly, copy, nonatomic) SCSearchDynamicStoryReportingInfo *reportingInfo;
@property(readonly, copy, nonatomic) SCSearchThumbnail *searchThumbnailMedia;
@property(readonly, copy, nonatomic) NSArray *snaps;
@property(readonly, copy, nonatomic) NSString *snippet;
@property(readonly, copy, nonatomic) NSString *storyId;
@property(readonly, nonatomic) float storyScore;
@property(readonly, nonatomic) long long storyType;
@property(readonly, copy, nonatomic) NSArray *subtitles;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) double totalDuration;
@property(readonly, nonatomic) unsigned long long totalNumSnaps;
@property(readonly, nonatomic) long long version;
@property(readonly, copy, nonatomic) SCMedia *videoThumbnailMedia;
@end

