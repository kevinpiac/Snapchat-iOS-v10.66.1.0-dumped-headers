//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNotificationServiceExtensionUserDefaults : NSObject
{
}

+ (id)configsForUserId:(id)arg1;
+ (_Bool)notificationBestFriendsSoundEnabledForUserId:(id)arg1;
+ (id)rankedBestFriendsUserIdsForUserId:(id)arg1;
+ (void)setConfigs:(id)arg1 forUserId:(id)arg2;
+ (void)setNotificationBestFriendsSoundEnabled:(_Bool)arg1 forUserId:(id)arg2;
+ (void)setRankedBestFriendsUserIds:(id)arg1 forUserId:(id)arg2;
+ (void)setUnviewedIncomingFriendsAppBadgeEnabled:(_Bool)arg1 forUserId:(id)arg2;
+ (_Bool)unviewedIncomingFriendsAppBadgeEnabledForUserId:(id)arg1;

@end

