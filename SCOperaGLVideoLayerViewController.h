//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCImageProcessVideoPlaybackSessionListener-Protocol.h"
#import "SCMotionManagerListener-Protocol.h"
#import "SCOperaFadeTransitionCompatibleViewController-Protocol.h"
#import "SCOperaLayerViewControllerMediaContainer-Protocol.h"
#import "SCOperaLayerViewControllerShareableMediaSource-Protocol.h"
#import "SCOperaMagicMomentControllerDelegate-Protocol.h"
#import "SCOperaPinchGestureCompatibleViewController-Protocol.h"
#import "SCOperaRotatingLayerPinchControllerDelegate-Protocol.h"

@class AVAsset, AVPlayer, NSNotificationCenter, NSString, SCCAEAGLView, SCFrameableContainerView, SCImageProcessVideoPlaybackSession, SCOperaGLVideoLayerView, SCOperaMagicMomentController, SCOperaRotatingLayerPinchController, SCOperaRotatingViewTransformManipulator, UIView;

@interface SCOperaGLVideoLayerViewController : SCOperaLayerViewController <SCImageProcessVideoPlaybackSessionListener, SCMotionManagerListener, SCOperaRotatingLayerPinchControllerDelegate, SCOperaMagicMomentControllerDelegate, SCOperaLayerViewControllerMediaContainer, SCOperaFadeTransitionCompatibleViewController, SCOperaLayerViewControllerShareableMediaSource, SCOperaPinchGestureCompatibleViewController>
{
    SCOperaGLVideoLayerView *_layerView;
    SCOperaRotatingViewTransformManipulator *_rotatingViewManipulator;
    SCFrameableContainerView *_containerView;
    SCCAEAGLView *_glView;
    NSNotificationCenter *_notificationCenter;
    AVAsset *_videoAsset;
    AVPlayer *_player;
    SCImageProcessVideoPlaybackSession *_videoPlaybackSession;
    _Bool _isRotatingVideoLayout;
    _Bool _isListeningForMotionUpdates;
    _Bool _playbackStarted;
    _Bool _hasPreparePlaybackForFastStart;
    _Bool _hasSentMediaStartsToPlayEvent;
    SCOperaRotatingLayerPinchController *_pinchController;
    SCOperaMagicMomentController *_magicMomentController;
    _Bool _hasFullyAppearedOnScreen;
    UIView *_pinchGestureTarget;
}

- (void).cxx_destruct;
- (void)_applyAudioProcessorMixToPlaybackSessionIfNecessary;
- (id)_audioProcessorMix;
- (void)_configurePlaybackSessionForAsset:(id)arg1;
- (struct CGSize)_contentSize;
- (id)_glCommandsForKey:(id)arg1;
- (long long)_parseGLRenderOrientationFromTrack:(id)arg1;
- (id)_playerForWaveformData:(id)arg1 audioProcessorMix:(id)arg2;
- (void)_preparePlaybackForFastStartIfNecessary;
- (void)_resetHorizontalPageOffset;
- (void)_resetTrackingParams;
- (void)_resumePlaybackIfNecessary;
- (id)_reverseAudioData;
- (struct CGAffineTransform)_rotateTransform;
- (void)_sendMediaStartsToDisplayIfNecessary;
- (void)_setShouldLoop:(_Bool)arg1;
- (void)_setupMagicMomentControllerIfNeeded;
- (void)_setupPinchController;
- (void)_setupPlaybackSessionIfNecessary;
- (void)_startListeningToMotionManagerIfNecessary;
- (void)_startPlaybackIfNecessary;
- (void)_stopListeningToMotionManagerIfNecessary;
- (void)_stopPlaybackIfNecessary;
- (void)_stopVideoAndTearDownSession;
- (void)_teardownPlaybackSession;
- (void)_updateLayerLayout:(_Bool)arg1;
- (id)_videoAsset;
- (id)currentViewParameters;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)didUpdateRotation:(double)arg1 translation:(struct CGVector)arg2;
- (id)fadingViewsForFadeTransition;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3 notificationCenter:(id)arg4;
- (_Bool)isOverlay;
- (void)loadView;
- (void)magicMomentController:(id)arg1 didChangeMagicMomentEnabled:(_Bool)arg2;
- (double)mediaHeightToWidthAspectRatio;
- (_Bool)mediaIsBeingPreparedForDisplay;
- (struct CGRect)mediaViewFrame;
- (id)movingViewsForFadeTransition;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)operaRotatingLayerPinchController:(id)arg1 didFinishPinchWithScale:(double)arg2;
- (void)operaRotatingLayerPinchController:(id)arg1 updateTransformWithScale:(double)arg2;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)pause;
@property(nonatomic) __weak UIView *pinchGestureTarget; // @synthesize pinchGestureTarget=_pinchGestureTarget;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)resume;
- (void)setVolume:(double)arg1;
- (id)shareableMedia;
- (void)teardown;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)videoPlaybackSession:(id)arg1 didRenderFrameAtTime:(CDStruct_1b6d18a9)arg2;
- (void)viewDidFullyAppear;
- (void)viewDidFullyDisappear;
- (void)viewWillFullyAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

