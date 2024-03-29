//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCAPIClient;

@interface SCStoryDiagnosticsLogger : NSObject
{
    double _initiateSnapLoadStartTime;
    _Bool _shouldSamplePlaybackMetrics;
    SCAPIClient *_httpClient;
    NSMutableDictionary *_loadingFriendStories;
}

+ (unsigned long long)entryReasonFromPreviousExitEvent:(long long)arg1;
+ (id)sharedInstance;
+ (id)stringForSnapEntryReason:(unsigned long long)arg1;
+ (id)stringFromLoadContext:(long long)arg1;
- (void).cxx_destruct;
- (void)_didStartWaitingForSnapToLoadWithStory:(id)arg1 currentStoriesViewingSession:(id)arg2;
- (void)_didViewSnapWithoutWaitingForLoadingWithStory:(id)arg1 currentStoriesViewingSession:(id)arg2 isStreaming:(_Bool)arg3;
- (void)_logBlizzardStorySnapWaitTime:(id)arg1 snapIndexPos:(unsigned long long)arg2 snapIndexCount:(unsigned long long)arg3 storyIndexPos:(unsigned long long)arg4 hasWaitTime:(_Bool)arg5 itemLoadState:(long long)arg6 sessionId:(long long)arg7 entryReason:(unsigned long long)arg8 viewLocation:(long long)arg9 finishWaitingReason:(unsigned long long)arg10 friendStories:(id)arg11 isStreaming:(_Bool)arg12;
- (void)_logBlizzardStoryStoryLoadForFriendStories:(id)arg1 viewingType:(long long)arg2 storiesLoadedCount:(unsigned long long)arg3 success:(_Bool)arg4 loadingSession:(id)arg5;
- (void)_logTapToViewMetricEventEndOnLoadingScreen:(_Bool)arg1 currentStoriesViewingSession:(id)arg2;
- (void)_setupLoadingFriendStories;
- (_Bool)_shouldLogPlaybackMetrics;
- (_Bool)_shouldLogPlaybackMetricsForSearchOrMapStoryOnMasterApp:(id)arg1;
- (void)clearState;
- (void)didFinishWaitingForStorySnapToLoad:(id)arg1 isStreaming:(_Bool)arg2;
- (void)didShowNetworkErrorForStory:(id)arg1 currentStoriesViewingSession:(id)arg2 isStreaming:(_Bool)arg3;
- (void)didStartToPlayStorySnap:(id)arg1;
- (void)didStartWaitingForStorySnapToLoad:(id)arg1;
- (void)didViewStorySnapWithoutWaitingForLoading:(id)arg1 isStreaming:(_Bool)arg2;
@property(retain, nonatomic) SCAPIClient *httpClient; // @synthesize httpClient=_httpClient;
- (id)init;
@property(retain, nonatomic) NSMutableDictionary *loadingFriendStories; // @synthesize loadingFriendStories=_loadingFriendStories;
- (void)logBatchStateChanged:(id)arg1 viewingType:(long long)arg2 loadedStories:(id)arg3;
- (void)logClearChecksums:(long long)arg1 checksumsKey:(id)arg2;
- (void)logFetchMediaForFriendStories:(id)arg1 viewingType:(long long)arg2 loadContext:(long long)arg3 storiesToLoad:(id)arg4 viewLocation:(long long)arg5 userInitiated:(_Bool)arg6;
- (void)logMediaFrozenWithSnapId:(id)arg1 storyType:(id)arg2;
- (void)logMediaViewPlaybackError:(id)arg1 withSnapId:(id)arg2 storyType:(id)arg3;
- (void)logPlaybackItemActionForFriendStories:(id)arg1 story:(id)arg2 playSource:(long long)arg3 currentStoriesViewingSession:(id)arg4;
- (void)onDidFinishWaitingForDeepLink:(id)arg1 result:(id)arg2;
- (void)onDidStartWaitingForDeepLink;
- (void)onStoryStoryViewStart:(id)arg1;
- (id)typeStringForFinishReason:(unsigned long long)arg1;

@end

