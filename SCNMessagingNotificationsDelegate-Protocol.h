//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCNMessagingFetchUserDisplayNameCallback, SCNMessagingNotification, SCNMessagingUUID;

@protocol SCNMessagingNotificationsDelegate
- (void)fetchUserDisplayName:(SCNMessagingUUID *)arg1 callback:(SCNMessagingFetchUserDisplayNameCallback *)arg2;
- (void)presentNotification:(SCNMessagingNotification *)arg1;
@end

