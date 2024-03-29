//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoriesMediaCoordinating-Protocol.h"

@class NSString, SCDataCoordinatorListenerAnnouncer, SCExperimentManager;
@protocol SCStoriesContentDelivery;

@interface SCStoriesMediaCoordinatorUsingContentManagerImpl : NSObject <SCStoriesMediaCoordinating>
{
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    _Bool _travelModeEnabled;
    id <SCStoriesContentDelivery> _contentDelivery;
    SCExperimentManager *_experimentManager;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_announceDataCoordinatorUpdateWithDataRequest:(id)arg1;
- (void)_announceForceableDeletionsForCacheKeys:(id)arg1;
- (void)_announceOperationAndStateIdempotencyForAlreadyExistingCacheKey:(id)arg1 contentStatus:(long long)arg2;
- (long long)_mediaStateFromContentStatus:(long long)arg1;
- (void)_queryMediaDataForMediaInfo:(id)arg1 userInitiated:(_Bool)arg2 contexts:(id)arg3 requestInfo:(id)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_requestInfoForMedia:(id)arg1 userInitiated:(_Bool)arg2 contexts:(id)arg3 batchId:(id)arg4;
- (void)addDataUpdateListener:(id)arg1;
- (void)deleteAllMediaFromCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteMediaForMediaInfos:(id)arg1;
- (void)fetchMediaForMediaInfo:(id)arg1 userInitiated:(_Bool)arg2 completePrefetch:(_Bool)arg3 contexts:(id)arg4 batchId:(id)arg5;
- (void)handleDataRequest:(id)arg1;
- (id)initWithContentDelivery:(id)arg1 experimentManager:(id)arg2;
- (long long)mediaStateForMedia:(id)arg1;
- (void)queryCachedDataLocallyForMediaInfo:(id)arg1 contexts:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queryMediaDataForMediaInfo:(id)arg1 contexts:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)queryMediaForMediaInfo:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queryMediaStateForMedia:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)releaseLocalAuthoritativeStoriesMediaForCacheKeys:(id)arg1;
- (void)removeDataUpdateListener:(id)arg1;
- (void)saveStoriesMediaForMediaInfo:(id)arg1 decryptedMedia:(id)arg2 shouldGenerateThumbnails:(_Bool)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

