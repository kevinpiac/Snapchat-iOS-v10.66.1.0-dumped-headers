//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class FBShimmeringView, NSString, NSURL, SCExpandedButton, UIButton, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol SCOperaWebViewFaviconProvider, SCOperaWebViewHeaderViewDelegate;

@interface SCOperaWebViewHeaderView : UIView <UIGestureRecognizerDelegate>
{
    UIView *_urlBarContentView;
    UIView *_dividerBar;
    UIImageView *_httpsLockIcon;
    UIImageView *_favicon;
    UILabel *_webPageTitle;
    id <SCOperaWebViewFaviconProvider> _faviconProvider;
    NSURL *_currentUrl;
    UILongPressGestureRecognizer *_exitButtonLongPressRecognizer;
    double _exitButtonX;
    double _exitButtonY;
    UITapGestureRecognizer *_tapGesture;
    FBShimmeringView *_headerShimmeringView;
    _Bool _useWebviewStandardization;
    UIButton *_actionMenuButton;
    FBShimmeringView *_urlBarView;
    SCExpandedButton *_exitButton;
    id <SCOperaWebViewHeaderViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCOperaWebViewHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didLongPressExitButton:(id)arg1;
- (void)didTap:(id)arg1;
@property(readonly, nonatomic) SCExpandedButton *exitButton; // @synthesize exitButton=_exitButton;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)hideActionMenuButton;
- (id)initWithFrame:(struct CGRect)arg1 faviconProvider:(id)arg2 useWebviewStandardization:(_Bool)arg3 enableActionMenuButton:(_Bool)arg4;
- (void)layoutSubviews;
- (void)operaWebViewHeaderViewDidPressActionMenuButton;
- (void)setFaviconForURL:(id)arg1;
- (void)setFaviconProvider:(id)arg1;
- (void)setShimmering:(_Bool)arg1;
- (void)setUrlBarLoadingText:(id)arg1;
- (void)showActionMenuButton;
- (void)updateUrl:(id)arg1;
@property(readonly, nonatomic) FBShimmeringView *urlBarView; // @synthesize urlBarView=_urlBarView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

