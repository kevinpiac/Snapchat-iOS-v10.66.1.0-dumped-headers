//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCCognacScoreShareMessageCardActionContainerViewModel, SCLazy, SCNetworkImageView, UILabel;
@protocol SCCognacScoreShareMessageCardActionContainerViewDelegate, SCImageDownloading;

@interface SCCognacScoreShareMessageCardActionContainerView : UIView
{
    SCNetworkImageView *_avatarImageView;
    SCLazy *_buttonLazy;
    SCNetworkImageView *_scoreIconImageView;
    UILabel *_scoreLabel;
    UILabel *_titleLabel;
    SCCognacScoreShareMessageCardActionContainerViewModel *_viewModel;
    id <SCImageDownloading> _imageDownloader;
    id <SCCognacScoreShareMessageCardActionContainerViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didTapButton;
- (void)_handleFetchedSnapchatter:(id)arg1 viewModel:(id)arg2;
- (void)_initAvatarView;
- (void)_initButtonView;
- (void)_initScoreIconView;
- (void)_initScoreLabel;
- (void)_initTitleLabel;
@property(nonatomic) __weak id <SCCognacScoreShareMessageCardActionContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) SCCognacScoreShareMessageCardActionContainerViewModel *viewModel; // @synthesize viewModel=_viewModel;

@end

