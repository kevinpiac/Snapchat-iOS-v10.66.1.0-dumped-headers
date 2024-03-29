//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCLagunaOnboardingScrollViewDelegate-Protocol.h"
#import "SCSpectaclesUrlViewControllerDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AVPlayer, AVPlayerLayer, NSDate, NSString, SCLagunaOnboardingFlow, SCLagunaOnboardingScrollView, SCSpectaclesOnboardingThemeConfiguration, UIButton, UIImageView, UILabel;
@protocol SCDownloadableContentManaging, SCSpectaclesAppLogger, SCSpectaclesFirmwareVersion, SCSpectaclesHardwareVersion, SCSpectaclesTooltipProvider, SCSpectaclesUrlViewControllerFactory;

@interface SCLagunaOnboardingViewController : UIViewController <SCLagunaOnboardingScrollViewDelegate, UIScrollViewDelegate, SCTraceEnabled, SCSpectaclesUrlViewControllerDelegate>
{
    SCLagunaOnboardingScrollView *_scrollView;
    long long _lastPage;
    long long _lastVisitedPage;
    _Bool _hasViewAppearedBefore;
    SCLagunaOnboardingFlow *_flow;
    unsigned long long _onboardingSource;
    NSString *_pairingSessionId;
    NSString *_deviceId;
    id <SCSpectaclesFirmwareVersion> _firmwareVersion;
    id <SCSpectaclesHardwareVersion> _hardwareVersion;
    NSDate *_onboardingStartTime;
    UIImageView *_fallbackImageView;
    UIButton *_backButton;
    UILabel *_nextLabel;
    AVPlayer *_avPlayer;
    AVPlayerLayer *_avPlayerLayer;
    SCSpectaclesOnboardingThemeConfiguration *_config;
    _Bool _showBackButton;
    _Bool _scrollInProgress;
    id <SCSpectaclesTooltipProvider> _tooltipProvider;
    id <SCDownloadableContentManaging> _resourceManager;
    id <SCSpectaclesAppLogger> _analyticsLogger;
    id <SCSpectaclesUrlViewControllerFactory> _urlViewControllerFactory;
}

- (void).cxx_destruct;
- (void)_adjustVideoWhileScrubbing;
- (void)_backButtonPressed;
- (id)_currentOnboardingSessionInfo;
- (double)_determineMetric:(double [3])arg1 forHeight:(double)arg2;
- (void)_dismissOnboardingViewController;
- (void)_handlePageChangedTo:(long long)arg1;
- (id)_imageForBackButtonInState:(unsigned long long)arg1;
- (_Bool)_isPlayingNewportVideo;
- (void)_rollFilm;
- (void)_seekPlayTime:(CDStruct_1b6d18a9)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateFallbackImage;
- (void)_updateNextLabel;
@property(retain, nonatomic) id <SCSpectaclesAppLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
- (void)appEnteredForeground;
- (void)didEndAnimatingDescriptionLabels;
- (void)doneButtonTapped;
- (void)handleScrollViewTap:(id)arg1;
- (id)initWithFlow:(id)arg1 onboardingSessionInfo:(id)arg2 resourceManager:(id)arg3 tooltipProvider:(id)arg4 analyticsLogger:(id)arg5 urlViewControllerFactory:(id)arg6 showBackButton:(_Bool)arg7;
- (void)learnMoreButtonTapped;
- (void)loadView;
- (_Bool)prefersStatusBarHidden;
@property(retain, nonatomic) id <SCDownloadableContentManaging> resourceManager; // @synthesize resourceManager=_resourceManager;
@property(nonatomic) _Bool scrollInProgress; // @synthesize scrollInProgress=_scrollInProgress;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(nonatomic) __weak id <SCSpectaclesTooltipProvider> tooltipProvider; // @synthesize tooltipProvider=_tooltipProvider;
@property(retain, nonatomic) id <SCSpectaclesUrlViewControllerFactory> urlViewControllerFactory; // @synthesize urlViewControllerFactory=_urlViewControllerFactory;
- (unsigned long long)supportedInterfaceOrientations;
- (void)urlViewControllerDidDismiss:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

