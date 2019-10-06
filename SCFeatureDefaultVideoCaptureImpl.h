//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

#import "SCCameraFeatureRecoverable-Protocol.h"
#import "SCFeatureVideoCapture-Protocol.h"
#import "SCManagedCapturerListener-Protocol.h"

@class NSString, SCAudioConfiguration, SCAudioConfigurationToken, SCCoreCameraLogger, SCFrameProcessLatencyReporter, SCFuture, SCHapticsManager, SCManagedCapturerState, SCManagedVideoNoSoundLogger, SCQueuePerformer, SCRecordingFileManager, SCUserSession, SCVideoCaptureConfiguration, UIView;
@protocol SCAudioSession, SCCameraVideoCaptureLogger, SCCapturer, SCFeatureContainerView, SCFeatureHandsFree, SCFeatureMultiSnap, SCFeatureVideoCaptureDelegate;

@interface SCFeatureDefaultVideoCaptureImpl : SCFeature <SCManagedCapturerListener, SCCameraFeatureRecoverable, SCFeatureVideoCapture>
{
    CDUnknownBlockType _cameraTimerAnimationBlock;
    SCFrameProcessLatencyReporter *_frameProcessLatencyReporter;
    SCAudioConfigurationToken *_audioConfigurationToken;
    SCQueuePerformer *_performer;
    CDUnknownBlockType _audioWarmupBlock;
    _Bool _isResigningActive;
    _Bool _recordedLengthTooShort;
    id <SCFeatureVideoCaptureDelegate> _delegate;
    SCFuture *_videoFuture;
    SCVideoCaptureConfiguration *_captureConfiguration;
    double _defaultRecordingDuration;
    id <SCCapturer> _capturer;
    UIView<SCFeatureContainerView> *_containerView;
    SCUserSession *_userSession;
    long long _cameraViewType;
    SCCoreCameraLogger *_coreCameraLogger;
    SCHapticsManager *_hapticsManager;
    id <SCAudioSession> _audioSession;
    id <SCFeatureHandsFree> _handsFree;
    id <SCFeatureMultiSnap> _multiSnap;
    SCAudioConfiguration *_audioConfiguration;
    SCRecordingFileManager *_recordingFileManager;
    SCManagedVideoNoSoundLogger *_videoNoSoundLogger;
    SCManagedCapturerState *_managedCapturerState;
    double _startRecordingAnimationTime;
    id <SCCameraVideoCaptureLogger> _videoCaptureLogger;
    CDStruct_4565c1ff _sessionInfo;
}

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive;
- (void)_applicationWillResignActive;
- (void)_cancelAudioWarmupBlock;
- (void)_cleanupAudioSession;
- (void)_handleFailedRecording:(id)arg1;
- (void)_logSnapRecoveryAttemptWithRecoveryData:(id)arg1 success:(_Bool)arg2;
- (void)_persistRecordedVideo:(id)arg1;
- (void)_resetCameraTimerState;
- (void)_setIsStoppingRecording:(_Bool)arg1;
- (void)_setupAudioSession;
- (void)_startRecording;
- (void)_warmupAudioSession;
- (void)abortRecording;
@property(retain, nonatomic) SCAudioConfiguration *audioConfiguration; // @synthesize audioConfiguration=_audioConfiguration;
@property(retain, nonatomic) id <SCAudioSession> audioSession; // @synthesize audioSession=_audioSession;
@property(nonatomic) long long cameraViewType; // @synthesize cameraViewType=_cameraViewType;
@property(readonly, nonatomic) SCVideoCaptureConfiguration *captureConfiguration; // @synthesize captureConfiguration=_captureConfiguration;
@property(readonly, nonatomic) id <SCCapturer> capturer; // @synthesize capturer=_capturer;
- (void)configureWithView:(id)arg1;
@property(readonly, nonatomic) UIView<SCFeatureContainerView> *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) SCCoreCameraLogger *coreCameraLogger; // @synthesize coreCameraLogger=_coreCameraLogger;
- (void)dealloc;
@property(nonatomic) double defaultRecordingDuration; // @synthesize defaultRecordingDuration=_defaultRecordingDuration;
@property(nonatomic) __weak id <SCFeatureVideoCaptureDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SCFeatureHandsFree> handsFree; // @synthesize handsFree=_handsFree;
@property(retain, nonatomic) SCHapticsManager *hapticsManager; // @synthesize hapticsManager=_hapticsManager;
- (id)initWithCapturer:(id)arg1 userSession:(id)arg2 datastore:(id)arg3 cameraViewType:(long long)arg4 coreCameraLogger:(id)arg5 hapticsManager:(id)arg6 audioSession:(id)arg7 ticketCreator:(id)arg8 handsFree:(id)arg9 multiSnap:(id)arg10 videoCaptureLogger:(id)arg11;
@property(nonatomic) _Bool isResigningActive; // @synthesize isResigningActive=_isResigningActive;
- (void)managedCapturer:(id)arg1 didCancelRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)managedCapturer:(id)arg1 didChangeState:(id)arg2;
- (void)managedCapturer:(id)arg1 didFailRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 error:(id)arg4;
- (void)managedCapturer:(id)arg1 didFinishRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 recordedVideo:(id)arg4;
- (void)managedCapturer:(id)arg1 didGetError:(id)arg2 forType:(long long)arg3 session:(CDStruct_4565c1ff)arg4;
- (void)managedCapturer:(id)arg1 willFinishRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 recordedVideoFuture:(id)arg4 videoSize:(struct CGSize)arg5 placeholderImage:(id)arg6;
- (void)managedCapturerDidCallLenseResume:(id)arg1 session:(CDStruct_4565c1ff)arg2;
@property(retain, nonatomic) SCManagedCapturerState *managedCapturerState; // @synthesize managedCapturerState=_managedCapturerState;
@property(nonatomic) __weak id <SCFeatureMultiSnap> multiSnap; // @synthesize multiSnap=_multiSnap;
- (void)prepareForRecordingWithConfiguration:(id)arg1;
- (void)previewViewController:(id)arg1 didRenderFirstFrameForVideoURL:(id)arg2;
- (void)previewViewControllerDidAppear:(id)arg1;
- (void)previewViewControllerDidSendSnap:(id)arg1;
@property(nonatomic) _Bool recordedLengthTooShort; // @synthesize recordedLengthTooShort=_recordedLengthTooShort;
- (id)recordedVideo;
@property(retain, nonatomic) SCRecordingFileManager *recordingFileManager; // @synthesize recordingFileManager=_recordingFileManager;
- (void)recoverWithSnapRecoveryDataArray:(id)arg1;
- (void)resetView;
@property(nonatomic) CDStruct_4565c1ff sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(nonatomic) double startRecordingAnimationTime; // @synthesize startRecordingAnimationTime=_startRecordingAnimationTime;
@property(nonatomic) __weak id <SCCameraVideoCaptureLogger> videoCaptureLogger; // @synthesize videoCaptureLogger=_videoCaptureLogger;
@property(retain, nonatomic) SCManagedVideoNoSoundLogger *videoNoSoundLogger; // @synthesize videoNoSoundLogger=_videoNoSoundLogger;
- (void)setupRecordLifecycleEvents;
- (void)startRecordingImmediately;
- (void)stopRecording;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) SCFuture *videoFuture; // @synthesize videoFuture=_videoFuture;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
