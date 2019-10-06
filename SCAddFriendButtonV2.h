//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class Friend, SCExtendedHitButton, SCLoadingIndicatorView, UIImageView, UILabel;
@protocol SCAddFriendButtonV2Delegate, SCAddFriendButtonViewModel, SCStartChatDelegate;

@interface SCAddFriendButtonV2 : UIView
{
    Friend *_friend;
    long long _state;
    long long _style;
    struct CGRect _height;
    id <SCAddFriendButtonV2Delegate> _delegate;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SCAddFriendButtonViewModel> _viewModel;
    SCLoadingIndicatorView *_checkingIndicator;
    SCLoadingIndicatorView *_uncheckingIndicator;
    SCLoadingIndicatorView *_buttonLoadingIndicator;
    SCExtendedHitButton *_button;
    UIView *_buttonContentContainer;
    UIImageView *_buttonImageContainer;
    UILabel *_buttonTitleLabel;
    UIView *_buttonMidDivider;
}

+ (id)buttonWithState:(long long)arg1 friend:(id)arg2 delegate:(id)arg3 style:(long long)arg4;
- (void).cxx_destruct;
- (void)_addFriendPressed;
- (id)_getAccessibilityIdentifierWithState:(long long)arg1 friend:(id)arg2;
- (id)_getAttributedTitleWithState:(long long)arg1 style:(long long)arg2 friend:(id)arg3 title:(id)arg4;
- (id)_getBackgroundColorWithState:(long long)arg1 style:(long long)arg2;
- (id)_getBorderColorWithStyle:(long long)arg1;
- (id)_getButtonImageWithState:(long long)arg1 style:(long long)arg2;
- (id)_getIndicatorColorWithState:(long long)arg1 style:(long long)arg2;
- (id)_getTitleColorWithState:(long long)arg1 style:(long long)arg2;
- (id)_getTitleTextWithState:(long long)arg1 friend:(id)arg2 title:(id)arg3;
- (_Bool)_needsUpdateWidth:(long long)arg1;
- (id)_newIndicator:(long long)arg1 style:(long long)arg2;
- (void)_setButtonContentContainerLeftOffset:(double)arg1 RightOffset:(double)arg2;
- (_Bool)_shouldShowDisplayNamePopUp:(id)arg1 userAsFriend:(id)arg2;
- (void)_updateButtonBackgroundColorWithState:(long long)arg1 style:(long long)arg2;
- (void)_updateButtonTitleLabel:(_Bool)arg1;
@property(retain, nonatomic) SCExtendedHitButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIView *buttonContentContainer; // @synthesize buttonContentContainer=_buttonContentContainer;
@property(retain, nonatomic) UIImageView *buttonImageContainer; // @synthesize buttonImageContainer=_buttonImageContainer;
@property(retain, nonatomic) SCLoadingIndicatorView *buttonLoadingIndicator; // @synthesize buttonLoadingIndicator=_buttonLoadingIndicator;
@property(retain, nonatomic) UIView *buttonMidDivider; // @synthesize buttonMidDivider=_buttonMidDivider;
@property(retain, nonatomic) UILabel *buttonTitleLabel; // @synthesize buttonTitleLabel=_buttonTitleLabel;
@property(retain, nonatomic) SCLoadingIndicatorView *checkingIndicator; // @synthesize checkingIndicator=_checkingIndicator;
- (double)currentWidth;
- (double)expectedWidth;
- (id)initNoConstraintWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)refreshButton;
@property(retain, nonatomic) SCLoadingIndicatorView *uncheckingIndicator; // @synthesize uncheckingIndicator=_uncheckingIndicator;
@property(retain, nonatomic) id <SCAddFriendButtonViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (_Bool)updateButtonWithState:(long long)arg1 friend:(id)arg2 style:(long long)arg3;
- (_Bool)updateButtonWithStateAndTitle:(long long)arg1 friend:(id)arg2 style:(long long)arg3 title:(id)arg4 hideImage:(_Bool)arg5;

@end

