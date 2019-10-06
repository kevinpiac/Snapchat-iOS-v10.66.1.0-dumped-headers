//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString, SCOperaUserInfoProvider, SCOperaViewModel, SCWebBrowserConfig, UIColor;
@protocol SCActionHandling, SCAudioSession, SCCurrentPageTracker, SCEventListener, SCImageDownloading, SCNotificationManager, SCOperaActivelyDisplayMediaStrategy, SCOperaContextMenuOverlayProvider, SCOperaCriticalModeOperator, SCOperaDeviceOrientationMonitor, SCOperaGLCommandsProvider, SCOperaGifProvider, SCOperaHtmlProvider, SCOperaImageProvider, SCOperaLoadingProgressProvider, SCOperaNetworkRadioStatusEstimationOperator, SCOperaPrefetcherSettingsProvider, SCOperaRemoteVideoPreloadStrategy, SCOperaRemoteVideoPropertiesProvider, SCOperaShakeToReportOperator, SCOperaSnapLabeling, SCOperaSnappablesPlugin, SCOperaVideoAssetProvider, SCOperaViewModelsManipulator, SCOperaWebAppLayerProviding, SCOperaWebViewFaviconProvider, SCOperaWebViewURLInterceptor, SCPageViewLogging, SCUpNextGroupViewModelProvider, SCWebBrowsingURLChecker;

@interface SCOperaConfiguration : NSObject
{
    _Bool _rotationDisabled;
    _Bool _zoomEnabled;
    _Bool _recognizeLeftTap;
    _Bool _tapLeftGoToPreviousPage;
    _Bool _fullContentEnabled;
    _Bool _autoPageTopOrRightWhenNextViewModelIsNil;
    _Bool _autoPageLeftWhenPreviousViewModelIsNil;
    _Bool _loopMediaWhilePaging;
    _Bool _loopDisabledWhileDismissing;
    _Bool _useCustomAutoAdvanceAnimationDuration;
    _Bool _presentationAnimationDisabled;
    _Bool _dismissalAnimationDisabled;
    _Bool _rotatingViewStartPinched;
    _Bool _keepMuteOverrideOnDismiss;
    _Bool _allowLoadingScreens;
    _Bool _disableLoadingFadeoutAnimation;
    _Bool _shouldAutoResumeOnStall;
    _Bool _disableHorizontalAutoPageAnimation;
    _Bool _allowRoundedCornersOnModelWithoutTopModel;
    _Bool _eagerSwipeUpEnabled;
    _Bool _shouldDisplaySubtitles;
    _Bool _blackSnapsWatchdogEnabled;
    _Bool _mainThreadForVolumeControllerEnabled;
    _Bool _smartAVAssetAccess;
    _Bool _fixProgressiveDownloadRetry;
    _Bool _actionMenuEnabled;
    _Bool _disableRemoteVideoControls;
    _Bool _shouldUseRemoteVideoProxy;
    _Bool _enableSeamlessAutoAdvance;
    _Bool _enablePotentialFixForFirstFrameFlashing;
    unsigned long long _attachmentStyle;
    SCOperaViewModel *_viewModel;
    id <SCOperaViewModelsManipulator> _modelManipulator;
    double _pageHorizontalMargin;
    double _pageVerticalMargin;
    UIColor *_backgroundColor;
    UIColor *_primaryColor;
    NSArray *_viewModelsToPreload;
    double _tapLeftWidthRatio;
    NSSet *_disabledGesturesOnLoadingLayer;
    double _logoFadeOutAnimationDuration;
    double _logoFadeOutAnimationDelay;
    double _autoAdvanceAnimationDuration;
    SCOperaUserInfoProvider *_userInfoProvider;
    unsigned long long _videoFastStartStrategy;
    id <SCEventListener> _searchLoggerListener;
    unsigned long long _subtitlesSettings;
    unsigned long long _numberOfPlayers;
    NSArray *_customLayerViewControllerFactories;
    NSDictionary *_customLayerExtraProperties;
    id <SCOperaImageProvider> _imageProvider_DEPRECATED;
    id <SCOperaGifProvider> _gifProvider;
    id <SCOperaVideoAssetProvider> _videoAssetProvider_DEPRECATED;
    id <SCOperaWebViewFaviconProvider> _faviconProvider;
    id <SCOperaDeviceOrientationMonitor> _deviceOrientationMonitor;
    id <SCAudioSession> _audioStatusProvider;
    id <SCOperaContextMenuOverlayProvider> _contextMenuProvider;
    id <SCOperaSnappablesPlugin> _snappablesPlugin;
    NSString *_accessibilityLabel;
    id <SCPageViewLogging> _pageViewLogger;
    id <SCCurrentPageTracker> _currentPageTracker;
    NSString *_pageViewName;
    double _longPressMinimumPressDuration;
    double _actionMenuAnimationDurationLong;
    double _actionMenuAnimationDurationMedium;
    double _actionMenuAnimationDurationShort;
    double _springDampening;
    unsigned long long _actionMenuAnimationOptions;
    long long _actionMenuStyleVersion;
    long long _remoteVideoCaptionDisplayStrategy;
    id <SCOperaRemoteVideoPreloadStrategy> _remoteVideoPreloadStrategy;
    id <SCOperaRemoteVideoPropertiesProvider> _remoteVideoPropertiesProvider;
    id <SCOperaActivelyDisplayMediaStrategy> _displayMediaStrategy;
    id <SCOperaHtmlProvider> _htmlProvider;
    SCWebBrowserConfig *_webBrowserConfig;
    id <SCWebBrowsingURLChecker> _safeBrowsingChecker;
    id <SCOperaWebViewURLInterceptor> _urlInterceptor;
    id <SCOperaCriticalModeOperator> _criticalModeOperator;
    id <SCOperaNetworkRadioStatusEstimationOperator> _networkRadioStatusEstimatorOperator;
    id <SCImageDownloading> _imageDownloader;
    id <SCActionHandling> _searchActionHandler;
    id <SCOperaSnapLabeling> _snapLabeler;
    id <SCOperaGLCommandsProvider> _glCommandsProvider;
    unsigned long long _scrollAnimationType;
    id <SCOperaShakeToReportOperator> _shakeToReportOperator;
    NSString *_shakeToReportDefaultString;
    id <SCOperaLoadingProgressProvider> _loadingProgressProvider;
    id <SCNotificationManager> _notificationManager;
    id <SCOperaPrefetcherSettingsProvider> _prefetchSettingsProvider;
    id <SCUpNextGroupViewModelProvider> _upNextGroupViewModelProvider;
    id <SCImageDownloading> _upNextImageDownloader;
    double _playerBufferDurationInSec;
    id <SCOperaWebAppLayerProviding> _webAppLayerProvider;
    struct CGRect _bounds;
    struct UIEdgeInsets _safeAreaInsets;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, nonatomic) double actionMenuAnimationDurationLong; // @synthesize actionMenuAnimationDurationLong=_actionMenuAnimationDurationLong;
@property(readonly, nonatomic) double actionMenuAnimationDurationMedium; // @synthesize actionMenuAnimationDurationMedium=_actionMenuAnimationDurationMedium;
@property(readonly, nonatomic) double actionMenuAnimationDurationShort; // @synthesize actionMenuAnimationDurationShort=_actionMenuAnimationDurationShort;
@property(readonly, nonatomic) unsigned long long actionMenuAnimationOptions; // @synthesize actionMenuAnimationOptions=_actionMenuAnimationOptions;
@property(nonatomic) _Bool actionMenuEnabled; // @synthesize actionMenuEnabled=_actionMenuEnabled;
@property(nonatomic) long long actionMenuStyleVersion; // @synthesize actionMenuStyleVersion=_actionMenuStyleVersion;
@property(nonatomic) _Bool allowLoadingScreens; // @synthesize allowLoadingScreens=_allowLoadingScreens;
@property(nonatomic) _Bool allowRoundedCornersOnModelWithoutTopModel; // @synthesize allowRoundedCornersOnModelWithoutTopModel=_allowRoundedCornersOnModelWithoutTopModel;
@property(nonatomic) unsigned long long attachmentStyle; // @synthesize attachmentStyle=_attachmentStyle;
@property(retain, nonatomic) id <SCAudioSession> audioStatusProvider; // @synthesize audioStatusProvider=_audioStatusProvider;
@property(nonatomic) double autoAdvanceAnimationDuration; // @synthesize autoAdvanceAnimationDuration=_autoAdvanceAnimationDuration;
@property(nonatomic) _Bool autoPageLeftWhenPreviousViewModelIsNil; // @synthesize autoPageLeftWhenPreviousViewModelIsNil=_autoPageLeftWhenPreviousViewModelIsNil;
@property(nonatomic) _Bool autoPageTopOrRightWhenNextViewModelIsNil; // @synthesize autoPageTopOrRightWhenNextViewModelIsNil=_autoPageTopOrRightWhenNextViewModelIsNil;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool blackSnapsWatchdogEnabled; // @synthesize blackSnapsWatchdogEnabled=_blackSnapsWatchdogEnabled;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) id <SCOperaContextMenuOverlayProvider> contextMenuProvider; // @synthesize contextMenuProvider=_contextMenuProvider;
@property(retain, nonatomic) id <SCOperaCriticalModeOperator> criticalModeOperator; // @synthesize criticalModeOperator=_criticalModeOperator;
@property(retain, nonatomic) id <SCCurrentPageTracker> currentPageTracker; // @synthesize currentPageTracker=_currentPageTracker;
@property(copy, nonatomic) NSDictionary *customLayerExtraProperties; // @synthesize customLayerExtraProperties=_customLayerExtraProperties;
@property(copy, nonatomic) NSArray *customLayerViewControllerFactories; // @synthesize customLayerViewControllerFactories=_customLayerViewControllerFactories;
@property(retain, nonatomic) id <SCOperaDeviceOrientationMonitor> deviceOrientationMonitor; // @synthesize deviceOrientationMonitor=_deviceOrientationMonitor;
@property(nonatomic) _Bool disableHorizontalAutoPageAnimation; // @synthesize disableHorizontalAutoPageAnimation=_disableHorizontalAutoPageAnimation;
@property(readonly, nonatomic) _Bool disableLoadingFadeoutAnimation; // @synthesize disableLoadingFadeoutAnimation=_disableLoadingFadeoutAnimation;
@property(nonatomic) _Bool disableRemoteVideoControls; // @synthesize disableRemoteVideoControls=_disableRemoteVideoControls;
@property(copy, nonatomic) NSSet *disabledGesturesOnLoadingLayer; // @synthesize disabledGesturesOnLoadingLayer=_disabledGesturesOnLoadingLayer;
@property(nonatomic) _Bool dismissalAnimationDisabled; // @synthesize dismissalAnimationDisabled=_dismissalAnimationDisabled;
@property(retain, nonatomic) id <SCOperaActivelyDisplayMediaStrategy> displayMediaStrategy; // @synthesize displayMediaStrategy=_displayMediaStrategy;
@property(nonatomic) _Bool eagerSwipeUpEnabled; // @synthesize eagerSwipeUpEnabled=_eagerSwipeUpEnabled;
@property(readonly, nonatomic) _Bool enablePotentialFixForFirstFrameFlashing; // @synthesize enablePotentialFixForFirstFrameFlashing=_enablePotentialFixForFirstFrameFlashing;
@property(readonly, nonatomic) _Bool enableSeamlessAutoAdvance; // @synthesize enableSeamlessAutoAdvance=_enableSeamlessAutoAdvance;
@property(retain, nonatomic) id <SCOperaWebViewFaviconProvider> faviconProvider; // @synthesize faviconProvider=_faviconProvider;
@property(readonly, nonatomic) _Bool fixProgressiveDownloadRetry; // @synthesize fixProgressiveDownloadRetry=_fixProgressiveDownloadRetry;
@property(nonatomic) _Bool fullContentEnabled; // @synthesize fullContentEnabled=_fullContentEnabled;
@property(retain, nonatomic) id <SCOperaGifProvider> gifProvider; // @synthesize gifProvider=_gifProvider;
@property(retain, nonatomic) id <SCOperaGLCommandsProvider> glCommandsProvider; // @synthesize glCommandsProvider=_glCommandsProvider;
@property(retain, nonatomic) id <SCOperaHtmlProvider> htmlProvider; // @synthesize htmlProvider=_htmlProvider;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) id <SCOperaImageProvider> imageProvider_DEPRECATED; // @synthesize imageProvider_DEPRECATED=_imageProvider_DEPRECATED;
- (id)initWithViewModel:(id)arg1 globalConfiguration:(id)arg2 experimentManager:(id)arg3;
@property(nonatomic) _Bool keepMuteOverrideOnDismiss; // @synthesize keepMuteOverrideOnDismiss=_keepMuteOverrideOnDismiss;
@property(retain, nonatomic) id <SCOperaLoadingProgressProvider> loadingProgressProvider; // @synthesize loadingProgressProvider=_loadingProgressProvider;
@property(nonatomic) double logoFadeOutAnimationDelay; // @synthesize logoFadeOutAnimationDelay=_logoFadeOutAnimationDelay;
@property(nonatomic) double logoFadeOutAnimationDuration; // @synthesize logoFadeOutAnimationDuration=_logoFadeOutAnimationDuration;
@property(nonatomic) double longPressMinimumPressDuration; // @synthesize longPressMinimumPressDuration=_longPressMinimumPressDuration;
@property(nonatomic) _Bool loopDisabledWhileDismissing; // @synthesize loopDisabledWhileDismissing=_loopDisabledWhileDismissing;
@property(nonatomic) _Bool loopMediaWhilePaging; // @synthesize loopMediaWhilePaging=_loopMediaWhilePaging;
@property(nonatomic) _Bool mainThreadForVolumeControllerEnabled; // @synthesize mainThreadForVolumeControllerEnabled=_mainThreadForVolumeControllerEnabled;
@property(retain, nonatomic) id <SCOperaViewModelsManipulator> modelManipulator; // @synthesize modelManipulator=_modelManipulator;
@property(retain, nonatomic) id <SCOperaNetworkRadioStatusEstimationOperator> networkRadioStatusEstimatorOperator; // @synthesize networkRadioStatusEstimatorOperator=_networkRadioStatusEstimatorOperator;
@property(retain, nonatomic) id <SCNotificationManager> notificationManager; // @synthesize notificationManager=_notificationManager;
@property(nonatomic) unsigned long long numberOfPlayers; // @synthesize numberOfPlayers=_numberOfPlayers;
@property(nonatomic) double pageHorizontalMargin; // @synthesize pageHorizontalMargin=_pageHorizontalMargin;
@property(nonatomic) double pageVerticalMargin; // @synthesize pageVerticalMargin=_pageVerticalMargin;
@property(retain, nonatomic) id <SCPageViewLogging> pageViewLogger; // @synthesize pageViewLogger=_pageViewLogger;
@property(copy, nonatomic) NSString *pageViewName; // @synthesize pageViewName=_pageViewName;
@property(readonly, nonatomic) double playerBufferDurationInSec; // @synthesize playerBufferDurationInSec=_playerBufferDurationInSec;
@property(readonly, nonatomic) id <SCOperaPrefetcherSettingsProvider> prefetchSettingsProvider; // @synthesize prefetchSettingsProvider=_prefetchSettingsProvider;
@property(nonatomic) _Bool presentationAnimationDisabled; // @synthesize presentationAnimationDisabled=_presentationAnimationDisabled;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(nonatomic) _Bool recognizeLeftTap; // @synthesize recognizeLeftTap=_recognizeLeftTap;
- (void)releaseRootViewModel;
@property(nonatomic) long long remoteVideoCaptionDisplayStrategy; // @synthesize remoteVideoCaptionDisplayStrategy=_remoteVideoCaptionDisplayStrategy;
@property(retain, nonatomic) id <SCOperaRemoteVideoPreloadStrategy> remoteVideoPreloadStrategy; // @synthesize remoteVideoPreloadStrategy=_remoteVideoPreloadStrategy;
@property(retain, nonatomic) id <SCOperaRemoteVideoPropertiesProvider> remoteVideoPropertiesProvider; // @synthesize remoteVideoPropertiesProvider=_remoteVideoPropertiesProvider;
@property(nonatomic) _Bool rotatingViewStartPinched; // @synthesize rotatingViewStartPinched=_rotatingViewStartPinched;
@property(nonatomic) _Bool rotationDisabled; // @synthesize rotationDisabled=_rotationDisabled;
@property(nonatomic) struct UIEdgeInsets safeAreaInsets; // @synthesize safeAreaInsets=_safeAreaInsets;
@property(retain, nonatomic) id <SCWebBrowsingURLChecker> safeBrowsingChecker; // @synthesize safeBrowsingChecker=_safeBrowsingChecker;
@property(nonatomic) unsigned long long scrollAnimationType; // @synthesize scrollAnimationType=_scrollAnimationType;
@property(retain, nonatomic) id <SCActionHandling> searchActionHandler; // @synthesize searchActionHandler=_searchActionHandler;
@property(retain, nonatomic) id <SCEventListener> searchLoggerListener; // @synthesize searchLoggerListener=_searchLoggerListener;
@property(retain, nonatomic) id <SCOperaShakeToReportOperator> shakeToReportOperator; // @synthesize shakeToReportOperator=_shakeToReportOperator;
@property(nonatomic) _Bool shouldAutoResumeOnStall; // @synthesize shouldAutoResumeOnStall=_shouldAutoResumeOnStall;
@property(nonatomic) _Bool shouldDisplaySubtitles; // @synthesize shouldDisplaySubtitles=_shouldDisplaySubtitles;
@property(nonatomic) _Bool shouldUseRemoteVideoProxy; // @synthesize shouldUseRemoteVideoProxy=_shouldUseRemoteVideoProxy;
@property(retain, nonatomic) id <SCOperaSnapLabeling> snapLabeler; // @synthesize snapLabeler=_snapLabeler;
@property(retain, nonatomic) id <SCOperaSnappablesPlugin> snappablesPlugin; // @synthesize snappablesPlugin=_snappablesPlugin;
@property(nonatomic) unsigned long long subtitlesSettings; // @synthesize subtitlesSettings=_subtitlesSettings;
@property(nonatomic) _Bool tapLeftGoToPreviousPage; // @synthesize tapLeftGoToPreviousPage=_tapLeftGoToPreviousPage;
@property(nonatomic) double tapLeftWidthRatio; // @synthesize tapLeftWidthRatio=_tapLeftWidthRatio;
@property(retain, nonatomic) id <SCUpNextGroupViewModelProvider> upNextGroupViewModelProvider; // @synthesize upNextGroupViewModelProvider=_upNextGroupViewModelProvider;
@property(retain, nonatomic) id <SCImageDownloading> upNextImageDownloader; // @synthesize upNextImageDownloader=_upNextImageDownloader;
@property(retain, nonatomic) id <SCOperaWebViewURLInterceptor> urlInterceptor; // @synthesize urlInterceptor=_urlInterceptor;
@property(nonatomic) _Bool useCustomAutoAdvanceAnimationDuration; // @synthesize useCustomAutoAdvanceAnimationDuration=_useCustomAutoAdvanceAnimationDuration;
@property(retain, nonatomic) SCOperaUserInfoProvider *userInfoProvider; // @synthesize userInfoProvider=_userInfoProvider;
@property(retain, nonatomic) id <SCOperaVideoAssetProvider> videoAssetProvider_DEPRECATED; // @synthesize videoAssetProvider_DEPRECATED=_videoAssetProvider_DEPRECATED;
@property(nonatomic) unsigned long long videoFastStartStrategy; // @synthesize videoFastStartStrategy=_videoFastStartStrategy;
@property(copy, nonatomic) NSArray *viewModelsToPreload; // @synthesize viewModelsToPreload=_viewModelsToPreload;
@property(retain, nonatomic) id <SCOperaWebAppLayerProviding> webAppLayerProvider; // @synthesize webAppLayerProvider=_webAppLayerProvider;
@property(retain, nonatomic) SCWebBrowserConfig *webBrowserConfig; // @synthesize webBrowserConfig=_webBrowserConfig;
@property(nonatomic) _Bool zoomEnabled; // @synthesize zoomEnabled=_zoomEnabled;
@property(readonly, nonatomic) NSString *shakeToReportDefaultString; // @synthesize shakeToReportDefaultString=_shakeToReportDefaultString;
@property(readonly, nonatomic) _Bool smartAVAssetAccess; // @synthesize smartAVAssetAccess=_smartAVAssetAccess;
@property(readonly, nonatomic) double springDampening; // @synthesize springDampening=_springDampening;
@property(readonly, nonatomic) SCOperaViewModel *viewModel; // @synthesize viewModel=_viewModel;

@end

