//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCBaseInAppNotificationCard.h"

@class SCInAppNotificationItemView, SCLazy;

@interface SCInAppNotificationCard : SCBaseInAppNotificationCard
{
    SCInAppNotificationItemView *_itemView;
    SCLazy *_typingBubbleView;
}

- (void).cxx_destruct;
- (void)_showAndAnimateTypingBubbleIfNecessary;
- (id)initWithNotification:(id)arg1 withHostView:(id)arg2;
- (void)layoutSubviews;

@end
