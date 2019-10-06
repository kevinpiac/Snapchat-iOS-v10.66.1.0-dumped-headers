//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, SCLazy, SCQueuePerformer, SCStoriesCallbackArray;
@protocol SCStoriesThumbnailCaching;

@interface SCMyStoriesMediaThumbnailGenerator : NSObject
{
    SCQueuePerformer *_performer;
    SCLazy *_mediaProvider;
    id <SCStoriesThumbnailCaching> _cachingDelegate;
    NSString *_tempDirectory;
    NSMutableDictionary *_thumbnailTypesToGenerateByCacheKey;
    NSMutableDictionary *_thumbnailTypesToForceablyGenerateByCacheKey;
    SCStoriesCallbackArray *_completionBlocksByThumbnailKey;
}

- (void).cxx_destruct;
- (void)_clearGeneratedThumbnailTypes:(id)arg1 generatedThumbnails:(id)arg2;
- (void)_createThumbnailsForMediaInfo:(id)arg1 thumbnailTypes:(id)arg2;
- (void)_generateThumbnailsOnBackgroundThread:(id)arg1 thumbnailTypes:(id)arg2 mediaData:(id)arg3 overlayData:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_handleFetchedMedia:(id)arg1 thumbnailTypes:(id)arg2 mediaData:(id)arg3 overlayData:(id)arg4;
- (void)_handleGeneratedThumbnail:(id)arg1 generatedThumbnails:(id)arg2;
- (void)createThumbnailForThumbnailInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceablyCreateThumbnailsForMediaInfo:(id)arg1 thumbnailTypes:(id)arg2;
- (id)initWithPerformer:(id)arg1 cachingDelegate:(id)arg2;
- (void)setMediaProvider:(id)arg1;

@end

