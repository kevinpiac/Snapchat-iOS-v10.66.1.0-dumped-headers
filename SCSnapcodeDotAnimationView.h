//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSTimer, UIColor;

@interface SCSnapcodeDotAnimationView : UIView
{
    UIView *_dotContainerView;
    UIView *_ghostContainerView;
    UIView *_borderContainerView;
    NSTimer *_animTimer;
    NSMutableDictionary *_dotViews;
    _Bool _includeBorder;
    double _canvasScale;
    double _ghostScale;
    double _finalAlphaValue;
    UIColor *_pointColor;
}

- (void).cxx_destruct;
- (double)_remainingAnimationDurationForAlpha:(double)arg1;
- (void)cleanTimers;
- (id)createPointView:(struct CGPoint)arg1 pointSize:(double)arg2;
- (void)fadeToggle:(id)arg1;
- (void)fadeToggleStart:(id)arg1;
- (void)initBlankGhost;
- (void)initDots;
- (id)initWithBackgroundHexColor:(id)arg1 includeBorder:(_Bool)arg2 canvasScale:(double)arg3 ghostScale:(double)arg4;
@property(retain, nonatomic) UIColor *pointColor; // @synthesize pointColor=_pointColor;
- (void)showDots:(_Bool)arg1 duration:(double)arg2;
- (void)updateDots:(id)arg1;
- (void)updateFrameWithAlpha:(double)arg1;
- (void)viewWillAppear;
- (void)warmup;

@end
