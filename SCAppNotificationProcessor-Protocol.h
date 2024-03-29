//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCNotificationProcessor-Protocol.h"

@class NSArray, SCAppNotification;

@protocol SCAppNotificationProcessor <SCNotificationProcessor>
- (void)processNotification:(SCAppNotification *)arg1;
- (long long)shouldFilterNotification:(SCAppNotification *)arg1;

@optional
- (void)didApplicationStateChange:(_Bool)arg1 withCurrentNotifications:(NSArray *)arg2;
- (void)removeNotification:(SCAppNotification *)arg1;
@end

