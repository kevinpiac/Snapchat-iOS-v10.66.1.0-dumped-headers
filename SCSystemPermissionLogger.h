//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCSystemPermissionLogger : NSObject
{
}

+ (id)eventNameWithPermissionType:(id)arg1 eventType:(id)arg2;
+ (void)getUsername:(id *)arg1 permissionType:(id *)arg2 fromLastLinkToSettingsInfo:(id)arg3;
+ (id)lastLinkToSettingsInfoWithUsername:(id)arg1 permissionType:(id)arg2;
+ (void)logEventWithPermissionType:(id)arg1 eventType:(id)arg2 parameters:(id)arg3;
+ (void)willEnterForegroundWithUsername:(id)arg1 authorizedForVideoCapture:(_Bool)arg2;
+ (void)willLinkToSettingsWithUsername:(id)arg1 forPermissionType:(id)arg2;

@end

