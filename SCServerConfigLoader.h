//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, SCCache, SCQueuePerformer, SCSessionRequestManager;

@interface SCServerConfigLoader : NSObject
{
    SCQueuePerformer *_performer;
    SCSessionRequestManager *_requestManager;
    SCCache *_cache;
    NSString *_endpoint;
    NSMutableSet *_serverConfigsBeingFetchedToCache;
    NSMutableDictionary *_fetchServerConfigBlocksDict;
    long long _expireSeconds;
}

- (void).cxx_destruct;
- (void)_executeAllRefetchFromCacheRequestsWithTypeKey:(id)arg1;
- (void)_fetchServerConfigFromServerAndSaveToCacheTypeKey:(id)arg1 requestParams:(id)arg2 decodingBlock:(CDUnknownBlockType)arg3 validateConfigBlock:(CDUnknownBlockType)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_setupRefetchFromCacheRequestWithTypeKey:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fetchCachedServerConfigWithKey:(id)arg1 requestParams:(id)arg2 decodingBlock:(CDUnknownBlockType)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)fetchServerConfigWithKey:(id)arg1 requestParams:(id)arg2 decodingBlock:(CDUnknownBlockType)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)fetchServerConfigWithKey:(id)arg1 requestParams:(id)arg2 decodingBlock:(CDUnknownBlockType)arg3 validateConfigBlock:(CDUnknownBlockType)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)initWithUserSession:(id)arg1 cacheDirectory:(id)arg2 queueLabel:(char *)arg3 endpoint:(id)arg4 expireSeconds:(long long)arg5;

@end

