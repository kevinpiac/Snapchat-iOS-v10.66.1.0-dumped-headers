//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCCheetahClientDisplayInfo, SCDiscoverFeedCompositeStoryId, SCDiscoverFeedStoryDebugInfo, SCDiscoverFeedStoryLoggingInfo, SCDiscoverFeedStoryOperaContext;
@protocol NSCopying><NSCoding;

@interface SCDiscoverFeedStoryBuilder : NSObject
{
    SCDiscoverFeedCompositeStoryId *_compositeStoryId;
    unsigned long long _storyDedupeFp;
    long long _storyType;
    float _tileAspectRatio;
    _Bool _isSubscribed;
    _Bool _isSubscribable;
    _Bool _isOptedInNotifications;
    _Bool _isFeatured;
    NSString *_featuredBannerText;
    SCDiscoverFeedStoryDebugInfo *_debugInfo;
    NSObject<NSCopying><NSCoding> *_storyContent;
    SCDiscoverFeedStoryLoggingInfo *_storyLoggingInfo;
    float _score;
    _Bool _rankShouldBeFixed;
    _Bool _isSensitive;
    _Bool _isFullyViewed;
    unsigned long long _hideAfterWatch;
    SCCheetahClientDisplayInfo *_clientDisplayInfo;
    double _latestUpdateTimestampSecs;
    SCDiscoverFeedStoryOperaContext *_operaContext;
    _Bool _hasUpNextRecommendations;
    _Bool _isMarkedSubscribedInStoryResponse;
}

+ (id)discoverFeedStory;
+ (id)discoverFeedStoryFromExistingDiscoverFeedStory:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withClientDisplayInfo:(id)arg1;
- (id)withCompositeStoryId:(id)arg1;
- (id)withDebugInfo:(id)arg1;
- (id)withFeaturedBannerText:(id)arg1;
- (id)withHasUpNextRecommendations:(_Bool)arg1;
- (id)withHideAfterWatch:(unsigned long long)arg1;
- (id)withIsFeatured:(_Bool)arg1;
- (id)withIsFullyViewed:(_Bool)arg1;
- (id)withIsMarkedSubscribedInStoryResponse:(_Bool)arg1;
- (id)withIsOptedInNotifications:(_Bool)arg1;
- (id)withIsSensitive:(_Bool)arg1;
- (id)withIsSubscribable:(_Bool)arg1;
- (id)withIsSubscribed:(_Bool)arg1;
- (id)withLatestUpdateTimestampSecs:(double)arg1;
- (id)withOperaContext:(id)arg1;
- (id)withRankShouldBeFixed:(_Bool)arg1;
- (id)withScore:(float)arg1;
- (id)withStoryContent:(id)arg1;
- (id)withStoryDedupeFp:(unsigned long long)arg1;
- (id)withStoryLoggingInfo:(id)arg1;
- (id)withStoryType:(long long)arg1;
- (id)withTileAspectRatio:(float)arg1;

@end
