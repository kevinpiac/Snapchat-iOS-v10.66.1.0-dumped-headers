//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString, SCMedia, SCSearchDynamicStoryReportingInfo, SCSearchStoryIcon, SCSearchThumbnail;

@interface SCSearchDynamicStoryBuilder : NSObject
{
    NSString *_storyId;
    NSArray *_snaps;
    NSString *_coverSnapId;
    SCSearchThumbnail *_searchThumbnailMedia;
    SCMedia *_videoThumbnailMedia;
    NSString *_title;
    NSArray *_subtitles;
    SCSearchStoryIcon *_icon;
    NSString *_snippet;
    NSString *_emoji;
    double _displayTimestampSecs;
    NSDictionary *_attachmentsByType;
    float _storyScore;
    unsigned long long _totalNumSnaps;
    double _totalDuration;
    SCSearchDynamicStoryReportingInfo *_reportingInfo;
    NSData *_adPlacementMetadata;
    NSDictionary *_debugInfo;
    long long _storyType;
    NSString *_placeId;
    NSString *_placeRating;
    long long _dynamicStoryType;
    float _latitude;
    float _longitude;
    _Bool _isSubscribable;
    _Bool _isSubscribed;
    _Bool _isHidden;
    _Bool _isCampusStory;
    unsigned long long _corpus;
    NSString *_identifier;
    long long _version;
}

+ (id)withSearchDynamicStory:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAdPlacementMetadata:(id)arg1;
- (id)setAttachmentsByType:(id)arg1;
- (id)setCorpus:(unsigned long long)arg1;
- (id)setCoverSnapId:(id)arg1;
- (id)setDebugInfo:(id)arg1;
- (id)setDisplayTimestampSecs:(double)arg1;
- (id)setDynamicStoryType:(long long)arg1;
- (id)setEmoji:(id)arg1;
- (id)setIcon:(id)arg1;
- (id)setIdentifier:(id)arg1;
- (id)setIsCampusStory:(_Bool)arg1;
- (id)setIsHidden:(_Bool)arg1;
- (id)setIsSubscribable:(_Bool)arg1;
- (id)setIsSubscribed:(_Bool)arg1;
- (id)setLatitude:(float)arg1;
- (id)setLongitude:(float)arg1;
- (id)setPlaceId:(id)arg1;
- (id)setPlaceRating:(id)arg1;
- (id)setReportingInfo:(id)arg1;
- (id)setSearchThumbnailMedia:(id)arg1;
- (id)setSnaps:(id)arg1;
- (id)setSnippet:(id)arg1;
- (id)setStoryId:(id)arg1;
- (id)setStoryScore:(float)arg1;
- (id)setStoryType:(long long)arg1;
- (id)setSubtitles:(id)arg1;
- (id)setTitle:(id)arg1;
- (id)setTotalDuration:(double)arg1;
- (id)setTotalNumSnaps:(unsigned long long)arg1;
- (id)setVersion:(long long)arg1;
- (id)setVideoThumbnailMedia:(id)arg1;

@end
