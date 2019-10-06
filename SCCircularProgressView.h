//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCCircularProgressViewModel, SCLoadingIndicatorLayer, UILabel;

@interface SCCircularProgressView : UIView
{
    SCCircularProgressViewModel *_viewModel;
    SCLoadingIndicatorLayer *_percentArcLayer;
    SCLoadingIndicatorLayer *_backgroundLayer;
    UILabel *_percentText;
    float _progress;
}

- (void).cxx_destruct;
- (void)_createLoadingSubviews;
- (double)_cycleLineWidth;
- (id)_pulsingAnimationWithSecondsPerCycle:(double)arg1 isBackgroundLayer:(_Bool)arg2;
- (void)_updatePulsingAnimationBasedOnProgress:(float)arg1;
- (double)_viewSize;
- (id)initWithViewModel:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)isAnimating;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)startAnimating;
- (void)stopAnimating;

@end

