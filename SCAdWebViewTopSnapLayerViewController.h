//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCAdWebViewTopSnapJSBridgeDelegate-Protocol.h"
#import "SCAdWebViewTopSnapLayerViewDelegate-Protocol.h"
#import "SCOperaEventListener-Protocol.h"
#import "SCOperaLayerViewControllerMediaContainer-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class NSDate, NSString, NSTimer, SCAdWebViewTopSnapJSBridge, SCAdWebViewTopSnapLayerView, SCOperaViewInteraction, SCOperaWebView, SKStoreProductViewController;

@interface SCAdWebViewTopSnapLayerViewController : SCOperaLayerViewController <SCAdWebViewTopSnapLayerViewDelegate, SCAdWebViewTopSnapJSBridgeDelegate, SKStoreProductViewControllerDelegate, SCOperaEventListener, SCOperaLayerViewControllerMediaContainer>
{
    SCOperaWebView *_webView;
    SCAdWebViewTopSnapLayerView *_layerView;
    SCAdWebViewTopSnapJSBridge *_jsBridge;
    NSDate *_didStartLoadingTimestamp;
    NSDate *_didFinishLoadingTimestamp;
    NSDate *_didFullyAppearTimestamp;
    NSDate *_didFullyDisappearTimestamp;
    double _cookieParseTimeMillis;
    double _totalLoadTimeMillis;
    NSString *_errorReason;
    NSString *_errorMessage;
    _Bool _didFinishLoading;
    NSTimer *_loadingTimeoutTimer;
    SKStoreProductViewController *_productViewController;
    SCOperaViewInteraction *_lastInteraction;
    _Bool _isFullyVisible;
}

+ (id)_registeredEventsForOperaSession;
- (void).cxx_destruct;
- (id)_configDict:(id)arg1;
- (void)_initAndLoadWebview:(id)arg1;
- (void)_initStoreProductVC;
- (void)_loadUrlRequest;
- (void)_presentStoreProductVCModally;
- (_Bool)canHandleRoundCorner;
- (id)currentViewParameters;
- (void)didTapAdWebViewTopSnapLayerView:(id)arg1 tapLocation:(struct CGPoint)arg2;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;
- (_Bool)isOverlay;
- (void)loadView;
- (double)mediaHeightToWidthAspectRatio;
- (struct CGRect)mediaViewFrame;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)onError:(id)arg1 errorReason:(id)arg2 errorMessage:(id)arg3;
- (void)onLoaded:(id)arg1 cookieParseTimeMillis:(double)arg2 totalLoadTimeMillis:(double)arg3;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)teardown;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)viewDidFullyAppear;
- (void)viewDidFullyDisappear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
