//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoriesThumbnailCaching-Protocol.h"
#import "SCStoriesThumbnailCoordinating-Protocol.h"

@class NSMutableDictionary, NSString, SCDataCoordinatorListenerAnnouncer, SCMyStoriesMediaThumbnailGenerator, SCQueuePerformer, SCStoriesCallbackArray, SCStoriesMediaDownloader, SCStoriesMediaStore;

@interface SCStoriesThumbnailCoordinator : NSObject <SCStoriesThumbnailCoordinating, SCStoriesThumbnailCaching>
{
    SCStoriesMediaStore *_mediaStore;
    NSMutableDictionary *_mediaStateCache;
    SCStoriesCallbackArray *_completionBlocksByThumbnailURL;
    SCQueuePerformer *_performer;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCQueuePerformer *_announcerPerformer;
    SCMyStoriesMediaThumbnailGenerator *_thumbnailGenerator;
    SCStoriesMediaDownloader *_mediaDownloader;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_createThumbnailsIfMissing:(id)arg1;
- (void)_handleFailureCallbackForThumbnailInfo:(id)arg1;
- (void)_handleMissingThumbnail:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handlePutThumbnailResponse:(id)arg1 thumbnailData:(id)arg2 success:(_Bool)arg3;
- (void)_handleRemovedAllMediaFromCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleSuccessCallbackForThumbnailInfo:(id)arg1 responseData:(id)arg2;
- (void)_invokeCompletionBlocksForThumbnailURL:(id)arg1 thumbnailData:(id)arg2;
- (CDUnknownBlockType)_mediaDownloadCallback:(id)arg1;
- (_Bool)_shouldGenerateThumbnailForMedia:(id)arg1 thumbnailType:(unsigned long long)arg2;
- (void)_updateMediaStateForMediaCacheKey:(id)arg1 thumbnailType:(unsigned long long)arg2 mediaState:(long long)arg3;
- (void)_updateMediaStateForThumbnail:(id)arg1 mediaState:(long long)arg2;
- (void)addDataUpdateListener:(id)arg1;
- (void)addThumbnail:(id)arg1 thumbnailMedia:(id)arg2 expirationDate:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)handleDataRequest:(id)arg1;
- (id)initWithStoriesMediaStore:(id)arg1 sessionRequestManager:(id)arg2;
@property(retain, nonatomic) SCStoriesMediaDownloader *mediaDownloader; // @synthesize mediaDownloader=_mediaDownloader;
- (void)queryThumbnailForThumbnailInfo:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAllThumbnailsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeDataUpdateListener:(id)arg1;
- (void)removeThumbnailsForSnapMediaCacheKey:(id)arg1;
@property(retain, nonatomic) SCMyStoriesMediaThumbnailGenerator *thumbnailGenerator; // @synthesize thumbnailGenerator=_thumbnailGenerator;
- (void)updateWithMediaProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
