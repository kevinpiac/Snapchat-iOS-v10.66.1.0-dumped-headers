//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCShapeView.h"

@interface SCCameraTimerV2SpinnerView : SCShapeView
{
    double _tailGrowthSpeedMultiplier;
}

- (id)initWithFrame:(struct CGRect)arg1 maskImage:(id)arg2 spinnerColor:(id)arg3;
@property(nonatomic) double tailGrowthSpeedMultiplier; // @synthesize tailGrowthSpeedMultiplier=_tailGrowthSpeedMultiplier;
- (void)updateWithDiameter:(double)arg1 rotationCount:(double)arg2 thickness:(double)arg3;

@end

