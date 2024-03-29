//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCNetworkImageView, SCOperaWebAppChatInputView, UIButton, UILabel;
@protocol SCOperaWebAppInteractionViewDelegate;

@interface SCOperaWebAppInteractionView : UIView
{
    UIView *_containerView;
    UIView *_topBorder;
    UIButton *_closeButton;
    UIButton *_dismissButton;
    UIView *_separatorView;
    UIButton *_settingsButton;
    id <SCOperaWebAppInteractionViewDelegate> _delegate;
    unsigned long long _playerState;
    UIView *_audioAccessoryView;
    SCOperaWebAppChatInputView *_chatAccessoryView;
    UIButton *_inviteButton;
    SCNetworkImageView *_thumbnailView;
    UILabel *_descriptionLabel;
}

- (void).cxx_destruct;
- (void)_didClickCloseButton;
- (void)_didClickDismissButton;
- (void)_didClickInviteButton;
- (void)_didClickSettingsButton;
- (void)_initCloseButton;
- (void)_initContainerView;
- (void)_initDismissButton;
- (void)_initInviteButton;
- (void)_initSeparatorView;
- (void)_initSettingsButton;
- (void)_layoutAccessories;
- (void)_layoutAccessoryViewsForFriends;
- (void)_layoutAccessoryViewsForNonFriends;
- (void)_layoutSystemButtons;
- (void)_layoutSystemButtonsForFriends;
@property(retain, nonatomic) UIView *audioAccessoryView; // @synthesize audioAccessoryView=_audioAccessoryView;
@property(retain, nonatomic) SCOperaWebAppChatInputView *chatAccessoryView; // @synthesize chatAccessoryView=_chatAccessoryView;
@property(nonatomic) __weak id <SCOperaWebAppInteractionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIButton *inviteButton; // @synthesize inviteButton=_inviteButton;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long playerState; // @synthesize playerState=_playerState;
- (void)setInviteButtonEnabled:(_Bool)arg1;
- (void)setUpNonConversationViewsWithAppName:(id)arg1;
@property(readonly, nonatomic) SCNetworkImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;

@end

