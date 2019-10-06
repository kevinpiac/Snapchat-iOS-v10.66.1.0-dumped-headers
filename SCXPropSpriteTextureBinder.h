//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCXRenderLayer;
@protocol SCXBitmojiAssetProvider;

@interface SCXPropSpriteTextureBinder : NSObject
{
    SCXRenderLayer *_renderLayer;
    id <SCXBitmojiAssetProvider> _assetProvider;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)_imageFetcherForRemoteImageURL:(id)arg1;
- (void)bindTextureIfNeededToSprite:(id)arg1;
- (id)initWithRenderLayer:(id)arg1 assetProvider:(id)arg2;

@end
