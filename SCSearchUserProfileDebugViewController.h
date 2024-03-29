//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDownSwipableViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSString, SCSearchLoadingView, SCUserSession, UIView, UIWebView;
@protocol SCSearchUserProfileDebugViewControllerDelegate;

@interface SCSearchUserProfileDebugViewController : SCDownSwipableViewController <UIGestureRecognizerDelegate, UIWebViewDelegate>
{
    UIView *_blackView;
    UIWebView *_webView;
    SCSearchLoadingView *_loadingView;
    NSString *_responseDebugHtml;
    SCUserSession *_userSession;
    id <SCSearchUserProfileDebugViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_fetchAndDisplayUserProfileData;
- (void)_handleFailureWithError:(id)arg1;
- (void)_handleSuccessWithData:(id)arg1;
- (void)_hideLoadingIndicator;
- (void)_loadHtmlString:(id)arg1;
- (void)_showLoadingIndicator;
@property(nonatomic) __weak id <SCSearchUserProfileDebugViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismiss;
- (double)downSwipeContentOffsetY;
- (void)downSwipeSucceed;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleBackButtonTap;
- (void)handlePanGestureRecognizer:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

