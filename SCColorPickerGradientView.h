//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, SCGradientView, SCShapeView, UIBezierPath;

@interface SCColorPickerGradientView : UIView
{
    _Bool _animateForCompact;
    _Bool _adjustingColorEnabled;
    _Bool _alphaEnabled;
    _Bool _useColorPickerV2;
    UIBezierPath *_maskPath;
    SCGradientView *_gradientView;
    SCGradientView *_gradientViewForColorLookup;
    SCShapeView *_shapeMaskView;
    NSArray *_currentColors;
    NSArray *_currentCGColors;
    double _adjustedBrightness;
    double _adjustedSaturation;
    double _adjustedAlpha;
    double _savedHue;
}

- (void).cxx_destruct;
- (void)_adjustColors;
- (void)_setupColorsFromPalette:(id)arg1;
- (void)_setupGradientView;
- (void)adjustAlpha:(double)arg1;
- (void)adjustBrightness:(double)arg1;
- (void)adjustSaturation:(double)arg1;
@property(nonatomic) double adjustedAlpha; // @synthesize adjustedAlpha=_adjustedAlpha;
@property(nonatomic) double adjustedBrightness; // @synthesize adjustedBrightness=_adjustedBrightness;
@property(nonatomic) double adjustedSaturation; // @synthesize adjustedSaturation=_adjustedSaturation;
@property(nonatomic) _Bool animateForCompact; // @synthesize animateForCompact=_animateForCompact;
@property(retain, nonatomic) NSArray *currentCGColors; // @synthesize currentCGColors=_currentCGColors;
@property(retain, nonatomic) NSArray *currentColors; // @synthesize currentColors=_currentColors;
- (id)gradientColorForLocation:(struct CGPoint)arg1;
@property(retain, nonatomic) SCGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) SCGradientView *gradientViewForColorLookup; // @synthesize gradientViewForColorLookup=_gradientViewForColorLookup;
- (id)initWithPaletteModel:(id)arg1;
@property(nonatomic, getter=isAdjustingColorEnabled) _Bool adjustingColorEnabled; // @synthesize adjustingColorEnabled=_adjustingColorEnabled;
@property(nonatomic, getter=isAlphaEnabled) _Bool alphaEnabled; // @synthesize alphaEnabled=_alphaEnabled;
- (void)layoutSubviews;
- (struct CGPoint)locationForColor:(id)arg1;
@property(retain, nonatomic) UIBezierPath *maskPath; // @synthesize maskPath=_maskPath;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)reloadColorsFromPalette:(id)arg1;
@property(nonatomic) double savedHue; // @synthesize savedHue=_savedHue;
@property(retain, nonatomic) SCShapeView *shapeMaskView; // @synthesize shapeMaskView=_shapeMaskView;
@property(nonatomic) _Bool useColorPickerV2; // @synthesize useColorPickerV2=_useColorPickerV2;

@end

