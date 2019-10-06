//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface SCFeatureLevelerModeView : UIView
{
    _Bool _previouslyLeveling;
    _Bool _previouslyAnimatedLevelerVisible;
    CAShapeLayer *_animatedLayer;
    CAShapeLayer *_staticLayer;
    double _animatedLevelerInnerRadius;
    double _animatedLevelerOutterRadius;
}

- (void).cxx_destruct;
- (void)_drawLineOnPath:(struct CGPath *)arg1 withDeviceOrientation:(long long)arg2 Leveling:(_Bool)arg3 start:(struct CGPoint)arg4 end:(struct CGPoint)arg5 innerRadius:(double)arg6 outterRadius:(double)arg7;
- (void)_drawStaticLeveler;
- (_Bool)_levelingWithStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;
- (void)drawAnimatedLevelerWithDeviceOrientation:(long long)arg1 acceleration:(CDStruct_31142d93)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

