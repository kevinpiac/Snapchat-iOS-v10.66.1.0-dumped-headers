//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCLoadingIndicatorView, UIImageView, UILabel;

@interface SCOperaCardInteractionCardView : UIView
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    SCLoadingIndicatorView *_spinningLoadingIndicator;
}

- (void).cxx_destruct;
- (void)_deepLinkSetupForLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setupViewForLayer:(id)arg1;
- (void)updateImageView:(id)arg1;

@end

