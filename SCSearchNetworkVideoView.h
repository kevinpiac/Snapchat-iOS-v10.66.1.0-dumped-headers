//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCEventAnnouncing-Protocol.h"

@class AVPlayer, AVPlayerLooper, FBKVOController, NSDate, NSString, SCEventListenerAnnouncer, SCSearchNetworkVideo, UIImageView;
@protocol SCLegacyItemDownloaderHandling, SCLegacyItemDownloading;

@interface SCSearchNetworkVideoView : UIView <SCEventAnnouncing>
{
    long long _loopType;
    AVPlayer *_player;
    _Bool _isPlayingBackward;
    _Bool _isPaused;
    AVPlayerLooper *_looper;
    id <SCLegacyItemDownloaderHandling> _downloadHandler;
    UIImageView *_overlayView;
    FBKVOController *_kVOObserver;
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSDate *_timeToFirstFrameTracker;
    NSDate *_timeStuckInBuffering;
    _Bool _shouldMute;
    _Bool _shouldAutoplay;
    _Bool _isPlaying;
    id <SCLegacyItemDownloading> _videoDownloader;
    SCSearchNetworkVideo *_networkVideo;
    double _maxLoopDurationSeconds;
    NSString *_identifierForDelegate;
}

+ (id)announcerIdentifier;
+ (Class)layerClass;
- (void).cxx_destruct;
- (void)_addKVOObserversForCurrentPlayerItem;
- (void)_addNotificationObserverForPlayerItemDidReachEnd;
- (void)_announceEvent:(id)arg1 extraData:(id)arg2;
- (void)_bouncePlayerItem:(id)arg1;
- (_Bool)_canPlay;
- (void)_didLoadRequestedNetworkVideo:(id)arg1 withResult:(id)arg2;
- (void)_loadNetworkVideo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_playerItemDidReachEnd:(id)arg1;
- (void)_removeNotificationObserverForPlayerItemDidReachEnd;
- (void)_reportTimeForFirstFrameIfNeeded;
- (void)_reportTimeStuckInBuffering;
- (void)_reportVideoFailedToLoad:(id)arg1;
- (void)_reportVideoFailedToPlay:(id)arg1;
- (void)_reportVideoReadyToPlay;
- (void)_setOverlay:(id)arg1;
- (void)_setupLoopObserver;
- (void)_setupPlayerWithItem:(id)arg1 overlay:(id)arg2 requestedNetworkVideo:(id)arg3;
- (void)_showOverlayIfNeeded;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)downLoaderHandler;
@property(copy, nonatomic) NSString *identifierForDelegate; // @synthesize identifierForDelegate=_identifierForDelegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 loopType:(long long)arg2;
@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (void)layoutSubviews;
@property(nonatomic) double maxLoopDurationSeconds; // @synthesize maxLoopDurationSeconds=_maxLoopDurationSeconds;
@property(retain, nonatomic) SCSearchNetworkVideo *networkVideo; // @synthesize networkVideo=_networkVideo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause;
- (_Bool)play;
- (void)removeListener:(id)arg1;
- (void)reset;
- (void)setNetworkVideo:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool shouldAutoplay; // @synthesize shouldAutoplay=_shouldAutoplay;
@property(nonatomic) _Bool shouldMute; // @synthesize shouldMute=_shouldMute;
@property(retain, nonatomic) id <SCLegacyItemDownloading> videoDownloader; // @synthesize videoDownloader=_videoDownloader;
- (void)setVideoGravity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
