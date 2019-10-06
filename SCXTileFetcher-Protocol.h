//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, SCMTGetLatestTileSetRequest, SCMTGetMapTilesMetadataRequest, SCMTGetMapTilesRequest;
@protocol OS_dispatch_queue;

@protocol SCXTileFetcher <NSObject>
- (void)rpcGetLatestTileSet:(SCMTGetLatestTileSetRequest *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 callback:(void (^)(NSError *, SCMTGetLatestTileSetResponse *))arg3;
- (void)rpcGetMapTiles:(SCMTGetMapTilesRequest *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 callback:(void (^)(NSError *, SCMTGetMapTilesResponse *))arg3;
- (void)rpcGetMapTilesMetadata:(SCMTGetMapTilesMetadataRequest *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 callback:(void (^)(NSError *, SCMTGetMapTilesMetadataResponse *))arg3;
@end

