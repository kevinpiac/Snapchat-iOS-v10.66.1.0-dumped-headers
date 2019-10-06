//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaLayerView-Protocol.h"

@class NSString, UIImageView, UILabel;
@protocol SCOperaInterstitialLayerThumbnailViewPlayable;

@interface SCOperaInterstitialLayerView : UIView <SCOperaLayerView>
{
    UIView *_scalableContainerView;
    UILabel *_titleLabel;
    UIImageView *_thumbnailMediaContainerView;
    UIView<SCOperaInterstitialLayerThumbnailViewPlayable> *_thumbnailMediaView;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutThumbnailView;
- (void)layoutTitleLabel;
- (void)renderThumbnailWithViewProvider:(id)arg1;
@property(readonly, nonatomic) UIView *scalableContainerView; // @synthesize scalableContainerView=_scalableContainerView;
- (void)setupViewForLayer:(id)arg1;
- (void)tearDownThumbnailIfNeccesary;
@property(readonly, nonatomic) UIImageView *thumbnailMediaContainerView; // @synthesize thumbnailMediaContainerView=_thumbnailMediaContainerView;
@property(readonly, nonatomic) UIView<SCOperaInterstitialLayerThumbnailViewPlayable> *thumbnailMediaView; // @synthesize thumbnailMediaView=_thumbnailMediaView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateWithHorizontalOffset:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
