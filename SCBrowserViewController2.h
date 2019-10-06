//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCBrowserHeaderViewDelegate-Protocol.h"
#import "SCBrowserNavigationPolicyDeciderDelegate-Protocol.h"
#import "SCBrowserToolbarViewDelegate-Protocol.h"
#import "SCConnectionErrorStateViewDelegate-Protocol.h"
#import "SCOperaWebViewDelegate-Protocol.h"
#import "SCSafeBrowsingWarningViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSDictionary, NSString, NSURLRequest, SCBrowserHeaderView, SCBrowserNavigationPolicyDecider, SCBrowserToolbarView, SCBrowserViewControllerContent, SCConnectionErrorStateView, SCOperaWebView, SCSafeBrowsingWarningView, UIScrollView, UIView;
@protocol SCBrowserViewController2Delegate, SCWebBrowsingURLChecker;

@interface SCBrowserViewController2 : UIViewController <SCOperaWebViewDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIScrollViewDelegate, SCSafeBrowsingWarningViewDelegate, SCBrowserToolbarViewDelegate, UIGestureRecognizerDelegate, SCBrowserHeaderViewDelegate, SCConnectionErrorStateViewDelegate, SCBrowserNavigationPolicyDeciderDelegate>
{
    id <SCWebBrowsingURLChecker> _safeBrowsingChecker;
    SCBrowserViewControllerContent *_content;
    NSDictionary *_operaWebViewConfiguration;
    long long _sourceType;
    double _browserStartTime;
    SCBrowserNavigationPolicyDecider *_navigationPolicyDecider;
    _Bool _webviewIsLoading;
    long long _safeBrowsingRequestsInFlight;
    _Bool _hasLoadedAnyUrl;
    NSURLRequest *_mostRecentNavigationAttempted;
    UIView *_backdropContainer;
    SCBrowserHeaderView *_headerView;
    UIScrollView *_containerScrollView;
    UIView *_scrollingCard;
    SCOperaWebView *_webView;
    SCBrowserToolbarView *_toolbar;
    _Bool _toolbarVisible;
    id <SCBrowserViewController2Delegate> _delegate;
    double _presentationProgress;
    SCSafeBrowsingWarningView *_warningView;
    SCConnectionErrorStateView *_errorStateView;
}

+ (id)defaultOperaWebViewConfiguration;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)_showHideToolbarPanRecognized:(id)arg1;
- (void)_showSafetyWarning;
- (void)_updateUI;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)browserHeaderViewDismissButtonTapped:(id)arg1;
- (void)browserNavigationPolicyWantsToDismissWebview:(id)arg1;
- (void)browserToolbarWantsToGoBack:(id)arg1;
- (void)browserToolbarWantsToGoForward:(id)arg1;
- (void)browserToolbarWantsToOpenShareSheet:(id)arg1;
@property(nonatomic) __weak id <SCBrowserViewController2Delegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCConnectionErrorStateView *errorStateView; // @synthesize errorStateView=_errorStateView;
- (void)errorStateViewDidTapToRetry;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)goBackFromSafeBrowsing;
- (id)initWithContent:(id)arg1 operaWebViewConfiguration:(id)arg2 safeBrowsingChecker:(id)arg3 urlInterceptor:(id)arg4 sourceType:(long long)arg5 options:(long long)arg6;
- (void)learnMoreFromSafeBrowsing;
@property(nonatomic) double presentationProgress; // @synthesize presentationProgress=_presentationProgress;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(nonatomic) _Bool toolbarVisible; // @synthesize toolbarVisible=_toolbarVisible;
@property(retain, nonatomic) SCSafeBrowsingWarningView *warningView; // @synthesize warningView=_warningView;
- (double)transitionDuration:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
