//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, SCCompositeNetworkImageModel, SCCompositeNetworkImageView, SCLoadingIndicatorView, UIImageView;
@protocol SCCompositeNetworkImageDownloading;

@interface SCCommerceStoreHeroImageCollectionViewCell : UICollectionViewCell
{
    _Bool _useCompositeNetworkImageView;
    SCCompositeNetworkImageModel *_compositeImageModel;
    id <SCCompositeNetworkImageDownloading> _imageDownloader;
    UIImageView *_heroImageView;
    SCLoadingIndicatorView *_imageLoadingIndicator;
    NSString *_heroImageUrl;
    SCCompositeNetworkImageView *_compositeNetworkImageView;
}

- (void).cxx_destruct;
- (void)_initImageView;
- (void)_initNetworkImageView;
@property(retain, nonatomic) SCCompositeNetworkImageModel *compositeImageModel; // @synthesize compositeImageModel=_compositeImageModel;
@property(retain, nonatomic) SCCompositeNetworkImageView *compositeNetworkImageView; // @synthesize compositeNetworkImageView=_compositeNetworkImageView;
- (void)delayedUpdateWithCompositeImageModel:(id)arg1;
@property(retain, nonatomic) NSString *heroImageUrl; // @synthesize heroImageUrl=_heroImageUrl;
@property(retain, nonatomic) UIImageView *heroImageView; // @synthesize heroImageView=_heroImageView;
@property(retain, nonatomic) id <SCCompositeNetworkImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) SCLoadingIndicatorView *imageLoadingIndicator; // @synthesize imageLoadingIndicator=_imageLoadingIndicator;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)setImageWithUrl:(id)arg1 userSession:(id)arg2;
- (void)setupWithCompositeRendererEnabled:(_Bool)arg1;

@end

