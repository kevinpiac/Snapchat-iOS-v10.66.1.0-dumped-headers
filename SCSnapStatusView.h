//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCStatusView.h"

@class NSTimer, SCSnapReplayAnimationView, UILabel;
@protocol SCSnapReplayConfig, SCSnapReplayViewCellDelegate;

@interface SCSnapStatusView : SCStatusView
{
    UILabel *_timerLabel;
    SCSnapReplayAnimationView *_replayAnimationView;
    UILabel *_subLabel;
    NSTimer *_snapTimer;
    long long _countDownValue;
    id <SCSnapReplayViewCellDelegate> _replayDelegate;
    id <SCSnapReplayConfig> _viewModel;
}

+ (id)subLabelTextColor;
+ (id)timerFont;
- (void).cxx_destruct;
- (void)didEndDisplay;
- (void)hideTimerText;
- (id)initWithFlattenedRenderStrategy:(_Bool)arg1;
- (void)prepareForReuse;
@property(nonatomic) __weak id <SCSnapReplayViewCellDelegate> replayDelegate; // @synthesize replayDelegate=_replayDelegate;
- (void)setSubLabelText:(id)arg1;
@property(retain, nonatomic) id <SCSnapReplayConfig> viewModel; // @synthesize viewModel=_viewModel;
- (void)startCountDownAnimationWithInitialValue:(long long)arg1;
- (void)startSnapReplayAnimationIfNecessary;
- (id)subLabel;
- (void)updateCountDownAnimation;

@end
