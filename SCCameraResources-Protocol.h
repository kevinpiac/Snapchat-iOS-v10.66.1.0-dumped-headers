//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCCameraOverlayView, SCCapturerToken, SCFeature, SCUserSession;
@protocol SCCameraImageCaptureLogger, SCCameraOverlayDelegate><UIGestureRecognizerDelegate, SCCameraPermissionService, SCCameraUserStatus, SCCameraVideoCaptureLogger, SCCapturer, SCFeatureARBar, SCFeatureBatchCapture, SCFeatureCameraLiveDisplay, SCFeatureCameraToolbar, SCFeatureCameraUIArbitrator, SCFeatureCameraUserActionLogging, SCFeatureCaption, SCFeatureDepthCaptureMode, SCFeatureDeviceMotionCapture, SCFeatureDoubleTapToToggleCamera, SCFeatureFaceFocus, SCFeatureFlash, SCFeatureGameAttachment, SCFeatureHandsFree, SCFeatureImageCapture, SCFeatureLensCarousel, SCFeatureLensCarouselActivator, SCFeatureLensCloseButton, SCFeatureLensDataProviderFactory, SCFeatureLensExplorerSwipeUp, SCFeatureLensFeed, SCFeatureLensPushNotification, SCFeatureLensSideButton, SCFeatureLevelerMode, SCFeatureMemories, SCFeatureMicNotification, SCFeatureMultiSnap, SCFeatureNightMode, SCFeaturePortraitMode, SCFeaturePrivacyView, SCFeatureRecipientName, SCFeatureScanning, SCFeatureSceneIntelligence, SCFeatureShazam, SCFeatureSnapKit, SCFeatureSnapReply, SCFeatureTapToFocusAndExposure, SCFeatureTeachingTooltips, SCFeatureTimerMode, SCFeatureToggleCamera, SCFeatureToggleCameraButton, SCFeatureVideoCapture, SCFeatureVolumeButtonCapture, SCFeatureWidenedFOV, SCFeatureZooming, SCLensConversationMetadataProvider, SCUserTooltipProviding;

@protocol SCCameraResources
@property(readonly, nonatomic) SCFeature<SCFeatureARBar> *arBar;
@property(readonly, nonatomic) SCFeature<SCFeatureBatchCapture> *batchCapture;
@property(retain, nonatomic) id <SCFeatureCameraUIArbitrator> cameraBottomUIArbitrator;
@property(readonly, nonatomic) SCFeature<SCFeatureCameraLiveDisplay> *cameraLiveDisplay;
- (SCCameraOverlayView *)cameraOverlayWithDelegate:(id <SCCameraOverlayDelegate><UIGestureRecognizerDelegate>)arg1;
@property(readonly, nonatomic) SCFeature<SCFeatureCameraToolbar> *cameraToolbar;
@property(retain, nonatomic) id <SCFeatureCameraUIArbitrator> cameraTooltipArbitrator;
@property(readonly, nonatomic) SCFeature<SCFeatureCameraUserActionLogging> *cameraUserActionLogger;
@property(nonatomic) long long cameraViewType;
@property(readonly, nonatomic) SCFeature<SCFeatureCaption> *caption;
@property(readonly, nonatomic) id <SCCapturer> capturer;
@property(readonly, nonatomic) unsigned long long context;
@property(retain, nonatomic) id <SCLensConversationMetadataProvider> conversationMetadataProvider;
@property(readonly, nonatomic) SCFeature<SCFeatureLensCarouselActivator> *creativeLensActivator;
@property(nonatomic) _Bool deprecateNavigationTransitioning;
@property(readonly, nonatomic) SCFeature<SCFeatureDepthCaptureMode> *depthCaptureMode;
@property(readonly, nonatomic) SCFeature<SCFeatureDeviceMotionCapture> *deviceMotionCapture;
@property(readonly, nonatomic) SCFeature<SCFeatureDoubleTapToToggleCamera> *doubleTapToToggleCamera;
@property(readonly, nonatomic) SCFeature<SCFeatureFaceFocus> *faceFocus;
@property(readonly, nonatomic) SCFeature<SCFeatureFlash> *flash;
@property(readonly, nonatomic) SCFeature<SCFeatureGameAttachment> *gameAttachment;
@property(readonly, nonatomic) SCFeature<SCFeatureHandsFree> *handsFreeRecording;
@property(readonly, nonatomic) SCFeature<SCFeatureImageCapture> *imageCapture;
@property(retain, nonatomic) id <SCCameraImageCaptureLogger> imageCaptureLogger;
@property(readonly, nonatomic) SCFeature<SCFeatureLensCarouselActivator> *lensActivator;
@property(readonly, nonatomic) SCFeature<SCFeatureLensCarousel> *lensCarousel;
@property(readonly, nonatomic) SCFeature<SCFeatureLensCloseButton> *lensCloseButton;
@property(readonly, nonatomic) SCFeature<SCFeatureLensDataProviderFactory> *lensDataProviderFactory;
@property(readonly, nonatomic) SCFeature<SCFeatureLensExplorerSwipeUp> *lensExplorerSwipeUp;
@property(readonly, nonatomic) SCFeature<SCFeatureLensFeed> *lensFeed;
@property(readonly, nonatomic) SCFeature<SCFeatureLensPushNotification> *lensPushNotification;
@property(readonly, nonatomic) SCFeature<SCFeatureLensSideButton> *lensSideButton;
@property(readonly, nonatomic) SCFeature<SCFeatureLevelerMode> *levelerMode;
@property(readonly, nonatomic) SCFeature<SCFeatureMemories> *memories;
@property(readonly, nonatomic) SCFeature<SCFeatureMicNotification> *micNotification;
@property(readonly, nonatomic) SCFeature<SCFeatureMultiSnap> *multiSnap;
@property(readonly, nonatomic) SCFeature<SCFeatureNightMode> *nightMode;
@property(readonly, nonatomic) id <SCCameraPermissionService> permissionService;
@property(readonly, nonatomic) SCFeature<SCFeaturePortraitMode> *portraitMode;
@property(readonly, nonatomic) SCFeature<SCFeaturePrivacyView> *privacyView;
@property(readonly, nonatomic) SCFeature<SCFeatureRecipientName> *recipientName;
@property(readonly, nonatomic) SCFeature<SCFeatureScanning> *scanning;
@property(readonly, nonatomic) SCFeature<SCFeatureSceneIntelligence> *sceneIntelligence;
@property(retain, nonatomic) SCCapturerToken *token;
@property(retain, nonatomic) id <SCCameraUserStatus> userStatus;
@property(retain, nonatomic) id <SCUserTooltipProviding> userTooltipProvider;
@property(retain, nonatomic) id <SCCameraVideoCaptureLogger> videoCaptureLogger;
@property(readonly, nonatomic) SCFeature<SCFeatureShazam> *shazam;
@property(readonly, nonatomic) SCFeature<SCFeatureSnapKit> *snapKit;
@property(readonly, nonatomic) SCFeature<SCFeatureSnapReply> *snapReply;
@property(readonly, nonatomic) SCFeature<SCFeatureTapToFocusAndExposure> *tapToFocusAndExposure;
@property(readonly, nonatomic) SCFeature<SCFeatureTeachingTooltips> *teachingTooltips;
@property(readonly, nonatomic) SCFeature<SCFeatureTimerMode> *timerMode;
@property(readonly, nonatomic) SCFeature<SCFeatureToggleCamera> *toggleCamera;
@property(readonly, nonatomic) SCFeature<SCFeatureToggleCameraButton> *toggleCameraButton;
@property(readonly, nonatomic) SCFeature *toggleCameraVideoStabilizationButton;
@property(readonly, nonatomic) SCUserSession *userSession;
@property(readonly, nonatomic) SCFeature<SCFeatureVideoCapture> *videoCapture;
@property(readonly, nonatomic) SCFeature<SCFeatureVolumeButtonCapture> *volumeButtonCapture;
@property(readonly, nonatomic) SCFeature<SCFeatureWidenedFOV> *widenedFOV;
@property(readonly, nonatomic) SCFeature<SCFeatureZooming> *zooming;
@end

