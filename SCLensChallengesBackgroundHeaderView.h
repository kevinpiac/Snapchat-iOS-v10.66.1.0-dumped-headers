//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class CAGradientLayer, NSLayoutConstraint, NSString, SCLensChallengesBackgroundHeaderViewModel, SCLensChallengesLayout, SCNetworkImageView, UIButton, UILabel, UIVisualEffectView;
@protocol SCActionHandling, SCImageDownloading;

@interface SCLensChallengesBackgroundHeaderView : UIView <SCActionable, SCViewModelConfigurable>
{
    id <SCImageDownloading> _imageDownloader;
    SCLensChallengesLayout *_layout;
    SCNetworkImageView *_coverImageView;
    SCNetworkImageView *_thumbnailImageView;
    UILabel *_titleLabel;
    UILabel *_subltitleLabel;
    UIButton *_joinChallengeButton;
    UIButton *_closeButton;
    UIButton *_infoButton;
    UIVisualEffectView *_blurView;
    CAGradientLayer *_gradientLayer;
    NSLayoutConstraint *_bottomConstraintToButton;
    NSLayoutConstraint *_bottomConstraintToSubtitle;
    id <SCActionHandling> actionHandler;
    SCLensChallengesBackgroundHeaderViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)_closeButtonTapped:(id)arg1;
- (void)_infoButtoTapped:(id)arg1;
- (void)_initializeSubviews;
- (void)_joinChallengeTapped:(id)arg1;
- (void)_makeConstraints;
- (void)_setupKarma;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler;
- (id)initWithImageDownloader:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) SCLensChallengesBackgroundHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

