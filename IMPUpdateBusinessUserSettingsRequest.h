//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBBoolValue, GPBInt32Value, GPBInt64Value, IMPBusinessUserSettings_NotificationSettings, NSString;

@interface IMPUpdateBusinessUserSettingsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *businessId; // @dynamic businessId;
@property(nonatomic) _Bool hasNewestReadNotificationTimestamp; // @dynamic hasNewestReadNotificationTimestamp;
@property(nonatomic) _Bool hasNotificationSettings; // @dynamic hasNotificationSettings;
@property(nonatomic) _Bool hasProfileManagementViewCount; // @dynamic hasProfileManagementViewCount;
@property(nonatomic) _Bool hasShowStoryAttribution; // @dynamic hasShowStoryAttribution;
@property(retain, nonatomic) GPBInt64Value *newestReadNotificationTimestamp; // @dynamic newestReadNotificationTimestamp;
@property(retain, nonatomic) IMPBusinessUserSettings_NotificationSettings *notificationSettings; // @dynamic notificationSettings;
@property(retain, nonatomic) GPBInt32Value *profileManagementViewCount; // @dynamic profileManagementViewCount;
@property(retain, nonatomic) GPBBoolValue *showStoryAttribution; // @dynamic showStoryAttribution;

@end

