//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCDocObjectContext, SCLazy;
@protocol SCStoriesGrapheneMetricsEmitting;

@interface SCStoriesViewerListDataCoordinator : NSObject
{
    SCDocObjectContext *_docObjectContext;
    SCLazy *_mixerRequester;
    SCLazy *_snapchatterFetcher;
    SCLazy *_snapchatterPublicInfoFetcher;
    id <SCStoriesGrapheneMetricsEmitting> _grapheneMetricsEmitter;
    NSString *_currentUserId;
}

- (void).cxx_destruct;
- (void)_fetchRemoteSnapchattersWithUserIds:(id)arg1 fetchStartTime:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchSnapchattersWithUserIds:(id)arg1 fetchStartTime:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchUsernamesWithUserIds:(id)arg1 fetchStartTime:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleFetchedLocalSnapchattersFailureWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleFetchedLocalSnapchattersWithUserIds:(id)arg1 snapchatterByUserId:(id)arg2 fetchStartTime:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleFetchedViewerInfoFailureWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleFetchedViewerInfoWithResponse:(id)arg1 fetchStartTime:(double)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleFetchedViewerInfoWithResponse:(id)arg1 userIdToUsername:(id)arg2 fetchStartTime:(double)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_localUserIdToUsernameFromDocObject;
- (void)_logApplyViewerInfoResponse:(_Bool)arg1 fetchStartTime:(double)arg2;
- (void)_logLatencyWithFetchStartTime:(double)arg1 step:(id)arg2;
- (void)_logRemoteSnapchatterFetchResult:(id)arg1;
- (void)_removeSnapViewersWithExcludedSnapIds:(id)arg1;
- (void)fetchViewerInfoWithSnapIds:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDocObjectContext:(id)arg1 mixerRequester:(id)arg2 snapchatterFetcher:(id)arg3 snapchatterPublicInfoFetcher:(id)arg4 grapheneMetricsEmitter:(id)arg5 currentUserId:(id)arg6;
- (void)removeViewerListsWithSnapIds:(id)arg1;
- (id)viewersWithSnapId:(id)arg1;

@end

