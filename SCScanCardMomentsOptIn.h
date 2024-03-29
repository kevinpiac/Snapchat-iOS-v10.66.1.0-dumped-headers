//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCScanCardTableViewCell.h"

#import "SCScanCardMomentsOptInProtocol-Protocol.h"

@class NSString, SCScanCardButton, SCUserSession, SOJUScannableActionNotificationOptIn, UIImageView, UILabel, UIView;
@protocol SCScanCardMomentsOptInDelegate;

@interface SCScanCardMomentsOptIn : SCScanCardTableViewCell <SCScanCardMomentsOptInProtocol>
{
    SOJUScannableActionNotificationOptIn *_notificationOptIn;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_imageView;
    UIView *_headerBackgroundView;
    UIView *_dividerView;
    SCScanCardButton *_optInButton;
    SCScanCardButton *_cancelButton;
    SCUserSession *_userSession;
    _Bool _didTapOptIn;
    id <SCScanCardMomentsOptInDelegate> momentsOptInDelegate;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_didTapCancel:(id)arg1;
- (void)_didTapOptInButton:(id)arg1;
- (void)cardDidRemove;
- (id)initWithNotificationOptIn:(id)arg1 userSession:(id)arg2;
@property(nonatomic) __weak id <SCScanCardMomentsOptInDelegate> momentsOptInDelegate; // @synthesize momentsOptInDelegate;
- (void)transitionToContentAnimated:(_Bool)arg1;
- (void)updateStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

