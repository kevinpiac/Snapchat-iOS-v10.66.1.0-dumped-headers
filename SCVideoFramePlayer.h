//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAudioMix, AVPlayer, AVPlayerItem, NSData, SCVideoFrameSource;

@interface SCVideoFramePlayer : NSObject
{
    AVPlayer *_reverseAudioPlayer;
    AVPlayer *_audioPlayer;
    AVPlayer *_backgroundAudioPlayer;
    AVPlayerItem *_audioPlayerItem;
    _Bool _useSeparateAudioPlayer;
    _Bool _needToSeek;
    _Bool _playerHasReplacedWithItem;
    long long _seekInProgress;
    CDStruct_1b6d18a9 _lastSmoothSeekTime;
    _Bool _isSmoothSeekInProgress;
    _Bool _wantToPlay;
    double _playerRate;
    double _oldPlayerRate;
    _Bool _performConfiguration;
    _Bool _hasUpdatedPlayerRate;
    _Bool _hasUpdatedReversePlaybackEnabled;
    _Bool _hasUpdatedPlayerItemTimeScale;
    _Bool _mustSeekToBeginning;
    double _deferredVideoSourceRate;
    AVAsset *_reverseAudioAsset;
    _Bool _reversePlaybackEnabled;
    _Bool _preciseSeeking;
    _Bool _splitAudioVideoPlayback;
    AVPlayer *_player;
    double _volume;
    AVAudioMix *_audioProcessorMix;
    AVAsset *_backgroundAudioAsset;
    SCVideoFrameSource *_currentSource;
    NSData *_reversedAudioData;
    CDStruct_1b6d18a9 _startTimestamp;
}

- (void).cxx_destruct;
- (void)_applyAudioProcessorMix;
- (_Bool)_isPaused;
- (void)_pause;
- (void)_rescaleAndChangePlayerItemIfNecessaryIgnoringOldSpeed:(_Bool)arg1;
- (void)_seekVideoAndAudioToTime:(CDStruct_1b6d18a9)arg1;
- (void)_setAVPlayerVolumes:(double)arg1;
- (void)_setAllPlayerVolumes:(double)arg1;
- (void)_smoothSeekToTime;
- (void)_updatePlayersRate:(double)arg1;
@property(retain, nonatomic) AVAudioMix *audioProcessorMix; // @synthesize audioProcessorMix=_audioProcessorMix;
@property(retain, nonatomic) AVAsset *backgroundAudioAsset; // @synthesize backgroundAudioAsset=_backgroundAudioAsset;
- (void)beginConfiguration;
- (void)commitConfigurationWithSeekToBeginning:(_Bool)arg1;
@property(readonly, nonatomic) SCVideoFrameSource *currentSource; // @synthesize currentSource=_currentSource;
- (void)dealloc;
@property(nonatomic) double frameSourceRate;
- (id)initWithAVPlayer:(id)arg1 useSeparateAudioPlayer:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pauseRunning;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) double playerRate; // @synthesize playerRate=_playerRate;
@property(nonatomic) _Bool preciseSeeking; // @synthesize preciseSeeking=_preciseSeeking;
- (_Bool)replaceCurrentSourceWithSource:(id)arg1;
- (id)reverseAudioPlayer;
@property(readonly, nonatomic) _Bool reversePlaybackEnabled; // @synthesize reversePlaybackEnabled=_reversePlaybackEnabled;
@property(retain, nonatomic) NSData *reversedAudioData; // @synthesize reversedAudioData=_reversedAudioData;
@property(readonly, nonatomic) _Bool seekInProgress;
- (void)seekToBeginning;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setReversePlaybackEnabled:(_Bool)arg1;
- (void)setReversePlaybackEnabled:(_Bool)arg1 reverseAudioPlayer:(id)arg2;
@property(nonatomic) _Bool splitAudioVideoPlayback; // @synthesize splitAudioVideoPlayback=_splitAudioVideoPlayback;
@property(nonatomic) CDStruct_1b6d18a9 startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(nonatomic) double volume; // @synthesize volume=_volume;
- (void)startRunningAtTime:(CDStruct_1b6d18a9)arg1 shouldSeek:(_Bool)arg2;
- (void)stop;
- (void)stopPlayingAndSeekSmoothlyToTime:(CDStruct_1b6d18a9)arg1;
- (void)updatePlayerRateWithReversePlayback;

@end

