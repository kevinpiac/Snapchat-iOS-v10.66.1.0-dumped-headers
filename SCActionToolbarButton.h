//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class SCActionToolbarBadgeView, UIImage, UIImageView;

@interface SCActionToolbarButton : UIControl
{
    UIImage *_image;
    UIImage *_lightImage;
    long long _badgeCount;
    double _lightImageAlpha;
    UIImageView *_imageView;
    UIImageView *_lightImageView;
    SCActionToolbarBadgeView *_badgeView;
}

- (void).cxx_destruct;
@property(nonatomic) long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property(retain, nonatomic) SCActionToolbarBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *lightImage; // @synthesize lightImage=_lightImage;
@property(nonatomic) double lightImageAlpha; // @synthesize lightImageAlpha=_lightImageAlpha;
@property(retain, nonatomic) UIImageView *lightImageView; // @synthesize lightImageView=_lightImageView;
- (void)setBadgeCount:(long long)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)tintColorDidChange;

@end

