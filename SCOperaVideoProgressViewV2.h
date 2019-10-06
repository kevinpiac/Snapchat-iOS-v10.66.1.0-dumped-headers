//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NSTimer, UILabel;

@interface SCOperaVideoProgressViewV2 : UIView
{
    double _currentProgress;
    double _currentProgressBarHeight;
    UIView *_completedProgressBar;
    UIView *_remainingProgressBar;
    UILabel *_completedProgressLabel;
    UILabel *_remainingProgressLabel;
    NSString *_progressLabelText;
    long long _timeLeft;
    NSTimer *_autoResetColorTimer;
    double _progressBarDurationSec;
    double _nonVideoViewTimeSec;
    _Bool _disableProgressBarMinimizedState;
}

- (void).cxx_destruct;
- (_Bool)collapseProgressViewIfNeeded;
- (_Bool)expandProgressViewIfNeeded;
- (id)init;
- (void)layoutSubviews;
- (void)pulseProgressViewIfNeeded;
- (void)setProgress:(double)arg1;
- (void)setProgressViewWithVideoLayer:(id)arg1;
- (void)setProgressWithVideoViewTimeSec:(double)arg1 mediaDurationSec:(double)arg2;
- (void)showDefaultProgressView;
- (void)updateProgressLabelWithTimeLeft:(double)arg1;

@end

