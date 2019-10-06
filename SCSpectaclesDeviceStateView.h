//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, SCSpectaclesBatteryStatusView, UIBezierPath, UIColor, UIImageView;

@interface SCSpectaclesDeviceStateView : UIView
{
    UIBezierPath *_outerCirclePathLarge;
    UIBezierPath *_outerCirclePathSmall;
    UIBezierPath *_innerCirclePathLarge;
    UIBezierPath *_innerCirclePathSmall;
    UIBezierPath *_outerCirclePathCurrent;
    UIBezierPath *_innerCirclePathCurrent;
    CAShapeLayer *_outerLayer;
    CAShapeLayer *_innerLayer;
    UIImageView *_iconImageView;
    SCSpectaclesBatteryStatusView *_batteryStatusView;
    UIColor *_strokeColor;
    double _opacityWhenNotConnected;
    double _batteryLevel;
    long long _iconType;
}

- (void).cxx_destruct;
- (void)_animateIcon:(long long)arg1;
- (void)_animateIconImageSubView:(long long)arg1;
- (void)_animateIconSpectaclesEyeSubView:(id)arg1 newInnerCirclePath:(id)arg2;
- (void)_animateImageForImageView:(id)arg1 iconType:(long long)arg2;
- (struct CGPoint)_iconCenterForType:(long long)arg1;
- (id)_iconImageNameForType:(long long)arg1;
- (_Bool)_shouldAnimateSlowly:(id)arg1 newInnerCirclePath:(id)arg2;
@property(nonatomic) double batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
- (id)initWithStrokeColor:(id)arg1;
- (id)initWithStrokeColor:(id)arg1 opacityWhenNotConnected:(double)arg2;

@end
