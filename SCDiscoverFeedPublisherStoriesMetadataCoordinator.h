//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCCache, SCQueuePerformer;

@interface SCDiscoverFeedPublisherStoriesMetadataCoordinator : NSObject
{
    SCCache *_cache;
    SCQueuePerformer *_cachePerformer;
}

- (void).cxx_destruct;
- (void)_addChunkMetadataWithMediaId:(id)arg1 data:(id)arg2;
- (void)_chuckMetadataWithMediaId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addChunkMetadataWithMediaId:(id)arg1 data:(id)arg2;
- (void)chunkMetadataWithMediaId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCache:(id)arg1;

@end
