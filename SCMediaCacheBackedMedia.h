//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCachableMedia-Protocol.h"

@class NSString, SCCache;

@interface SCMediaCacheBackedMedia : NSObject <SCCachableMedia>
{
    SCCache *_cache;
    NSString *_cacheKey;
}

- (void).cxx_destruct;
- (void)dataFromCacheCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithCacheKey:(id)arg1;
- (void)saveDataToCache:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

