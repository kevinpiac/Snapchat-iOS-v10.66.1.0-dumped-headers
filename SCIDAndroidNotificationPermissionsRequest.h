//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCIDAndroidNotificationPermissionsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *notificationChannelGroupsArray; // @dynamic notificationChannelGroupsArray;
@property(readonly, nonatomic) unsigned long long notificationChannelGroupsArray_Count; // @dynamic notificationChannelGroupsArray_Count;
@property(retain, nonatomic) NSMutableArray *notificationChannelsArray; // @dynamic notificationChannelsArray;
@property(readonly, nonatomic) unsigned long long notificationChannelsArray_Count; // @dynamic notificationChannelsArray_Count;

@end

