//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCCache;
@protocol SCStoriesMediaDiskStoring;

@interface SCStoriesMediaStore : NSObject
{
    SCCache *_mediaCache;
    id <SCStoriesMediaDiskStoring> _diskStore;
}

- (void).cxx_destruct;
- (void)_fetchMediaForKey:(id)arg1 dataDecodingBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleFetchFromMediaCacheForKey:(id)arg1 media:(id)arg2 dataDecodingBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleFetchMediaFromDiskForKey:(id)arg1 media:(id)arg2 dataDecodingBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setMediaWithKey:(id)arg1 media:(id)arg2 expiration:(id)arg3 persistToDisk:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)cacheContainsKey:(id)arg1;
- (void)deleteAllMediaFromCacheWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllMediaWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteMediaForKeys:(id)arg1 fromDiskOnly:(_Bool)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithCache:(id)arg1 diskStore:(id)arg2;
- (void)queryMediaForKey:(id)arg1 dataDecodingBlock:(CDUnknownBlockType)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setMediaForKey:(id)arg1 media:(id)arg2 expiration:(id)arg3 persistToDisk:(_Bool)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;

@end
