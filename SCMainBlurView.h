//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIVisualEffectView.h>

@class UIImageView, UIView;

@interface SCMainBlurView : UIVisualEffectView
{
    double _percentVisible;
    UIView *_overlayView;
    UIImageView *_gradientView;
}

- (void).cxx_destruct;
- (void)_addAnimationIfNeeded;
- (void)_removeAnimation;
@property(retain, nonatomic) UIImageView *gradientView; // @synthesize gradientView=_gradientView;
- (id)init;
- (void)layoutSubviews;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) double percentVisible; // @synthesize percentVisible=_percentVisible;
- (void)setPercentVisible:(double)arg1 animated:(_Bool)arg2;

@end
