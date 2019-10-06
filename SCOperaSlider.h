//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, SCOperaSliderScrubber, UIColor, UILabel, UILongPressGestureRecognizer, UIView;
@protocol SCOperaSliderDelegate, UIGestureRecognizerDelegate;

@interface SCOperaSlider : UIControl
{
    UIView *_filledSliderView;
    UIView *_unfilledSliderView;
    SCOperaSliderScrubber *_scrubber;
    UIView *_containerView;
    UILabel *_scrubberValueLabel;
    NSArray *_breakViews;
    double _sliderWidth;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    struct CGRect _prevBounds;
    float _value;
    float _minimumValue;
    float _maximumValue;
    NSArray *_breaks;
    UIColor *_fillColor;
    UIColor *_unfilledColor;
    UIColor *_scrubberColor;
    UIColor *_breakColor;
    id <UIGestureRecognizerDelegate> _gestureRecognizerDelegate;
    id <SCOperaSliderDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_beginSliderGrowAnimation;
- (void)_didSelectNewValue:(double)arg1;
- (void)_didTapSlider:(id)arg1;
- (void)_endSliderGrowAnimation;
- (void)_longPress:(id)arg1;
- (void)_setup;
- (void)_setupScrubber;
- (void)_setupSlider;
@property(retain, nonatomic) UIColor *breakColor; // @synthesize breakColor=_breakColor;
@property(retain, nonatomic) NSArray *breaks; // @synthesize breaks=_breaks;
@property(nonatomic) __weak id <SCOperaSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> gestureRecognizerDelegate; // @synthesize gestureRecognizerDelegate=_gestureRecognizerDelegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(retain, nonatomic) UIColor *scrubberColor; // @synthesize scrubberColor=_scrubberColor;
@property(retain, nonatomic) UIColor *unfilledColor; // @synthesize unfilledColor=_unfilledColor;
@property(nonatomic) float value; // @synthesize value=_value;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

