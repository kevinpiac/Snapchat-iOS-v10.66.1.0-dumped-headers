//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCBaseUploadableChatMedia.h"

@class NSData, NSString, SOJUSnapMetadata;

@interface SCUploadableSnap3DChatImage : SCBaseUploadableChatMedia
{
    NSData *_thumbnailData;
    SOJUSnapMetadata *_snapMetadata;
    NSString *_lensMetadata;
}

- (void).cxx_destruct;
- (id)_archiveMediaData:(id)arg1 imageWithOverlay:(id)arg2 overlayImage:(id)arg3 useWebP:(_Bool)arg4 webPQuality:(double)arg5 snap3DAssetMetadata:(id)arg6 lensAssetsBlob:(id)arg7 error:(id *)arg8;
- (id)_bakeImageWithOverlay:(id)arg1 overlayImage:(id)arg2;
- (id)_compressImageData:(id)arg1;
- (id)_metadataDictionaryFromMetadata:(id)arg1;
- (id)_thumbnailDataFrom:(id)arg1;
- (_Bool)isZipped;
@property(readonly, copy, nonatomic) NSString *lensMetadata; // @synthesize lensMetadata=_lensMetadata;
- (long long)mediaType;
- (void)setImage:(id)arg1 overlayImage:(id)arg2 useWebP:(_Bool)arg3 webPQuality:(double)arg4 isImageBakedWithOverlay:(_Bool)arg5 snap3DAssetMetadata:(id)arg6 lensAssetsBlob:(id)arg7;
- (void)setImage:(id)arg1 overlayImage:(id)arg2 useWebP:(_Bool)arg3 webPQuality:(double)arg4 isImageBakedWithOverlay:(_Bool)arg5 snap3DAssetMetadata:(id)arg6 lensAssetsBlob:(id)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (id)snapMetadata;
- (void)thumbnailMediaData:(CDUnknownBlockType)arg1;

@end

