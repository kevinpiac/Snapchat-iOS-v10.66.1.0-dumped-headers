//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOnboardingTooltip.h"

@class SCScanCardButton, SCShapeView, SCUserSession, UIImageView, UILabel, UIView;

@interface SCLensExplorerBottomTooltip : SCOnboardingTooltip
{
    UIView *_parentView;
    SCShapeView *_containerView;
    UIImageView *_iconImageView;
    UILabel *_captionLabel;
    UILabel *_messageLabel;
    SCScanCardButton *_okButton;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_playHideAnimation;
- (void)_playShowAnimation;
- (void)_prepareButton;
- (void)_prepareCaption;
- (void)_prepareContainer;
- (void)_prepareIcon;
- (void)_prepareMessage;
- (void)_prepareTooltip;
- (void)hide;
- (id)initWithParentView:(id)arg1 userSession:(id)arg2;
- (void)markCompleted;
- (_Bool)needsToBeCompleted;
- (void)show;
- (void)willShow;

@end

