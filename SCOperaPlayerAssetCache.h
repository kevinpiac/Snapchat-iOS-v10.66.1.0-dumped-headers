//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLRUCacheDelegate-Protocol.h"
#import "SCOperaPlayerAssetCacheHandler-Protocol.h"

@class NSMutableDictionary, NSString, SCLRUCache;
@protocol SCOperaPlayerAssetCacheDelegate;

@interface SCOperaPlayerAssetCache : NSObject <SCLRUCacheDelegate, SCOperaPlayerAssetCacheHandler>
{
    SCLRUCache *_playerAssetCache;
    long long _cacheMissCount;
    long long _cacheHitCount;
    NSMutableDictionary *_timeToLoadAssetMap;
    double _totalTimeToPrepareInSec;
    id <SCOperaPlayerAssetCacheDelegate> _delegate;
}

+ (id)_assetKeys;
- (void).cxx_destruct;
- (void)_logMetrics:(id)arg1;
- (void)add:(id)arg1 pageId:(id)arg2;
- (id)assetWithURL:(id)arg1 pageId:(id)arg2;
- (void)cache:(id)arg1 didEvictObject:(id)arg2 forKey:(id)arg3;
- (_Bool)containsPageId:(id)arg1;
@property(nonatomic) __weak id <SCOperaPlayerAssetCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (id)initWithSize:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

