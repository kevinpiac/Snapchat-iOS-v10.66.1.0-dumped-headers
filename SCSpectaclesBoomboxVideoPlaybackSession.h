//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesBoomboxPlaybackSession-Protocol.h"

@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, CADisplayLink, FBKVOController, NSArray, NSString, SCImageProcessCommand, SCImageProcessPlaybackRenderer, SCImageProcessQueue;
@protocol OS_dispatch_semaphore, SCSpectaclesBoomboxPlaybackSessionDelegate;

@interface SCSpectaclesBoomboxVideoPlaybackSession : NSObject <SCSpectaclesBoomboxPlaybackSession>
{
    SCImageProcessQueue *_queue;
    _Bool _shouldLoopPlayback;
    _Bool _isReversePlayback;
    double _playbackRate;
    AVAsset *_asset;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    AVPlayerItemVideoOutput *_videoOutput;
    CADisplayLink *_displayLink;
    SCImageProcessPlaybackRenderer *_leftRenderer;
    SCImageProcessPlaybackRenderer *_rightRenderer;
    NSArray *_intermediateCommands;
    NSArray *_leftOutputCommands;
    NSArray *_rightOutputCommands;
    SCImageProcessCommand *_leftMidOutputCommand;
    SCImageProcessCommand *_rightMidOutputCommand;
    NSObject<OS_dispatch_semaphore> *_frameRenderSemaphore;
    double _timeoutBeforeVideoOutputRemake;
    double _firstHostTime;
    _Bool _hasExtractedFrame;
    long long _noNewPixelBufferCount;
    struct __CVBuffer *_lastPixelBuffer;
    CDStruct_1b6d18a9 _lastPixelBufferTime;
    FBKVOController *_KVOController;
    id <SCSpectaclesBoomboxPlaybackSessionDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_cleanUpDisplayLink;
- (void)_displayLinkCallback:(id)arg1;
- (void)_onReceiveStopNotification:(id)arg1;
- (void)_playerItemDidPlayToEndTime:(id)arg1;
- (void)_playerSeekToBeginning;
- (void)_prepareToPlay;
- (void)_remakeVideoOutput;
- (void)_tryRemakeOutput;
- (void)dealloc;
@property(nonatomic) __weak id <SCSpectaclesBoomboxPlaybackSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fastReverse;
- (id)initWithAsset:(id)arg1 player:(id)arg2 leftLayer:(id)arg3 rightLayer:(id)arg4 leftMidOutputCommand:(id)arg5 rightMidOutputCommand:(id)arg6 intermediateCommands:(id)arg7 leftOutputCommands:(id)arg8 rightOutputCommands:(id)arg9 playbackRate:(double)arg10 isReversePlayback:(_Bool)arg11 shouldLoopPlayback:(_Bool)arg12;
- (void)reset;
- (void)startRunning;
- (void)stopRunning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

