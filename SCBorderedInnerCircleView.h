//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCLoadingIndicatorView, UIImageView;

@interface SCBorderedInnerCircleView : UIView
{
    UIImageView *_imageView;
    SCLoadingIndicatorView *_loadingSpinner;
    UIView *_borderView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
- (void)configureBorderedThumbnailWithAlpha:(double)arg1;
- (void)hideSpinner;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) SCLoadingIndicatorView *loadingSpinner; // @synthesize loadingSpinner=_loadingSpinner;
- (void)showSpinner;

@end
