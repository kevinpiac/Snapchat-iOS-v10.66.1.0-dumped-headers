//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCGalleryPhotoAssetViewCellProtocol-Protocol.h"

@class CAShapeLayer, NSString, PHAsset, PHImageManager, SCGradientView, SCUserSession, UIImageView, UILabel, UIView;
@protocol SCGalleryPhotoAssetViewCellDelegate;

@interface SCGalleryPhotoAssetViewCell : UICollectionViewCell <SCGalleryPhotoAssetViewCellProtocol>
{
    id <SCGalleryPhotoAssetViewCellDelegate> _delegate;
    SCUserSession *_userSession;
    UIView *_contentWrapperView;
    UIImageView *_imageView;
    SCGradientView *_durationGradientView;
    UILabel *_durationLabel;
    UIImageView *_selectedOverlayView;
    PHImageManager *_imageManager;
    PHAsset *_photoAsset;
    struct CGSize _thumbnailSize;
    _Bool _contentsUnloaded;
    _Bool _selectMode;
    _Bool _requestingImage;
    int _imageRequestID;
    CAShapeLayer *_roundCornerMaskLayer;
}

- (void).cxx_destruct;
- (void)animateLongTapForTouchLocation:(struct CGPoint)arg1 reverse:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (unsigned long long)interactionMode;
- (void)prepareForReuse;
- (void)roundCorner:(unsigned long long)arg1;
- (void)setImageManager:(id)arg1 photoAsset:(id)arg2 thumbnailSize:(struct CGSize)arg3 contentsUnloaded:(_Bool)arg4 selectMode:(_Bool)arg5 userSession:(id)arg6 delegate:(id)arg7;
- (void)setSelectMode:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 selectOverlayImage:(id)arg2 snapIds:(id)arg3;
- (void)setTransitioningInitialImage:(id)arg1;
- (void)startGeneratingUpdates;
- (void)stopGeneratingUpdates;
- (id)transitioningExpandingView;
- (id)transitioningImage;
- (id)transitioningPosterFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
