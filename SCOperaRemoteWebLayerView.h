//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCConnectionErrorStateViewDelegate-Protocol.h"
#import "SCOperaLayerView-Protocol.h"
#import "SCOperaWebViewHeaderViewDelegate-Protocol.h"
#import "SCSafeBrowsingWarningViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class FBShimmeringView, NSString, NSTimer, NSURL, SCConnectionErrorStateView, SCLoadingIndicatorView, SCOperaWebView, SCOperaWebViewHeaderView, SCSafeBrowsingWarningView, SCWebViewProgressIndicator, UIButton, UIColor, UIImageView, UILabel, UILongPressGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer;
@protocol SCOperaRemoteWebLayerViewDelegate, SCOperaWebViewFaviconProvider;

@interface SCOperaRemoteWebLayerView : UIView <SCSafeBrowsingWarningViewDelegate, UIGestureRecognizerDelegate, SCOperaWebViewHeaderViewDelegate, SCConnectionErrorStateViewDelegate, SCOperaLayerView>
{
    SCSafeBrowsingWarningView *_safeBrowsingWarningView;
    SCConnectionErrorStateView *_connectionWarningView;
    UIButton *_connectionWarningRetryButton;
    UIView *_webviewViewContainer;
    _Bool _enableExitButton;
    UIButton *_exitButton;
    UIButton *_backButton;
    UIButton *_forwardButton;
    UIButton *_shareButton;
    UIView *_backButtonView;
    UISwipeGestureRecognizer *_downSwipeRecognizer;
    UISwipeGestureRecognizer *_upSwipeRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_backButtonLongPressRecognizer;
    UILongPressGestureRecognizer *_forwardButtonLongPressRecognizer;
    UILongPressGestureRecognizer *_shareButtonLongPressRecognizer;
    UILongPressGestureRecognizer *_exitButtonLongPressRecognizer;
    NSURL *_currentUrl;
    SCOperaWebView *_webView;
    _Bool _wasNeverVisible;
    _Bool _viewDidEnterBackground;
    UIView *_urlBarContentView;
    _Bool _shouldShowProgressBar;
    SCWebViewProgressIndicator *_loadProgressView;
    FBShimmeringView *_progressShimmeringView;
    double _loadProgressPercentage;
    double _urlBarYPos;
    double _loadProgressViewYPos;
    double _exitButtonYPos;
    double _navButtonYOffset;
    double _webviewMaskYPos;
    UIImageView *_favicon;
    UIImageView *_httpsLockIcon;
    UILabel *_webPageTitle;
    NSTimer *_inactivityTimer;
    _Bool _isLongPressingNavButton;
    _Bool _isFadingOnDismiss;
    _Bool _isFadingProgressBar;
    long long _showURLBar;
    _Bool _showingUrlBar;
    _Bool _progressBarShouldRemainHidden;
    _Bool _autofillPromptIsShowing;
    id <SCOperaWebViewFaviconProvider> _faviconProvider;
    _Bool _useImmersiveMode;
    _Bool _didPressImmersiveModeExitButton;
    UIButton *_immersiveModeExitButton;
    UILongPressGestureRecognizer *_immersiveModeExitButtonLongPressRecognizer;
    UIImageView *_topDarkGradientView;
    UIColor *_loadingBackgroundColor;
    _Bool _dismissOnlyWithExitButton;
    _Bool _loadUnsafeURL;
    SCOperaWebViewHeaderView *_headerView;
    _Bool _useWebviewStandardization;
    UIView *_loadingIndicatorBackgroundView;
    SCLoadingIndicatorView *_loadingIndicatorView;
    _Bool _shouldStartWithLoadingIndicator;
    _Bool _sharingEnable;
    UIColor *_webViewBackgroundColor;
    id <SCOperaRemoteWebLayerViewDelegate> _delegate;
    NSURL *_learnAboutSafeBrowsingMoreUrl;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
- (void)_fadeInHeaderView:(_Bool)arg1;
- (void)_fadeOutHeaderView:(_Bool)arg1;
- (void)_hideUrlBar;
- (void)_presentConnectionErrorView;
- (void)_showUrlBar;
- (void)_updateUrlBarState:(_Bool)arg1;
- (void)animateButtonPress:(id)arg1 scaleFactor:(double)arg2;
- (void)attachmentPulled:(double)arg1;
- (_Bool)buttonPressed:(id)arg1;
- (void)cardRotatedWithAngle:(double)arg1 yTranslation:(double)arg2;
- (void)createConnectionErrorView;
- (void)createSafeBrowsingWarningView;
@property(nonatomic) __weak id <SCOperaRemoteWebLayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didIgnoreSafeBrowsingWarning:(id)arg1;
- (void)didLongPressBackButton:(id)arg1;
- (void)didLongPressExitButton:(id)arg1;
- (void)didLongPressForwardButton:(id)arg1;
- (void)didLongPressImmersiveModeExitButton:(id)arg1;
- (void)didLongPressShareButton:(id)arg1;
- (_Bool)didPressImmersiveModeExitButton;
- (void)didResetWebview;
- (void)didSwipeDown:(id)arg1;
- (void)didSwipeUp:(id)arg1;
- (void)didTap:(id)arg1;
- (void)dismissKeyboard;
- (void)errorStateViewDidTapToRetry;
- (void)exitButtonTouchUp;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (double)getCurrentLoadProgress;
- (id)getWebPageTitleForURLBar:(id)arg1;
- (void)goBackFromSafeBrowsing;
- (void)hideConnectionErrorView;
- (void)hideNavButtons;
- (void)hideSafeBrowsingWarning;
- (void)hideWebView;
- (void)inactivityTimePeriodReached;
- (void)initGestureRecognizers;
- (void)initNavButtons;
- (_Bool)isLoadComplete;
- (_Bool)isLongPressingNavButton;
- (_Bool)isUrlWhitelisted:(id)arg1;
- (struct CGSize)labelAttributedTextSize:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) NSURL *learnAboutSafeBrowsingMoreUrl; // @synthesize learnAboutSafeBrowsingMoreUrl=_learnAboutSafeBrowsingMoreUrl;
- (void)learnMoreFromSafeBrowsing;
- (void)loadRequest:(id)arg1;
- (void)operaWebViewHeaderViewDidPressActionMenuButton;
- (void)operaWebViewHeaderViewDidPressExitButton:(id)arg1 buttonRecognizer:(id)arg2;
- (void)operaWebViewHeaderViewDidPressOutsideExitButton:(id)arg1;
- (void)reload;
- (void)resetInactivityTimer;
- (void)resetURLBarTransform;
- (void)resetWebView:(id)arg1 webView:(id)arg2;
- (void)scrollToTop:(_Bool)arg1;
- (id)scrollView;
- (void)setAnchorPoint:(double)arg1;
- (void)setAutoFillPromptVisibility:(_Bool)arg1;
- (void)setFaviconForURL:(id)arg1;
- (void)setFaviconProvider:(id)arg1;
- (void)setShareButtonVisibility:(_Bool)arg1;
- (void)setUrlBarLoadingText:(id)arg1;
- (void)setupWebViewAfterBackground:(_Bool)arg1;
- (void)shiftURLBar:(double)arg1 withPercentOffset:(double)arg2;
- (void)showApplicableButtons;
- (void)showConnectionError;
- (void)showGeneralError;
- (void)showSafeBrowsingWarning:(id)arg1 urlType:(long long)arg2;
- (void)showWebView;
- (void)stopLoading;
- (void)teardown;
- (void)updateNavButtons;
- (void)updateProgress:(float)arg1;
- (void)updateScrollViewYOffset:(double)arg1;
- (void)updateUrl:(id)arg1 overrideWhitelisted:(_Bool)arg2;
- (void)updateWithConfig:(id)arg1 webView:(id)arg2;
- (void)viewDidEnterBackgroundNotification;
@property(readonly, nonatomic) SCOperaWebView *webView; // @synthesize webView=_webView;
- (void)webViewDidFinishLoad;
- (void)webViewDidStartLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
