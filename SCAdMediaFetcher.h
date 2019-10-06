//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCQueuePerformer, SCSnapAdsAdLifecycleWatermarkEventsTracker, SCUserSession;

@interface SCAdMediaFetcher : NSObject
{
    SCUserSession *_userSession;
    SCQueuePerformer *_mainQueuePerformer;
    SCQueuePerformer *_requestPerformer;
    SCQueuePerformer *_successResponsePerformer;
    NSMutableDictionary *_pendingUnarchiveRecords;
    SCSnapAdsAdLifecycleWatermarkEventsTracker *_lifecycleTracker;
}

- (void).cxx_destruct;
- (void)_fetchFromMediaLocationV2:(id)arg1 contexts:(id)arg2 priority:(long long)arg3 index:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_fetchPetraMedia:(id)arg1 mediaId:(id)arg2 contexts:(id)arg3 priority:(long long)arg4 index:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_fetchRSPMediaFromContentManager:(id)arg1 media:(id)arg2 mediaManager:(id)arg3 mediaId:(id)arg4 isTopSnapStreamingVideo:(_Bool)arg5 isDynamicAdInsertion:(_Bool)arg6 adRequestClientId:(id)arg7 contexts:(id)arg8 featureType:(long long)arg9 priority:(long long)arg10 index:(long long)arg11 isPromotedStories:(_Bool)arg12 enableChunkDeprecation:(_Bool)arg13 completion:(CDUnknownBlockType)arg14;
- (void)_handleDownloadedRSPData:(id)arg1 media:(id)arg2 mediaManager:(id)arg3 endpoint:(id)arg4 mediaId:(id)arg5 isTopSnapStreamingVideo:(_Bool)arg6 adRequestClientId:(id)arg7 isDynamicAdInsertion:(_Bool)arg8 downloadStartTimestamp:(double)arg9 shouldFireCacheMetrics:(_Bool)arg10 enableChunkDeprecation:(_Bool)arg11 completion:(CDUnknownBlockType)arg12;
- (id)_newDownloadRequestForEndpoint:(id)arg1 requestKey:(id)arg2 contexts:(id)arg3 priority:(long long)arg4 index:(long long)arg5 trackingId:(id)arg6;
- (id)copySections:(id)arg1 withIdModifier:(id)arg2;
- (void)didFinishUnarchivingForEndpoint:(id)arg1;
- (void)fetchMediaV2:(id)arg1 adMediaManager:(id)arg2 adSnapIndex:(long long)arg3 isDynamicAdInsertion:(_Bool)arg4 contexts:(id)arg5 featureType:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)fetchMediaV2IfNeeded:(id)arg1 adMediaManager:(id)arg2 endpoint:(id)arg3 mediaId:(id)arg4 isTopSnapStreamingVideo:(_Bool)arg5 isDynamicAdInsertion:(_Bool)arg6 adClientRequestId:(id)arg7 contexts:(id)arg8 priority:(long long)arg9 featureType:(long long)arg10 isPromotedStories:(_Bool)arg11 index:(long long)arg12 completion:(CDUnknownBlockType)arg13;
- (void)fetchMediaV2IfNeeded:(id)arg1 adMediaManager:(id)arg2 endpoint:(id)arg3 mediaId:(id)arg4 isTopSnapStreamingVideo:(_Bool)arg5 isDynamicAdInsertion:(_Bool)arg6 adClientRequestId:(id)arg7 contexts:(id)arg8 priority:(long long)arg9 featureType:(long long)arg10 isPromotedStories:(_Bool)arg11 index:(long long)arg12 enableChunkDeprecation:(_Bool)arg13 completion:(CDUnknownBlockType)arg14;
- (_Bool)hasBegunUnarchivingForEndpoint:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (id)lifecycleTracker;
- (void)matchImage:(id)arg1 adMediaManager:(id)arg2 chunkDictionary:(id)arg3;
- (void)matchMediaWithAdResponse:(id)arg1 mediaManager:(id)arg2 chunkDictionary:(id)arg3 isTopSnapStreamingVideo:(_Bool)arg4 adRequestClientId:(id)arg5;
- (void)matchVideo:(id)arg1 adMediaManager:(id)arg2 chunkDictionary:(id)arg3 isTopSnapStreamingVideo:(_Bool)arg4;
- (void)saveUnarchiveBlockForEndpoint:(id)arg1 mediaId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sectionsFromChunk:(id)arg1 error:(id *)arg2 mediaId:(id)arg3 chunkHash:(id)arg4;
- (id)unarchiveRecordsForEndpoint:(id)arg1;
- (void)willBeginUnarchivingForEndpoint:(id)arg1;

@end
