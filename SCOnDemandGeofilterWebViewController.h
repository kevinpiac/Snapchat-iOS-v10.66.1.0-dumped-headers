//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOnDemandGeofilterBaseLeftSwipableViewController.h"

#import "SCHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSString, NSURLRequest, SCHeader, UIButton, UIWebView;
@protocol SCOnDemandGeofilterWebViewControllerDelegate;

@interface SCOnDemandGeofilterWebViewController : SCOnDemandGeofilterBaseLeftSwipableViewController <UIWebViewDelegate, SCHeaderDelegate, SCHeaderDataSource>
{
    SCHeader *_header;
    UIButton *_backButton;
    UIButton *_forwardButton;
    UIButton *_refreshButton;
    UIWebView *_webView;
    NSURLRequest *_request;
    id <SCOnDemandGeofilterWebViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)backPressed;
- (id)backgroundColorForHeader;
- (void)dealloc;
@property(nonatomic) __weak id <SCOnDemandGeofilterWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)forwardPressed;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (void)leftButtonPressed;
- (void)leftSwipeSucceed;
- (void)refreshPressed;
- (void)setBackButtonEnabled:(_Bool)arg1;
- (void)setForwardButtonEnabled:(_Bool)arg1;
- (void)setRefreshOrStopButtonEnabled:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (void)updateRefreshButtonStateLoading:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

