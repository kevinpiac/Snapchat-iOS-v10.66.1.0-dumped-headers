//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNotificationDebuggerLogger : NSObject
{
}

+ (id)_getJsonFromDictionary:(id)arg1;
+ (void)logAppPageChange:(id)arg1 newPageName:(id)arg2;
+ (void)logAppState:(_Bool)arg1;
+ (void)logBadgeCountUpdate:(long long)arg1;
+ (void)logNotificationBeginProcessing:(id)arg1;
+ (void)logNotificationDisplay:(id)arg1 isSystemNotification:(_Bool)arg2;
+ (void)logNotificationDrop:(id)arg1;
+ (void)logNotificationEndProcessing:(id)arg1;
+ (void)logNotificationIgnore:(id)arg1 isSystemNotification:(_Bool)arg2;
+ (void)logNotificationOpen:(id)arg1 destinationPage:(id)arg2;
+ (void)logNotificationProcessorBegin:(id)arg1 processorName:(id)arg2;
+ (void)logNotificationProcessorComplete:(id)arg1 processorName:(id)arg2;
+ (void)logNotificationRevoke:(id)arg1 revokedNotificationId:(id)arg2;
+ (void)logNotificationTapped:(id)arg1;

@end

