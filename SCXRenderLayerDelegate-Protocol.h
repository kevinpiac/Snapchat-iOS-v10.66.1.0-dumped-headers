//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SCXRenderLayer;

@protocol SCXRenderLayerDelegate <NSObject>

@optional
- (void)renderLayer:(SCXRenderLayer *)arg1 didLoadTileMetadataForTileIds:(NSArray *)arg2;
@end
