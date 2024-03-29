//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, SCCaptionCarouselView, UIImageView;

@interface SCCaptionCarouselContainerView : UIView
{
    UIView *_carouselViewWithMask;
    UIView *_footerGradientView;
    _Bool _shouldEnableUserTaggingButton;
    UIImageView *_mentionButtonFloatingView;
    CAGradientLayer *_maskLayer;
    CAGradientLayer *_backgroundGradient;
    SCCaptionCarouselView *_carouselView;
}

- (void).cxx_destruct;
- (void)_setupCarouselView:(struct CGRect)arg1;
- (void)_setupFooterGradientView;
- (void)_setupMaskLayer:(struct CGRect)arg1;
- (void)_setupMentionButtonFloatingView;
@property(retain) SCCaptionCarouselView *carouselView; // @synthesize carouselView=_carouselView;
- (id)initWithFrame:(struct CGRect)arg1 shouldEnableUserTaggingButton:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGRect)mentionButtonViewFrame;
- (void)switchMentionButtonToImageWithAssetName:(id)arg1;

@end

