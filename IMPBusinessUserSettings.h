//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class IMPBusinessUserSettings_NotificationSettings;

@interface IMPBusinessUserSettings : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNotificationSettings; // @dynamic hasNotificationSettings;
@property(nonatomic) long long newestReadNotificationTimestamp; // @dynamic newestReadNotificationTimestamp;
@property(retain, nonatomic) IMPBusinessUserSettings_NotificationSettings *notificationSettings; // @dynamic notificationSettings;
@property(nonatomic) int profileManagementViewCount; // @dynamic profileManagementViewCount;
@property(nonatomic) _Bool showStoryAttribution; // @dynamic showStoryAttribution;

@end
