//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMapTable, NSMutableArray;

@interface SCLoadingIndicatorView : UIView
{
    unsigned long long _size;
    _Bool _shouldResumeAnimating;
    NSMutableArray *_arcLayers;
    NSMapTable *_identifierArcLayerMap;
    NSMapTable *_arcLayerConfigMap;
    _Bool _hidesWhenStopped;
    _Bool _scaleLineWidth;
}

- (void).cxx_destruct;
- (double)_animationEndLineWidthForSize:(unsigned long long)arg1;
- (id)_colorWithColorStyle:(unsigned long long)arg1;
- (void)_configureWithSize:(unsigned long long)arg1 color:(id)arg2;
- (struct UIOffset)_edgeOffsetsForInnerArcForSize:(unsigned long long)arg1;
- (id)_lineThicknessAnimationWithStartArcWidth:(double)arg1 endArcWidth:(double)arg2;
- (void)_removeLoadingArcWithIdentifier:(id)arg1;
- (id)_rotateIndefinitelyAnimationWithRotationStartAngle:(double)arg1 secondsPerCycle:(double)arg2 direction:(long long)arg3 onLayer:(id)arg4;
- (void)_startAnimatingArcLayer:(id)arg1 withConfiguration:(id)arg2;
- (void)_startAnimatingCircleArcLayer:(id)arg1 startArcWidth:(double)arg2 endArcWidth:(double)arg3 strokeSecondsPerCycle:(double)arg4 strokeStartPercent:(double)arg5 strokeEndPercent:(double)arg6 secondsPerCycle:(double)arg7 rotationStartAngle:(double)arg8 rotationEndAngle:(double)arg9 direction:(long long)arg10;
- (void)_stopAnimatingArcLayer:(id)arg1;
- (id)_strokeEndAnimationWithStrokeStartPercent:(double)arg1 strokeEndPercent:(double)arg2 secondsPerCycle:(double)arg3;
- (void)addLoadingArcWithIdentifier:(id)arg1 configuration:(CDUnknownBlockType)arg2;
- (void)appDidEnterBackground:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
- (id)initWithColor:(id)arg1 size:(unsigned long long)arg2;
- (id)initWithColorStyle:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) _Bool isAnimating;
- (void)layoutSublayersOfLayer:(id)arg1;
@property(nonatomic) _Bool scaleLineWidth; // @synthesize scaleLineWidth=_scaleLineWidth;
- (void)setTintColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)startAnimating;
- (void)stopAnimating;

@end

