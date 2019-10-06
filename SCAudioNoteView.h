//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, NSString, SCAudioNoteWaveformAnimation, UIColor;

@interface SCAudioNoteView : UIView
{
    CADisplayLink *_displayLink;
    double _elapsedTime;
    SCAudioNoteWaveformAnimation *_waveformAnimation;
    NSString *_mediaId;
    unsigned long long _status;
    struct CGPoint _bubbleCenter;
    _Bool _isSender;
    UIColor *_waveformColor;
}

+ (_Bool)_isPlayButtonBarWithIndex:(long long)arg1;
+ (long long)_waveformStartIndex;
+ (id)borderColor;
- (void).cxx_destruct;
- (void)_drawActiveStateAudioNoteWaveformFrameWithValues:(double *)arg1 isActiveState:(_Bool)arg2;
- (void)_drawAudioNoteAnimationForAudioNotePlayerStatusPaused;
- (void)_drawAudioNoteAnimationForAudioNotePlayerStatusPlaying;
- (void)_drawAudioNoteAnimationForAudioNotePlayerStatusStopped;
- (void)_drawAudioNoteProgressCircle;
- (void)_getInactiveStateWaveformFrameValues:(double *)arg1;
- (void)clearContents;
- (void)displayDidRefresh:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAnimating;
@property(nonatomic) _Bool isSender; // @synthesize isSender=_isSender;
- (void)layoutSubviews;
- (id)progressCircleColor;
- (void)setAudioNoteViewStatus:(unsigned long long)arg1 withElapsedTime:(double)arg2;
- (void)setMediaId:(id)arg1;
@property(copy, nonatomic) UIColor *waveformColor; // @synthesize waveformColor=_waveformColor;
- (void)startAnimating;
- (void)stopAnimating;

@end

