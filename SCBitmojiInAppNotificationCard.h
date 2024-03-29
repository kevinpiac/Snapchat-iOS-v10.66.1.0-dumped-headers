//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCBaseInAppNotificationCard.h"

@class SCBitmojiInAppNotificationItemView, SCLazy, SCUserSession;

@interface SCBitmojiInAppNotificationCard : SCBaseInAppNotificationCard
{
    SCBitmojiInAppNotificationItemView *_itemView;
    SCLazy *_typingBubbleView;
    _Bool _shouldShowTypingAnimations;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_showAndAnimateTypingBubbleIfNecessary;
- (id)initWithNotification:(id)arg1 withHostView:(id)arg2;
- (void)layoutSubviews;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;

@end

