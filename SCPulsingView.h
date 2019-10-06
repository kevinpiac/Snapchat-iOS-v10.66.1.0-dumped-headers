//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SCPulsingView : UIView
{
    _Bool _wantsAnimating;
    double _startingAlpha;
    double _alternatingAlpha;
    double _pulseDuration;
    struct CGAffineTransform _startingTransform;
    struct CGAffineTransform _alternatingTransform;
}

- (void)_performAnimationTickIfNecessary;
@property(nonatomic) double alternatingAlpha; // @synthesize alternatingAlpha=_alternatingAlpha;
@property(nonatomic) struct CGAffineTransform alternatingTransform; // @synthesize alternatingTransform=_alternatingTransform;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAnimating;
@property(nonatomic) double pulseDuration; // @synthesize pulseDuration=_pulseDuration;
- (void)setHidden:(_Bool)arg1;
@property(nonatomic) double startingAlpha; // @synthesize startingAlpha=_startingAlpha;
@property(nonatomic) struct CGAffineTransform startingTransform; // @synthesize startingTransform=_startingTransform;
- (void)startAnimating;
- (void)stopAnimatingImmediately;
- (void)stopAnimatingWithComplete:(CDUnknownBlockType)arg1;

@end

