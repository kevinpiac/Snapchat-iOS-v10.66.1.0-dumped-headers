//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAShapeLayer, NSString, UIImageView;
@protocol SCDiscoverFeedUpNextAutoAdvanceTimerViewDelegate;

@interface SCDiscoverFeedUpNextAutoAdvanceTimerView : UIView <CAAnimationDelegate>
{
    UIImageView *_playImageView;
    UIView *_circleBackgroundView;
    CAShapeLayer *_circleLayer;
    id <SCDiscoverFeedUpNextAutoAdvanceTimerViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(nonatomic) __weak id <SCDiscoverFeedUpNextAutoAdvanceTimerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)pauseAnimatingTimer;
- (void)resetTimer;
- (void)resumeAnimatingTimeDuration:(double)arg1;
- (void)startAnimatingTimeDuration:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

