//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLRUCacheDelegate-Protocol.h"

@class NSMutableSet, NSString, SCLRUCache, SCMTTileSetInfo;

@interface SCXTileSet : NSObject <SCLRUCacheDelegate>
{
    NSMutableSet *_pendingTiles;
    SCLRUCache *_loadedTiles;
    _Bool _evictsTilesOnIDChange;
    int _type;
    NSString *_name;
    SCMTTileSetInfo *_tileSetInfo;
}

- (void).cxx_destruct;
- (void)_setTile:(id)arg1 forID:(id)arg2;
- (void)cache:(id)arg1 didEvictObject:(id)arg2 forKey:(id)arg3;
@property(nonatomic) _Bool evictsTilesOnIDChange; // @synthesize evictsTilesOnIDChange=_evictsTilesOnIDChange;
- (id)init;
- (void)loadTiles:(id)arg1;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)purgeNonVisibleTileIds:(id)arg1;
- (void)requestDidFailForTileIds:(id)arg1;
@property(copy, nonatomic) SCMTTileSetInfo *tileSetInfo; // @synthesize tileSetInfo=_tileSetInfo;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)tileForId:(id)arg1;
- (id)tilesStillNeededFromTileIds:(id)arg1;
- (void)willRequestTileIds:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

