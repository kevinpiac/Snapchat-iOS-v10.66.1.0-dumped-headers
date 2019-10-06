//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCAudioNoteWaveformAnimation : NSObject
{
    NSArray *_waveformAnimationFrames;
}

+ (id)generateAnimationDataWithLinearPCMData:(id)arg1 sampleRate:(double)arg2;
+ (id)waveformAnimationFramesWithAnimationData:(id)arg1;
+ (id)waveformAnimationWithAnimationData:(id)arg1;
- (void).cxx_destruct;
- (struct SCAudioNoteWaveformAnimationFrame)animationFrameForTime:(double)arg1;
- (double)duration;
- (id)initWithAnimationFrames:(id)arg1;

@end
