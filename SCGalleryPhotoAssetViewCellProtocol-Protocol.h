//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGalleryCellTransitioning-Protocol.h"
#import "SCGalleryViewCellSelecting-Protocol.h"
#import "SCGalleryViewCellUpdating-Protocol.h"

@class PHAsset, PHImageManager, SCUserSession;
@protocol SCGalleryPhotoAssetViewCellDelegate;

@protocol SCGalleryPhotoAssetViewCellProtocol <SCGalleryViewCellSelecting, SCGalleryCellTransitioning, SCGalleryViewCellUpdating>
- (void)setImageManager:(PHImageManager *)arg1 photoAsset:(PHAsset *)arg2 thumbnailSize:(struct CGSize)arg3 contentsUnloaded:(_Bool)arg4 selectMode:(_Bool)arg5 userSession:(SCUserSession *)arg6 delegate:(id <SCGalleryPhotoAssetViewCellDelegate>)arg7;
@end
