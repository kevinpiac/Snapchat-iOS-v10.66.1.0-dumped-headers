//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import "CAAnimationDelegate-Protocol.h"
#import "CALayerDelegate-Protocol.h"
#import "FBShimmering-Protocol.h"

@class FBShimmeringMaskLayer, NSString;

@interface FBShimmeringLayer : CALayer <CALayerDelegate, CAAnimationDelegate, FBShimmering>
{
    CALayer *_contentLayer;
    FBShimmeringMaskLayer *_maskLayer;
    _Bool _shimmering;
    double _shimmeringPauseDuration;
    double _shimmeringAnimationOpacity;
    double _shimmeringOpacity;
    double _shimmeringSpeed;
    double _shimmeringHighlightLength;
    long long _shimmeringDirection;
    double _shimmeringFadeTime;
    double _shimmeringBeginFadeDuration;
    double _shimmeringEndFadeDuration;
    double _shimmeringBeginTime;
}

- (void).cxx_destruct;
- (void)_clearMask;
- (void)_createMaskIfNeeded;
- (void)_updateMaskColors;
- (void)_updateMaskLayout;
- (void)_updateShimmering;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(retain, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
- (id)init;
@property(nonatomic, getter=isShimmering) _Bool shimmering; // @synthesize shimmering=_shimmering;
- (void)layoutSublayers;
@property(retain, nonatomic) FBShimmeringMaskLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
- (void)setBounds:(struct CGRect)arg1;
@property(nonatomic) double shimmeringAnimationOpacity; // @synthesize shimmeringAnimationOpacity=_shimmeringAnimationOpacity;
@property(nonatomic) double shimmeringBeginFadeDuration; // @synthesize shimmeringBeginFadeDuration=_shimmeringBeginFadeDuration;
@property(nonatomic) double shimmeringBeginTime; // @synthesize shimmeringBeginTime=_shimmeringBeginTime;
@property(nonatomic) long long shimmeringDirection; // @synthesize shimmeringDirection=_shimmeringDirection;
@property(nonatomic) double shimmeringEndFadeDuration; // @synthesize shimmeringEndFadeDuration=_shimmeringEndFadeDuration;
@property(nonatomic, getter=shimmeringHighlightLength, setter=setShimmeringHighlightLength:) double shimmeringHighlightWidth; // @dynamic shimmeringHighlightWidth;
@property(nonatomic) double shimmeringOpacity; // @synthesize shimmeringOpacity=_shimmeringOpacity;
@property(nonatomic) double shimmeringPauseDuration; // @synthesize shimmeringPauseDuration=_shimmeringPauseDuration;
@property(nonatomic) double shimmeringSpeed; // @synthesize shimmeringSpeed=_shimmeringSpeed;
@property(readonly, nonatomic) double shimmeringFadeTime; // @synthesize shimmeringFadeTime=_shimmeringFadeTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double shimmeringHighlightLength; // @synthesize shimmeringHighlightLength=_shimmeringHighlightLength;
@property(readonly) Class superclass;

@end

