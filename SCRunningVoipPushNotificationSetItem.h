//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableSet;

@interface SCRunningVoipPushNotificationSetItem : NSObject
{
    NSDate *_overallVoipPushNotificationStartTimestamp;
    NSMutableSet *_runningVoipPushNotifications;
}

- (void).cxx_destruct;
- (id)initWithFirstVoipPushNotificationStartTime:(id)arg1 firstPushNotification:(id)arg2;
@property(copy, nonatomic) NSDate *overallVoipPushNotificationStartTimestamp; // @synthesize overallVoipPushNotificationStartTimestamp=_overallVoipPushNotificationStartTimestamp;
@property(retain, nonatomic) NSMutableSet *runningVoipPushNotifications; // @synthesize runningVoipPushNotifications=_runningVoipPushNotifications;

@end
