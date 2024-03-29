//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCPreviewTooltipBalloon, UIImageView;
@protocol SCAudioStitchControlsViewDelegate;

@interface SCAudioStitchControlsView : UIView
{
    UIImageView *_viewportImageView;
    UIView *_buttonContainerView;
    UIView *_onboardingBackgroundView;
    SCPreviewTooltipBalloon *_toolTipView;
    _Bool _onboardingBeingDismissed;
    long long _onboardingCount;
    _Bool _changeViewportButtonEnabled;
    _Bool _didShowTooltip;
    id <SCAudioStitchControlsViewDelegate> _delegate;
}

+ (id)_viewportButtonImages;
- (void).cxx_destruct;
- (void)_changeViewportButtonDidTap:(id)arg1;
- (void)_dismissOnboarding;
- (void)_setOnboardingVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setupOnboarding;
- (void)_setupToolTip;
- (void)_teardownOnboarding;
- (void)_teardownToolTip;
@property(nonatomic) double buttonAnimationDuration;
@property(nonatomic) _Bool changeViewportButtonEnabled; // @synthesize changeViewportButtonEnabled=_changeViewportButtonEnabled;
@property(nonatomic) __weak id <SCAudioStitchControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didChangeViewport;
- (void)didMoveToWindow;
@property(readonly, nonatomic) _Bool didShowTooltip; // @synthesize didShowTooltip=_didShowTooltip;
@property(readonly, nonatomic) _Bool displayingOnboarding;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHidden:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

