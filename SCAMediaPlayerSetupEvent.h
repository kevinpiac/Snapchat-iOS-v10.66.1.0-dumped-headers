//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAMediaPlayerEventBase.h"

@class NSNumber, NSString;

@interface SCAMediaPlayerSetupEvent : SCAMediaPlayerEventBase
{
    NSNumber *frameRate;
    NSNumber *playbackRate;
    NSNumber *hasVideo;
    NSNumber *hasAudio;
    NSNumber *hasAudioProcessingPass;
    NSNumber *isMultiSnap;
    NSNumber *isSetupSuccessful;
    NSNumber *glContextSetupDelayMs;
    NSNumber *videoSetupDelayMs;
    NSNumber *audioSetupDelayMs;
    NSNumber *playerSetupDelayMs;
    NSNumber *setupToFirstFrameDelayMs;
    NSString *rewindVideoCapabilities;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAudioSetupDelayMs;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getFrameRate;
- (long long)getGlContextSetupDelayMs;
- (_Bool)getHasAudio;
- (_Bool)getHasAudioProcessingPass;
- (_Bool)getHasVideo;
- (_Bool)getIsMultiSnap;
- (_Bool)getIsSetupSuccessful;
- (double)getPerUserSamplingRate;
- (double)getPlaybackRate;
- (long long)getPlayerSetupDelayMs;
- (id)getRewindVideoCapabilities;
- (long long)getSetupToFirstFrameDelayMs;
- (long long)getVideoSetupDelayMs;
- (void)setAudioSetupDelayMs:(long long)arg1;
- (void)setFrameRate:(double)arg1;
- (void)setGlContextSetupDelayMs:(long long)arg1;
- (void)setHasAudio:(_Bool)arg1;
- (void)setHasAudioProcessingPass:(_Bool)arg1;
- (void)setHasVideo:(_Bool)arg1;
- (void)setIsMultiSnap:(_Bool)arg1;
- (void)setIsSetupSuccessful:(_Bool)arg1;
- (void)setPlaybackRate:(double)arg1;
- (void)setPlayerSetupDelayMs:(long long)arg1;
- (void)setRewindVideoCapabilities:(id)arg1;
- (void)setSetupToFirstFrameDelayMs:(long long)arg1;
- (void)setVideoSetupDelayMs:(long long)arg1;

@end
