//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaRemoteVideoViewProvider.h"

#import "SCMotionManagerListener-Protocol.h"
#import "SCOperaLayerViewControllerMediaContainer-Protocol.h"
#import "SCOperaRemoteVideoDelegate-Protocol.h"
#import "SCOperaRemoteVideoViewDelegate-Protocol.h"
#import "SCOperaVideoViewControllingDataSource-Protocol.h"
#import "SCOperaVideoViewControllingDelegate-Protocol.h"

@class FBKVOController, NSDictionary, NSString, NSTimer, SCDisposableObserverLifecycle, SCOperaConfiguration, SCOperaEventListenerAnnouncer, SCOperaPlayerQueueManager, SCOperaRemoteVideoController, SCOperaRemoteVideoView, UIColor;
@protocol SCOperaImageProvider, SCOperaPageableViewControllerDelegate, SCOperaRemoteVideoControllerDelegate;

@interface SCOperaLongFormVideoViewController : SCOperaRemoteVideoViewProvider <SCMotionManagerListener, SCOperaVideoViewControllingDelegate, SCOperaRemoteVideoViewDelegate, SCOperaRemoteVideoDelegate, SCOperaLayerViewControllerMediaContainer, SCOperaVideoViewControllingDataSource>
{
    SCOperaRemoteVideoView *_view;
    SCDisposableObserverLifecycle *_observerLifecycle;
    SCOperaPlayerQueueManager *_playerQueueManager;
    SCOperaRemoteVideoController *_remoteVideoController;
    NSString *_deviceOrientationManagerToken;
    _Bool _videoHasPlayed;
    _Bool _shouldAutoPlayWhenReady;
    _Bool _isFullscreen;
    _Bool _wasBeingPresented;
    _Bool _shouldHideControlsWhilePaused;
    FBKVOController *_kvoController;
    SCOperaEventListenerAnnouncer *_announcer;
    NSDictionary *_context;
    SCOperaConfiguration *_configuration;
    double _aspectRatio;
    _Bool _isInline;
    NSString *_firstFrameImageKey;
    UIColor *_primaryColor;
    id <SCOperaImageProvider> _imageProvider;
    _Bool _isListeningForMotionUpdates;
    _Bool _videoRotationEnabled;
    double _rotationVideoScale;
    double _minRollDegree;
    double _maxRollDegree;
    long long _virtualOrientation;
    NSTimer *_controlsFadeTimer;
    _Bool _showActionMenuButtonEnabled;
    NSString *_videoID;
    id <SCOperaRemoteVideoControllerDelegate> _delegate;
    id <SCOperaPageableViewControllerDelegate> _pageableViewControllerDelegate;
}

+ (id)remoteVideoViewControllerWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 isInline:(_Bool)arg3;
- (void).cxx_destruct;
- (void)_observePlaybackLifecycleEvent;
- (void)_observePlayerItemPresentationSize;
- (void)_observeViewModelChange;
- (void)_setupControlsFadeTimer;
- (void)_updateLayerViewTransformWithRotation:(double)arg1;
- (void)_updateRollDegreeWithCurrentRotation:(double)arg1;
- (id)additionalVideoParamters;
- (_Bool)canHandleRoundCorner;
- (void)cancelViewWillFullyAppearAtTime;
- (CDStruct_1b6d18a9)currentTime;
- (void)dealloc;
@property(nonatomic) __weak id <SCOperaRemoteVideoControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)didSetFullscreen:(_Bool)arg1;
- (void)didTapRemoteVideoView:(id)arg1;
- (void)didUpdateBottomPageViewProperties:(id)arg1;
- (void)didUpdateRotation:(double)arg1 translation:(struct CGVector)arg2;
- (CDStruct_1b6d18a9)duration;
- (void)fadeInControls;
- (void)fadeOutControls;
- (id)imageSnapshot;
- (id)initWithVideoId:(id)arg1 configuration:(id)arg2 eventAnnouncer:(id)arg3 eventContext:(id)arg4 isInline:(_Bool)arg5 firstFrameImageKey:(id)arg6 primaryColor:(id)arg7 kvoController:(id)arg8 imageProvider:(id)arg9;
- (void)invalidateControlsFadeTimerAndShowControls;
- (_Bool)isOverlay;
- (_Bool)isPaused;
- (_Bool)isPausedForAttachment;
- (_Bool)isShowingVideoFrame;
- (void)loadVideo;
- (void)loadView;
- (double)mediaHeightToWidthAspectRatio;
- (_Bool)mediaIsBeingPreparedForDisplay;
- (struct CGRect)mediaViewFrame;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
@property(nonatomic) __weak id <SCOperaPageableViewControllerDelegate> pageableViewControllerDelegate; // @synthesize pageableViewControllerDelegate=_pageableViewControllerDelegate;
- (void)pause;
- (void)playVideo:(_Bool)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)prefersStatusBarHidden;
- (void)resume;
- (void)rotateVideoBasedOnOrientation;
- (void)rotateVideoWithTransform:(struct CGAffineTransform)arg1;
- (void)setPausedForAttachment:(_Bool)arg1;
- (void)setResumeVideoPosition:(double)arg1;
- (void)setTargetOrientation:(long long)arg1 andRotateView:(_Bool)arg2;
- (void)setVolume:(double)arg1;
- (_Bool)shouldPassDownTapGesture:(id)arg1;
- (id)snapshotFromPlayer;
- (void)start;
- (void)stop;
- (unsigned long long)supportedInterfaceOrientations;
- (void)teardown;
- (double)totalVideoDurationSeconds;
- (void)updateWithScreenshot:(id)arg1;
- (void)updateWithVideoId:(id)arg1 eventContext:(id)arg2 firstFrameImageKey:(id)arg3 primaryColor:(id)arg4 videoRotationEnabled:(_Bool)arg5 showActionMenuButtonEnabled:(_Bool)arg6 imageProvider:(id)arg7;
- (void)videoControlsView:(id)arg1 didEndSeekingWithPlayButtonToggled:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didSeekToTime:(double)arg2 reason:(long long)arg3;
- (void)videoControlsView:(id)arg1 didToggleCaption:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didTogglePlay:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didToggleRotateLeft:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didToggleVolume:(_Bool)arg2;
- (void)videoControlsViewDidBeginSeeking:(id)arg1;
- (void)videoControlsViewDidPressExit:(id)arg1;
- (void)videoControlsViewDidPressSendButton:(id)arg1;
- (void)videoControlsViewDidPressShowActionMenuButton:(id)arg1;
- (id)videoID;
- (id)videoParameters;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidFullyAppear;
- (void)viewDidFullyDisappear;
- (void)viewDidPartiallyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillFullyAppear;
- (void)viewWillFullyAppearAtTime:(CDStruct_1b6d18a9)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

