//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAlertViewActionButton.h"

@class NSString, UIColor, UIImageView, UILabel, UIView;

@interface SCOperaSubscriptionButton : SCAlertViewActionButton
{
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIColor *_backgroundColor;
    UIColor *_titleColor;
    double _assetSpacing;
    NSString *_buttonTitle;
    UIImageView *_actionView;
    UIImageView *_reverseActionView;
    NSString *_actionButtonTitle;
    NSString *_reverseActionTitle;
    NSString *_loadingButtonTitle;
    NSString *_reverseLoadingTitle;
    UILabel *_titleLabel;
    UIView *_assetView;
    UIView *_assetContainerView;
}

- (void).cxx_destruct;
- (void)_setColor;
- (void)_setTitle;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setButtonState:(unsigned long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithConfiguration:(id)arg1;

@end

