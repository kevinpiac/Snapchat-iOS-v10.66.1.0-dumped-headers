//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDownSwipableViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class NSData, NSString, SCSearchLoadingView, SCUserSession, UIView, WKWebView;
@protocol SCDiscoverFeedDebugViewControllerDelegate;

@interface SCDiscoverFeedDebugViewController : SCDownSwipableViewController <UIGestureRecognizerDelegate, WKNavigationDelegate>
{
    UIView *_blackView;
    WKWebView *_webView;
    SCSearchLoadingView *_loadingView;
    NSString *_responseDebugHtml;
    SCUserSession *_userSession;
    NSString *_storyId;
    NSString *_debugHtml;
    NSData *_lastStreamToken;
    id <SCDiscoverFeedDebugViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_hideLoadingIndicator;
- (void)_loadDebugInfoForStory;
- (void)_loadHtmlString:(id)arg1;
- (void)_receivedSCSSMStoriesResponseWithDebugHtml:(id)arg1;
- (void)_sendDebugRequestWithAccessToken:(id)arg1;
- (void)_showLoadingIndicator;
@property(nonatomic) __weak id <SCDiscoverFeedDebugViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismiss;
- (double)downSwipeContentOffsetY;
- (void)downSwipeSucceed;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleBackButtonTap;
- (void)handlePanGestureRecognizer:(id)arg1;
- (id)initWithUserSession:(id)arg1 storyId:(id)arg2 debugHtml:(id)arg3 lastStreamToken:(id)arg4;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

