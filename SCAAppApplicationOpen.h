//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSDate, NSNumber, NSString;

@interface SCAAppApplicationOpen : SCAUserTrackedEvent
{
    NSNumber *fromLogin;
    long long openState;
    long long source;
    long long deepLinkSource;
    long long applicationState;
    long long uploadSource;
    NSString *notificationType;
    NSString *notificationId;
    NSString *userAdId;
    NSString *deepLinkId;
    NSString *blizzardConfigVersion;
    NSString *channelId;
    NSString *longClientId;
    NSDate *appOpenTs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAppOpenTs;
- (long long)getApplicationState;
- (id)getBlizzardConfigVersion;
- (id)getChannelId;
- (id)getDeepLinkId;
- (long long)getDeepLinkSource;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getFromLogin;
- (id)getLongClientId;
- (id)getNotificationId;
- (id)getNotificationType;
- (long long)getOpenState;
- (double)getPerUserSamplingRate;
- (long long)getSource;
- (long long)getUploadSource;
- (id)getUserAdId;
- (id)init;
- (void)setAppOpenTs:(id)arg1;
- (void)setApplicationState:(long long)arg1;
- (void)setBlizzardConfigVersion:(id)arg1;
- (void)setChannelId:(id)arg1;
- (void)setDeepLinkId:(id)arg1;
- (void)setDeepLinkSource:(long long)arg1;
- (void)setFromLogin:(_Bool)arg1;
- (void)setLongClientId:(id)arg1;
- (void)setNotificationId:(id)arg1;
- (void)setNotificationType:(id)arg1;
- (void)setOpenState:(long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setUploadSource:(long long)arg1;
- (void)setUserAdId:(id)arg1;

@end

