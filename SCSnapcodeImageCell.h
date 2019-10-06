//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSnapcodeCollectionCell.h"

@class PHAsset, PHImageManager, SCSentinel;

@interface SCSnapcodeImageCell : SCSnapcodeCollectionCell
{
    SCSentinel *_sentinel;
    PHImageManager *_imageManager;
    PHAsset *_photoAsset;
    _Bool _requestingThumbnailImage;
    int _thumbnailImageRequestID;
    struct CGSize _thumbnailSize;
}

- (void).cxx_destruct;
- (void)loadFullScreenImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForReuse;
- (void)setCellViewImageManager:(id)arg1 photoAsset:(id)arg2 itemSize:(struct CGSize)arg3;

@end

