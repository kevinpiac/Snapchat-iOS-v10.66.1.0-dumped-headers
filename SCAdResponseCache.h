//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SCAdResponseCache : NSObject
{
    NSMutableDictionary *_cache;
}

- (void).cxx_destruct;
- (void)cacheAdResponses:(id)arg1 targetingParameters:(id)arg2;
- (void)clearCache;
- (void)clearExpiredCacheWithTTLInSeconds:(double)arg1 targetingParameters:(id)arg2;
- (id)getAdResponse:(id)arg1;
- (id)init;

@end

