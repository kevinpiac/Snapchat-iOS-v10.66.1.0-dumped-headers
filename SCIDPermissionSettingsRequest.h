//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCIDAndroidNotificationPermissionsRequest;

@interface SCIDPermissionSettingsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCIDAndroidNotificationPermissionsRequest *androidNotificationPermissionsRequest; // @dynamic androidNotificationPermissionsRequest;
@property(nonatomic) _Bool bluetoothAppEnabled; // @dynamic bluetoothAppEnabled;
@property(nonatomic) _Bool bluetoothDeviceEnabled; // @dynamic bluetoothDeviceEnabled;
@property(nonatomic) _Bool cameraAppEnabled; // @dynamic cameraAppEnabled;
@property(nonatomic) _Bool cameraRollAppEnabled; // @dynamic cameraRollAppEnabled;
@property(nonatomic) _Bool contactAccessAppEnabled; // @dynamic contactAccessAppEnabled;
@property(nonatomic) _Bool hasAndroidNotificationPermissionsRequest; // @dynamic hasAndroidNotificationPermissionsRequest;
@property(nonatomic) _Bool interactiveNotificationAppEnabled; // @dynamic interactiveNotificationAppEnabled;
@property(nonatomic) _Bool locationAppEnabled; // @dynamic locationAppEnabled;
@property(nonatomic) _Bool locationDeviceEnabled; // @dynamic locationDeviceEnabled;
@property(nonatomic) _Bool microphoneAppEnabled; // @dynamic microphoneAppEnabled;
@property(nonatomic) _Bool notificationAppEnabled; // @dynamic notificationAppEnabled;
@property(nonatomic) int reportSource; // @dynamic reportSource;
@property(nonatomic) _Bool userContactAppEnabled; // @dynamic userContactAppEnabled;
@property(nonatomic) _Bool userLocationAppEnabled; // @dynamic userLocationAppEnabled;

@end

