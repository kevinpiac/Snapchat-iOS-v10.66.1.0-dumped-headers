//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCXRenderLayer;
@protocol SCXBitmojiAssetProvider;

@interface SCXFloorSpriteTextureBinder : NSObject
{
    SCXRenderLayer *_renderLayer;
    id <SCXBitmojiAssetProvider> _assetProvider;
}

+ (CDUnknownBlockType)_imageFetcherForDefaultFloor;
- (void).cxx_destruct;
- (void)_bindDefaultFloorImageToSprite:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_bindRemoteFloorImageToSprite:(id)arg1 remoteImageURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_imageFetcherForRemoteImageURL:(id)arg1;
- (void)bindTextureIfNeededToSprite:(id)arg1;
- (void)bindTextureIfNeededToSprite:(id)arg1 forced:(_Bool)arg2;
- (id)initWithRenderLayer:(id)arg1 assetProvider:(id)arg2;

@end

