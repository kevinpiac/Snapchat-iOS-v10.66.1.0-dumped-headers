//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSAVideoPlayerProtocol-Protocol.h"

@class AVAsset, AVPlayer, AVPlayerLooper, NSString;

@interface LSAVideoPlayer : NSObject <LSAVideoPlayerProtocol>
{
    _Bool _statusReady;
    _Bool _shouldLoop;
    _Bool _isMuted;
    _Bool _isSuspended;
    _Bool _isPaused;
    float _persistentRate;
    long long _numberOfFrames;
    long long _nativeFrameRate;
    AVPlayerLooper *_looper;
    AVPlayer *_player;
    AVAsset *_asset;
    NSString *_filepath;
    long long _loopCount;
    double _lastVolume;
    CDStruct_1b6d18a9 _duration;
    struct CGAffineTransform _preferredTransform;
}

- (void).cxx_destruct;
- (CDStruct_1b6d18a9)_endTime;
- (CDStruct_1b6d18a9)_startTime;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (struct __CVBuffer *)copyNextFrame;
- (void)createLooperAndQueuePlayer;
- (id)createOutput;
- (void)createRegularPlayer;
- (void)dealloc;
- (void)destroyLooperAndQueuePlayer;
- (void)destroyRegularPlayer;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *filepath; // @synthesize filepath=_filepath;
- (id)initWithFilepath:(id)arg1;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(readonly, nonatomic) _Bool isReady;
@property(nonatomic) _Bool isSuspended; // @synthesize isSuspended=_isSuspended;
@property(nonatomic) double lastVolume; // @synthesize lastVolume=_lastVolume;
@property(nonatomic) long long loopCount; // @synthesize loopCount=_loopCount;
@property(retain, nonatomic) AVPlayerLooper *looper; // @synthesize looper=_looper;
- (void)muteAudio;
@property(nonatomic) long long nativeFrameRate; // @synthesize nativeFrameRate=_nativeFrameRate;
@property(nonatomic) long long numberOfFrames; // @synthesize numberOfFrames=_numberOfFrames;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause;
@property(nonatomic) float persistentRate; // @synthesize persistentRate=_persistentRate;
@property(readonly, nonatomic) int playCount;
@property(nonatomic) float playbackRate;
- (void)playedToEnd:(id)arg1;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) struct CGAffineTransform preferredTransform; // @synthesize preferredTransform=_preferredTransform;
- (void)prepareWithRate:(float)arg1 loop:(_Bool)arg2;
- (void)resume;
- (void)resumeAudio;
@property(nonatomic) _Bool shouldLoop; // @synthesize shouldLoop=_shouldLoop;
@property(nonatomic) _Bool statusReady; // @synthesize statusReady=_statusReady;
@property(nonatomic) double volume;
- (void)setupInitialAudioState;
- (_Bool)supportsLooper;
- (void)suspendAudio;
- (void)unmuteAudio;
- (void)updateRate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

