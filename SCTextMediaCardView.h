//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCBaseMediaCardView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCExpandedButton, SCUserSession, UIActivityIndicatorView, UIColor, UIImageView, UILabel, UIView;
@protocol SCChatMediaCardViewModel;

@interface SCTextMediaCardView : SCBaseMediaCardView <UIGestureRecognizerDelegate>
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    SCExpandedButton *_actionButton;
    UIActivityIndicatorView *_activityIndicator;
    UIView *_thumbnailImageView;
    UIImageView *_accessoryImageView;
    UIColor *_backgroundColor;
    UIView *_subtitleView;
    id <SCChatMediaCardViewModel> _viewModel;
    SCUserSession *_userSession;
}

+ (id)_actionButtonBorderColor;
+ (id)_actionButtonColor;
+ (id)_actionButtonFont;
- (void).cxx_destruct;
- (void)_hideLoadingView;
- (void)_initActivityIndicator;
- (void)_initTitleLabel;
- (void)_resetThumbnail;
- (void)_updateThumbnailImageViewShape;
@property(readonly, nonatomic) UIImageView *accessoryImageView;
- (id)actionButton;
- (void)actionButtonPressed:(id)arg1;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (double)height;
- (id)initWithBackgroundColor:(id)arg1 hasBorder:(_Bool)arg2 userSession:(id)arg3;
- (id)initWithBackgroundColor:(id)arg1 userSession:(id)arg2;
- (id)initWithViewModel:(id)arg1 backgroundColor:(id)arg2 userSession:(id)arg3;
- (void)layoutSubviews;
- (void)setActionButtonText:(id)arg1;
- (void)setTitle:(id)arg1 subtitle:(id)arg2 actionText:(id)arg3 accessoryIcon:(id)arg4;
@property(retain, nonatomic) id <SCChatMediaCardViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (_Bool)shouldApplyThumbnailForLoadedViewModel:(id)arg1;
- (void)showLoadingView;
- (void)showThumbnailImage:(id)arg1 isGrayScale:(_Bool)arg2;
- (id)subtitleLabel;
@property(readonly, nonatomic) UIView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(readonly, nonatomic) UIImageView *thumbnailImageView;
- (void)thumbnailImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateWithViewModel:(id)arg1 backgroundColor:(id)arg2;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

