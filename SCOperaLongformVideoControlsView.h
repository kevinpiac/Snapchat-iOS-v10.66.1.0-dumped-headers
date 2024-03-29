//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaVideoControlsView.h"

#import "SCOperaSliderDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCGradientView, SCGrowingButton, SCLazy, SCOperaSlider, UITapGestureRecognizer, UIView;

@interface SCOperaLongformVideoControlsView : SCOperaVideoControlsView <UIGestureRecognizerDelegate, SCOperaSliderDelegate>
{
    SCGradientView *_backgroundGradientView;
    SCGradientView *_bottomGradientView;
    SCGrowingButton *_pauseButton;
    SCLazy *_sendButtonLazy;
    SCLazy *_sendLabelLazy;
    UIView *_pauseButtonBackground;
    SCLazy *_sendButtonBackgroundLazy;
    SCOperaSlider *_slider;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _Bool _shouldShowSendButton;
    _Bool _isPaused;
    _Bool _wasPausedBeforeDrag;
}

- (void).cxx_destruct;
- (void)_didChangeSliderValue;
- (void)_didFinishDraggingSlider;
- (void)_didStartDraggingSlider;
- (void)_didTapPauseButton;
- (void)_didTapSendButton;
- (void)_didTapView:(id)arg1;
- (id)_sendButton;
- (id)_sendButtonBackground;
- (id)_sendLabel;
- (void)_setupGradientViews;
- (void)_setupLazySendButton;
- (void)_setupPauseButton;
- (void)_setupSlider;
- (void)_setupTapGesture;
- (void)_setupViews;
- (void)_updatePauseButtonToIsPaused:(_Bool)arg1;
- (void)adjustForTime:(double)arg1;
- (_Bool)controlsVisible;
- (float)currentTime;
- (void)fadeControls;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)resetControls;
- (void)setAdBreakTimes:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setSendButtonVisible:(_Bool)arg1;
- (void)showControls;
- (id)slider:(id)arg1 textLabelForValue:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

