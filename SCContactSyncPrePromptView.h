//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCAddFriendsInterstitialView-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCFindFriendsCTAImageProvider, SCPrePromptPermissionCustomDialogView, TTTAttributedLabel, UIButton, UIImage, UIImageView;
@protocol SCUnauthenticatedStyleHelper;

@interface SCContactSyncPrePromptView : UIView <SCTraceEnabled, SCAddFriendsInterstitialView>
{
    SCPrePromptPermissionCustomDialogView *_dialogView;
    UIImageView *_backgroundImageView;
    UIImage *_originalBackgroundImage;
    SCFindFriendsCTAImageProvider *_imageProvider;
    UIButton *_skipButton;
    long long _viewType;
    id <SCUnauthenticatedStyleHelper> _styleHelper;
    CDUnknownBlockType _dontAllowButtonHandler;
    _Bool _isGrayScale;
    TTTAttributedLabel *_privacyPolicyLabel;
}

- (void).cxx_destruct;
- (void)_initBackgroundImageViewIfNeeded;
- (void)_initDialogViewWithAllowButtonHandler:(CDUnknownBlockType)arg1 denyButtonHandler:(CDUnknownBlockType)arg2;
- (void)_initPrivacyPolicyLabel;
- (void)_initSkipButtonIfNeeded;
- (_Bool)_isBackgroundImageViewNeeded;
- (_Bool)_isGhostImageNeeded;
- (_Bool)_isSkipButtonNeeded;
- (void)_skipButtonPressed:(id)arg1;
- (void)didMoveToSuperview;
- (_Bool)hasAllowButton;
- (_Bool)hasDenyButton;
- (id)initWithFrame:(struct CGRect)arg1 allowButtonHandler:(CDUnknownBlockType)arg2 denyButtonHandler:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1 viewType:(long long)arg2 allowButtonHandler:(CDUnknownBlockType)arg3 denyButtonHandler:(CDUnknownBlockType)arg4;
@property(nonatomic) _Bool isGrayScale; // @synthesize isGrayScale=_isGrayScale;
- (void)layoutSubviews;
@property(retain, nonatomic) TTTAttributedLabel *privacyPolicyLabel; // @synthesize privacyPolicyLabel=_privacyPolicyLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
