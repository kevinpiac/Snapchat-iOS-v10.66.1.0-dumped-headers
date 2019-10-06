//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCRefreshableDebugViewDelegate-Protocol.h"

@class NSString, SCCachingMediaManager, SCRefreshableDebugView;

@interface SCGalleryCacheStatsDebugController : NSObject <SCRefreshableDebugViewDelegate>
{
    SCCachingMediaManager *_cachingMediaManager;
    SCRefreshableDebugView *_debugView;
}

+ (id)_timeString;
- (void).cxx_destruct;
- (void)_cacheFileStatsWithCacheDirectory:(id)arg1 queue:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)debugViewDidTapRefresh:(id)arg1;
- (id)initWithCachingMediaManager:(id)arg1;
- (void)show;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
