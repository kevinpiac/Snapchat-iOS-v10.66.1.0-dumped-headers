//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FriendStories, SCMTPointOfInterest, SCMapLoggerSession, SCUserSession;
@protocol SCCanceling;

@interface SCMapTapToPlayPOIMediaFetcher : NSObject
{
    double _mapZoomLevel;
    SCMapLoggerSession *_loggerSession;
    SCUserSession *_userSession;
    id <SCCanceling> _manifestRequest;
    CDUnknownBlockType _mediaCompletion;
    _Bool _started;
    _Bool _cancelled;
    SCMTPointOfInterest *_poi;
    FriendStories *_friendStories;
}

+ (id)reportedStoryIds;
- (void).cxx_destruct;
- (void)_fetchManifestAndFetchFirstStory:(_Bool)arg1 isTappedPOI:(_Bool)arg2;
- (void)_fetchStoryMedia:(id)arg1 isTappedPOI:(_Bool)arg2;
- (id)_previewFriendStoriesForPoi:(id)arg1 isOnboarding:(_Bool)arg2;
- (void)_safeMediaCompletionWithStory:(id)arg1 result:(unsigned long long)arg2;
- (void)cancelFetch;
- (void)cancelMediaDownloads;
- (id)description;
- (void)fetchManifestAndFirstStoryMediaForTappedPOI:(_Bool)arg1 storyMediaRequestCompletion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) FriendStories *friendStories; // @synthesize friendStories=_friendStories;
- (id)initWithPOI:(id)arg1 mapZoomLevel:(double)arg2 isOnboarding:(_Bool)arg3 loggerSession:(id)arg4 userSession:(id)arg5;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) SCMTPointOfInterest *poi; // @synthesize poi=_poi;

@end

