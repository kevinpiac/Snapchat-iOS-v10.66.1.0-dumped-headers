//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCTPresenceBubbleView.h"

@class SCTMiniWaveformView, UIImageView;

@interface SCTPresenceSpeechBubbleView : SCTPresenceBubbleView
{
    UIImageView *_backgroundView;
    UIImageView *_micImageView;
    SCTMiniWaveformView *_waveformView;
    long long _mode;
}

- (void).cxx_destruct;
- (void)_initMicImageView;
- (void)_initWaveformView;
- (void)animateToWaveformWithCompletion:(CDUnknownBlockType)arg1;
- (void)hideWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithMode:(long long)arg1;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
- (void)remakeConstraintsAfterAttachingToBitmojiView:(id)arg1 upperBodyView:(id)arg2;
- (void)show;
- (void)showWithCompletion:(CDUnknownBlockType)arg1;
- (void)startWaveformAnimation;
- (void)stopWaveformAnimation;
- (void)updateConstraintsWithBitmojiState:(struct SCTPresenceBitmojiState)arg1;

@end

