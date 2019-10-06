//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAProfileInviteContactEnd : SCAUserTrackedEvent
{
    long long inviteType;
    NSString *status;
    NSString *inviteUrl;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getInviteType;
- (id)getInviteUrl;
- (double)getPerUserSamplingRate;
- (id)getStatus;
- (id)init;
- (void)setInviteType:(long long)arg1;
- (void)setInviteUrl:(id)arg1;
- (void)setStatus:(id)arg1;

@end

