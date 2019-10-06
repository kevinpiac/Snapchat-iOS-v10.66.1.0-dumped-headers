//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, SCCompositeNetworkImageModel, SCCompositeNetworkImageView, SCLoadingIndicatorView, UIImageView, UILabel;
@protocol SCCompositeNetworkImageDownloading;

@interface SCCommerceStoreItemCollectionViewCell : UICollectionViewCell
{
    _Bool _useCompositeNetworkImageView;
    _Bool _setupComplete;
    SCCompositeNetworkImageModel *_compositeImageModel;
    id <SCCompositeNetworkImageDownloading> _imageDownloader;
    UILabel *_productTitleLabel;
    UILabel *_productPriceLabel;
    UILabel *_strikeThroughPriceLabel;
    UILabel *_outOfStockLabel;
    UIImageView *_productImageView;
    SCLoadingIndicatorView *_imageLoadingIndicator;
    NSString *_productImageUrl;
    SCCompositeNetworkImageView *_compositeNetworkImageView;
}

+ (double)cellHeightWithNumColumns:(unsigned long long)arg1;
+ (double)cellPaddingWithNumColumns:(unsigned long long)arg1;
+ (double)cellWidthWithNumColumns:(unsigned long long)arg1;
+ (double)imageHeightWithNumColumns:(unsigned long long)arg1;
+ (double)textBlockHeight;
- (void).cxx_destruct;
- (void)_configureImageWithUrl:(id)arg1 userSession:(id)arg2;
- (void)_initImageView;
- (void)_initNetworkImageView;
- (void)_initPriceLabel;
- (void)_initTitleLabel;
- (void)_setupOutOfStockLabel;
- (void)_setupPriceLabel;
- (void)_setupStrikeThroughLabels;
@property(retain, nonatomic) SCCompositeNetworkImageModel *compositeImageModel; // @synthesize compositeImageModel=_compositeImageModel;
@property(retain, nonatomic) SCCompositeNetworkImageView *compositeNetworkImageView; // @synthesize compositeNetworkImageView=_compositeNetworkImageView;
- (void)delayedUpdateWithCompositeImageModel:(id)arg1;
@property(retain, nonatomic) id <SCCompositeNetworkImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) SCLoadingIndicatorView *imageLoadingIndicator; // @synthesize imageLoadingIndicator=_imageLoadingIndicator;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UILabel *outOfStockLabel; // @synthesize outOfStockLabel=_outOfStockLabel;
- (void)prepareForReuse;
@property(retain, nonatomic) NSString *productImageUrl; // @synthesize productImageUrl=_productImageUrl;
@property(retain, nonatomic) UIImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(retain, nonatomic) UILabel *productPriceLabel; // @synthesize productPriceLabel=_productPriceLabel;
@property(retain, nonatomic) UILabel *productTitleLabel; // @synthesize productTitleLabel=_productTitleLabel;
- (void)setOutOfStockProductWithTitle:(id)arg1;
- (void)setProductWithTitle:(id)arg1 productPrice:(id)arg2;
@property(retain, nonatomic) UILabel *strikeThroughPriceLabel; // @synthesize strikeThroughPriceLabel=_strikeThroughPriceLabel;
- (void)setStrikeThroughProductWithTitle:(id)arg1 productPrice:(id)arg2 strikeThroughPrice:(id)arg3;
- (void)setupWithCompositeRendererEnabled:(_Bool)arg1;

@end
