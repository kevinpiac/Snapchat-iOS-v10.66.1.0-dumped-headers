//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCHovaTabBarItemView.h"

@class NSString, SCCameraTimerCollapsedView;

@interface SCHovaTabBarCameraItemView : SCHovaTabBarItemView
{
    double _imageWidthDifference;
    SCCameraTimerCollapsedView *_cameraView;
}

- (void).cxx_destruct;
- (void)addSubview:(id)arg1;
- (id)cameraTimerView;
@property(retain, nonatomic) SCCameraTimerCollapsedView *cameraView; // @synthesize cameraView=_cameraView;
- (double)cameraViewWidth;
- (double)imageViewWidth;
@property(nonatomic) double imageWidthDifference; // @synthesize imageWidthDifference=_imageWidthDifference;
- (id)initWithFrame:(struct CGRect)arg1 itemType:(long long)arg2;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)layoutSubviews;
- (void)setInterfaceStyle:(long long)arg1;
- (void)setPercentVisible:(double)arg1;
- (void)setVerticallyVisible:(_Bool)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *backgroundImageName; // @dynamic backgroundImageName;
@property(retain, nonatomic) NSString *darkModeImageName; // @dynamic darkModeImageName;

@end
