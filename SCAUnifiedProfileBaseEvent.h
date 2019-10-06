//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAUnifiedProfileBaseEvent : SCAUserTrackedEvent
{
    long long profileType;
    long long friendshipStatus;
    NSString *profileSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFriendshipStatus;
- (double)getPerUserSamplingRate;
- (id)getProfileSessionId;
- (long long)getProfileType;
- (id)init;
- (void)setFriendshipStatus:(long long)arg1;
- (void)setProfileSessionId:(id)arg1;
- (void)setProfileType:(long long)arg1;

@end

