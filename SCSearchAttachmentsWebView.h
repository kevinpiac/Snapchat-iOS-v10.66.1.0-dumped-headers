//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCSearchScrollViewDismissalControllable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class NSString, SCAttachmentsBackButton, SCSafeBrowsingWarningView, SCSearchActionButton, SCWebViewProgressIndicator, WKWebView;
@protocol SCSearchAttachmentsWebViewDelegate;

@interface SCSearchAttachmentsWebView : UIView <WKNavigationDelegate, UIScrollViewDelegate, SCViewModelConfigurable, SCSearchScrollViewDismissalControllable>
{
    SCWebViewProgressIndicator *_progressView;
    SCAttachmentsBackButton *_backButton;
    SCSafeBrowsingWarningView *_safeBrowsingWarningView;
    struct CGRect _currentMaskRect;
    double _originOffsetY;
    _Bool _safeBrowsingViewHidden;
    id _viewModel;
    id <SCSearchAttachmentsWebViewDelegate> _delegate;
    WKWebView *_webView;
    SCSearchActionButton *_attachButton;
    double _progressViewOffset;
    long long _safeBrowsingUrlType;
    struct CGPoint _attachButtonOriginOffset;
    struct UIEdgeInsets _layoutInsets;
}

- (void).cxx_destruct;
- (_Bool)_attachButtonIsHidden;
- (void)_didTapBackButton:(id)arg1;
- (void)_handleButtonTap:(id)arg1;
- (void)_layoutButtonsWithEffectiveBounds:(struct CGRect)arg1;
- (void)_setAttachButtonDestinationAlpha:(double)arg1 offset:(struct CGPoint)arg2;
- (void)_updateRoundedCornerMaskIfNeeded;
- (void)applyTranslation:(struct CGPoint)arg1;
@property(readonly, nonatomic) SCSearchActionButton *attachButton; // @synthesize attachButton=_attachButton;
@property(nonatomic) struct CGPoint attachButtonOriginOffset; // @synthesize attachButtonOriginOffset=_attachButtonOriginOffset;
- (struct CGPoint)contentOffset;
- (void)dealloc;
@property(nonatomic) __weak id <SCSearchAttachmentsWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithSafeBrowsingWarningView:(id)arg1;
- (_Bool)isAttachButtonHidden;
@property(nonatomic, getter=isBackButtonHidden) _Bool backButtonHidden;
@property(nonatomic, getter=isSafeBrowsingViewHidden) _Bool safeBrowsingViewHidden; // @synthesize safeBrowsingViewHidden=_safeBrowsingViewHidden;
@property(nonatomic) struct UIEdgeInsets layoutInsets; // @synthesize layoutInsets=_layoutInsets;
- (void)layoutSubviews;
@property(readonly, nonatomic) SCWebViewProgressIndicator *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) double progressViewOffset; // @synthesize progressViewOffset=_progressViewOffset;
@property(readonly, nonatomic) long long safeBrowsingUrlType; // @synthesize safeBrowsingUrlType=_safeBrowsingUrlType;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAttachButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSafeBrowsingViewStateForUrlType:(long long)arg1;
- (void)setScrollEnabled:(_Bool)arg1;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (double)targetOffsetY;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

